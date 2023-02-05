#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function DungeonCrawler.AccountLink.UnbindMsgAll
	 */
	struct UAccountLink_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountLink.UnbindMsg
	 */
	struct UAccountLink_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountLink.TerminateBase
	 */
	struct UAccountLink_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.AccountLink.BroadcastMsgBlueprint
	 */
	struct UAccountLink_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountLinkAll.UnbindMsgAll
	 */
	struct UAccountLinkAll_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountLinkAll.UnbindMsg
	 */
	struct UAccountLinkAll_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountLinkAll.TerminateBase
	 */
	struct UAccountLinkAll_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.AccountLinkAll.BroadcastMsgBlueprint
	 */
	struct UAccountLinkAll_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountSession.UnbindMsgAll
	 */
	struct UAccountSession_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountSession.UnbindMsg
	 */
	struct UAccountSession_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AccountSession.TerminateBase
	 */
	struct UAccountSession_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.AccountSession.BroadcastMsgBlueprint
	 */
	struct UAccountSession_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributesChange
	 */
	struct UAsyncTaskAttributeChanged_ListenForAttributesChange_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayAttribute>                          Attributes;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UAsyncTaskAttributeChanged*                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributeChange
	 */
	struct UAsyncTaskAttributeChanged_ListenForAttributeChange_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncTaskAttributeChanged*                          ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskAttributeChanged.EndTask
	 */
	struct UAsyncTaskAttributeChanged_EndTask_Params
	{	};

	/**
	 * Function DungeonCrawler.AsyncTaskCooldownChanged.ListenForCooldownChange
	 */
	struct UAsyncTaskCooldownChanged_ListenForCooldownChange_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               CooldownTags;                                            // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       UseServerCooldown;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_293O[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskCooldownChanged*                           ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskCooldownChanged.EndTask
	 */
	struct UAsyncTaskCooldownChanged_EndTask_Params
	{	};

	/**
	 * Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.ListenForGameplayInhibitionChange
	 */
	struct UAsyncTaskEffectInhibitionChanged_ListenForGameplayInhibitionChange_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EffectGameplayTag;                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncTaskEffectInhibitionChanged*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.EndTask
	 */
	struct UAsyncTaskEffectInhibitionChanged_EndTask_Params
	{	};

	/**
	 * Function DungeonCrawler.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
	 */
	struct UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EffectGameplayTag;                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncTaskEffectStackChanged*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskEffectStackChanged.EndTask
	 */
	struct UAsyncTaskEffectStackChanged_EndTask_Params
	{	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivateWithTagRequirements
	 */
	struct UAsyncTaskWaitGAActivated_WaitForAbilityActivateWithTagRequirements_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TagRequirements;                                         // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TXC1[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAActivated*                           ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate_Query
	 */
	struct UAsyncTaskWaitGAActivated_WaitForAbilityActivate_Query_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M211[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAActivated*                           ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate
	 */
	struct UAsyncTaskWaitGAActivated_WaitForAbilityActivate_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TLBP[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAActivated*                           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAActivated.OnAbilityActivate
	 */
	struct UAsyncTaskWaitGAActivated_OnAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEndWithTagRequirements
	 */
	struct UAsyncTaskWaitGAEnded_WaitForAbilityEndWithTagRequirements_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TagRequirements;                                         // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JO1N[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAEnded*                               ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd_Query
	 */
	struct UAsyncTaskWaitGAEnded_WaitForAbilityEnd_Query_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UY7P[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAEnded*                               ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd
	 */
	struct UAsyncTaskWaitGAEnded_WaitForAbilityEnd_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FRJI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGAEnded*                               ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGAEnded.OnAbilityEnded
	 */
	struct UAsyncTaskWaitGAEnded_OnAbilityEnded_Params
	{
	public:
		struct FAbilityEndedData                                   AbilityEndedData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AsyncTaskWaitGameplayEvent.WaitGameplayEventToActor
	 */
	struct UAsyncTaskWaitGameplayEvent_WaitGameplayEventToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyMatchExact;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DSW0[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncTaskWaitGameplayEvent*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DungeonCrawler.AsyncTaskWaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	 */
	struct UAsyncTaskWaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.SetAttackEnabled
	 */
	struct UAttackInputManagerComponent_SetAttackEnabled_Params
	{
	public:
		bool                                                       bIsAttackEnabled;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.OnAbilityEnded
	 */
	struct UAttackInputManagerComponent_OnAbilityEnded_Params
	{
	public:
		struct FAbilityEndedData                                   AbilityEndedData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.OnAbilityActivate
	 */
	struct UAttackInputManagerComponent_OnAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.HandleAttackInput
	 */
	struct UAttackInputManagerComponent_HandleAttackInput_Params
	{
	public:
		struct FGameplayTag                                        InputTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.GetCurrentTriggerTag
	 */
	struct UAttackInputManagerComponent_GetCurrentTriggerTag_Params
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.AttackInputManagerComponent.EventReceived
	 */
	struct UAttackInputManagerComponent_EventReceived_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsgAll
	 */
	struct UBTDecorator_DCGameBlackboard_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsg
	 */
	struct UBTDecorator_DCGameBlackboard_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTDecorator_DCGameBlackboard.TerminateBase
	 */
	struct UBTDecorator_DCGameBlackboard_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.BTDecorator_DCGameBlackboard.BroadcastMsgBlueprint
	 */
	struct UBTDecorator_DCGameBlackboard_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTService_DCGameBase.UnbindMsgAll
	 */
	struct UBTService_DCGameBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTService_DCGameBase.UnbindMsg
	 */
	struct UBTService_DCGameBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTService_DCGameBase.TerminateBase
	 */
	struct UBTService_DCGameBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.BTService_DCGameBase.BroadcastMsgBlueprint
	 */
	struct UBTService_DCGameBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTTask_DCGameBase.UnbindMsgAll
	 */
	struct UBTTask_DCGameBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTTask_DCGameBase.UnbindMsg
	 */
	struct UBTTask_DCGameBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTTask_DCGameBase.TerminateBase
	 */
	struct UBTTask_DCGameBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.BTTask_DCGameBase.BroadcastMsgBlueprint
	 */
	struct UBTTask_DCGameBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.BTT_BlueprintBase.OnTaskFinished
	 */
	struct UBTT_BlueprintBase_OnTaskFinished_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBTNodeResult                                              TaskResult;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.UnbindMsgOwner
	 */
	struct UDCWidgetBase_UnbindMsgOwner_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.UnbindMsgAllOwner
	 */
	struct UDCWidgetBase_UnbindMsgAllOwner_Params
	{	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.UnbindMsgAll
	 */
	struct UDCWidgetBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.UnbindMsg
	 */
	struct UDCWidgetBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.TerminateBase
	 */
	struct UDCWidgetBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.IsSpectating
	 */
	struct UDCWidgetBase_IsSpectating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.GetOwningBaseInterfaceBlueprint
	 */
	struct UDCWidgetBase_GetOwningBaseInterfaceBlueprint_Params
	{	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.BroadcastMsgBlueprint
	 */
	struct UDCWidgetBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBase.BindMsgOwner
	 */
	struct UDCWidgetBase_BindMsgOwner_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBindMsgNode*                                        InMsgDynamicDelegate;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterCreateWidget.OnTextChangedNickName
	 */
	struct UCharacterCreateWidget_OnTextChangedNickName_Params
	{
	public:
		class FText                                                InNickName;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterCreateWidget.OnGenderClicked
	 */
	struct UCharacterCreateWidget_OnGenderClicked_Params
	{
	public:
		EDCGender                                                  Gender;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterCreateWidget.HandleExitButtonClicked
	 */
	struct UCharacterCreateWidget_HandleExitButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterCreateWidget.HandleConfirmButtonClicked
	 */
	struct UCharacterCreateWidget_HandleConfirmButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCDataComponent.OnRep_AssetId
	 */
	struct UDCDataComponent_OnRep_AssetId_Params
	{
	public:
		struct FPrimaryAssetId                                     PrevAssetId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnSelectedCharacterId
	 */
	struct UCharacterSelectCharListWidget_OnSelectedCharacterId_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnPageNumber
	 */
	struct UCharacterSelectCharListWidget_OnPageNumber_Params
	{
	public:
		int32_t                                                    CurrentPage;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPage;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnListRightButtonClicked
	 */
	struct UCharacterSelectCharListWidget_OnListRightButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnListLeftButtonClicked
	 */
	struct UCharacterSelectCharListWidget_OnListLeftButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotListViewItemClicked
	 */
	struct UCharacterSelectCharListWidget_OnCharacterSlotListViewItemClicked_Params
	{
	public:
		class UObject*                                             Obj;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotData
	 */
	struct UCharacterSelectCharListWidget_OnCharacterSlotData_Params
	{
	public:
		struct FCharacterSlotData                                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterSlotData                                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterDeleteClicked
	 */
	struct UCharacterSelectCharListWidget_HandleCharacterDeleteClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterCreateClicked
	 */
	struct UCharacterSelectCharListWidget_HandleCharacterCreateClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharListWidget.GetSelectedCharacterWidgetData
	 */
	struct UCharacterSelectCharListWidget_GetSelectedCharacterWidgetData_Params
	{
	public:
		class UCharacterSelectCharacterSlotWidgetData*             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharSlotWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
	 */
	struct UCharacterSelectCharSlotWidget_OnFMsgWidgetStreamingModeNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetStreamingModeNotify                       InMsg;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectCharSlotWidget.OnCharacterSlot
	 */
	struct UCharacterSelectCharSlotWidget_OnCharacterSlot_Params
	{
	public:
		struct FCharacterSlot                                      NewValue;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterSlot                                      OldValue;                                                // 0x0090(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterSelectWidget.HandleOptionButtonClicked
	 */
	struct UCharacterSelectWidget_HandleOptionButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectWidget.HandleLobbyButtonClicked
	 */
	struct UCharacterSelectWidget_HandleLobbyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectWidget.HandleExitButtonClicked
	 */
	struct UCharacterSelectWidget_HandleExitButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterSelectWidget.HandleCreditsButtonClicked
	 */
	struct UCharacterSelectWidget_HandleCreditsButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWill
	 */
	struct UCharacterStatusDetailWidget_OnWill_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitMod
	 */
	struct UCharacterStatusDetailWidget_OnWeightLimitMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitBase
	 */
	struct UCharacterStatusDetailWidget_OnWeightLimitBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitAdd
	 */
	struct UCharacterStatusDetailWidget_OnWeightLimitAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimit
	 */
	struct UCharacterStatusDetailWidget_OnWeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnWeight
	 */
	struct UCharacterStatusDetailWidget_OnWeight_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessMod
	 */
	struct UCharacterStatusDetailWidget_OnUtilityEffectivenessMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessBase
	 */
	struct UCharacterStatusDetailWidget_OnUtilityEffectivenessBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessAdd
	 */
	struct UCharacterStatusDetailWidget_OnUtilityEffectivenessAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectiveness
	 */
	struct UCharacterStatusDetailWidget_OnUtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnStrength
	 */
	struct UCharacterStatusDetailWidget_OnStrength_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellPayload
	 */
	struct UCharacterStatusDetailWidget_OnSpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCastingSpeed
	 */
	struct UCharacterStatusDetailWidget_OnSpellCastingSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityMod
	 */
	struct UCharacterStatusDetailWidget_OnSpellCapacityMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityBase
	 */
	struct UCharacterStatusDetailWidget_OnSpellCapacityBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityAdd
	 */
	struct UCharacterStatusDetailWidget_OnSpellCapacityAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacity
	 */
	struct UCharacterStatusDetailWidget_OnSpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryWeaponImpactPower
	 */
	struct UCharacterStatusDetailWidget_OnSecondaryWeaponImpactPower_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryAbilityWidgetArray
	 */
	struct UCharacterStatusDetailWidget_OnSecondaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnResourcefulness
	 */
	struct UCharacterStatusDetailWidget_OnResourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeedBase
	 */
	struct UCharacterStatusDetailWidget_OnRegularInteractionSpeedBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeed
	 */
	struct UCharacterStatusDetailWidget_OnRegularInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnProjectileReductionMod
	 */
	struct UCharacterStatusDetailWidget_OnProjectileReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryWeaponImpactPower
	 */
	struct UCharacterStatusDetailWidget_OnPrimaryWeaponImpactPower_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryAbilityWidgetArray
	 */
	struct UCharacterStatusDetailWidget_OnPrimaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPrestigeItemDrop
	 */
	struct UCharacterStatusDetailWidget_OnPrestigeItemDrop_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionMod
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionBonus
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionArmorRating
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalReductionArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReduction
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalPower
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealBase
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalHealBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponSecondary
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageWeaponSecondary_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponPrimary
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageWeaponPrimary_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageTrue
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageTrue_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModPhysicalPower
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageModPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModBonus
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageMod
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageBase
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageAdd
	 */
	struct UCharacterStatusDetailWidget_OnPhysicalDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedWithModifier
	 */
	struct UCharacterStatusDetailWidget_OnMoveSpeedWithModifier_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedMod
	 */
	struct UCharacterStatusDetailWidget_OnMoveSpeedMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedBase
	 */
	struct UCharacterStatusDetailWidget_OnMoveSpeedBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedAdd
	 */
	struct UCharacterStatusDetailWidget_OnMoveSpeedAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeed
	 */
	struct UCharacterStatusDetailWidget_OnMoveSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthMod
	 */
	struct UCharacterStatusDetailWidget_OnMaxHealthMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthBase
	 */
	struct UCharacterStatusDetailWidget_OnMaxHealthBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthAdd
	 */
	struct UCharacterStatusDetailWidget_OnMaxHealthAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealth
	 */
	struct UCharacterStatusDetailWidget_OnMaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicResistance
	 */
	struct UCharacterStatusDetailWidget_OnMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicPenetration
	 */
	struct UCharacterStatusDetailWidget_OnMagicPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMod
	 */
	struct UCharacterStatusDetailWidget_OnMagicalReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMagicResistance
	 */
	struct UCharacterStatusDetailWidget_OnMagicalReductionMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionBonus
	 */
	struct UCharacterStatusDetailWidget_OnMagicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReduction
	 */
	struct UCharacterStatusDetailWidget_OnMagicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalPower
	 */
	struct UCharacterStatusDetailWidget_OnMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalInteractionSpeed
	 */
	struct UCharacterStatusDetailWidget_OnMagicalInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealBase
	 */
	struct UCharacterStatusDetailWidget_OnMagicalHealBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageTrue
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageTrue_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModMagicalPower
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageModMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModBonus
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageMod
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageBase
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageAdd
	 */
	struct UCharacterStatusDetailWidget_OnMagicalDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnKnowledge
	 */
	struct UCharacterStatusDetailWidget_OnKnowledge_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnItemEquipSpeed
	 */
	struct UCharacterStatusDetailWidget_OnItemEquipSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnImpactPower
	 */
	struct UCharacterStatusDetailWidget_OnImpactPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnHealth
	 */
	struct UCharacterStatusDetailWidget_OnHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnHeadshotReductionMod
	 */
	struct UCharacterStatusDetailWidget_OnHeadshotReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnDebuffDurationMod
	 */
	struct UCharacterStatusDetailWidget_OnDebuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnBuffDurationMod
	 */
	struct UCharacterStatusDetailWidget_OnBuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorRating
	 */
	struct UCharacterStatusDetailWidget_OnArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorPenetration
	 */
	struct UCharacterStatusDetailWidget_OnArmorPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnAgility
	 */
	struct UCharacterStatusDetailWidget_OnAgility_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusDetailWidget.OnActionSpeed
	 */
	struct UCharacterStatusDetailWidget_OnActionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWill
	 */
	struct UCharacterStatusWidget_OnWill_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitMod
	 */
	struct UCharacterStatusWidget_OnWeightLimitMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitBase
	 */
	struct UCharacterStatusWidget_OnWeightLimitBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitAdd
	 */
	struct UCharacterStatusWidget_OnWeightLimitAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWeightLimit
	 */
	struct UCharacterStatusWidget_OnWeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnWeight
	 */
	struct UCharacterStatusWidget_OnWeight_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessMod
	 */
	struct UCharacterStatusWidget_OnUtilityEffectivenessMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessBase
	 */
	struct UCharacterStatusWidget_OnUtilityEffectivenessBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessAdd
	 */
	struct UCharacterStatusWidget_OnUtilityEffectivenessAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectiveness
	 */
	struct UCharacterStatusWidget_OnUtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnStrength
	 */
	struct UCharacterStatusWidget_OnStrength_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnSpellPayload
	 */
	struct UCharacterStatusWidget_OnSpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityMod
	 */
	struct UCharacterStatusWidget_OnSpellCapacityMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityBase
	 */
	struct UCharacterStatusWidget_OnSpellCapacityBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityAdd
	 */
	struct UCharacterStatusWidget_OnSpellCapacityAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacity
	 */
	struct UCharacterStatusWidget_OnSpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnResourcefulness
	 */
	struct UCharacterStatusWidget_OnResourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthMod
	 */
	struct UCharacterStatusWidget_OnMaxHealthMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthBase
	 */
	struct UCharacterStatusWidget_OnMaxHealthBase_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthAdd
	 */
	struct UCharacterStatusWidget_OnMaxHealthAdd_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnMaxHealth
	 */
	struct UCharacterStatusWidget_OnMaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnKnowledge
	 */
	struct UCharacterStatusWidget_OnKnowledge_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnHealth
	 */
	struct UCharacterStatusWidget_OnHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CharacterStatusWidget.OnAgility
	 */
	struct UCharacterStatusWidget_OnAgility_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatEditWidgetBase.OnTextCommitted
	 */
	struct UChatEditWidgetBase_OnTextCommitted_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                InCommitMethod;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatEditWidgetBase.OnTextChanged
	 */
	struct UChatEditWidgetBase_OnTextChanged_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatSetWidgetBase.SetChatKeyboardFocus
	 */
	struct UChatSetWidgetBase_SetChatKeyboardFocus_Params
	{	};

	/**
	 * Function DungeonCrawler.ChatSetWidgetBase.OnChatEditFocus
	 */
	struct UChatSetWidgetBase_OnChatEditFocus_Params
	{
	public:
		bool                                                       InbFocus;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatSetWidgetBase.OnChatDataCommitted
	 */
	struct UChatSetWidgetBase_OnChatDataCommitted_Params
	{
	public:
		struct FChatData                                           InChatData;                                              // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatSetWidgetBase.OnChatDataChanged
	 */
	struct UChatSetWidgetBase_OnChatDataChanged_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatWidgetBase.OnRightClicked
	 */
	struct UChatWidgetBase_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.ChatWidgetBase.OnChatRecordData
	 */
	struct UChatWidgetBase_OnChatRecordData_Params
	{
	public:
		struct FChatRecord                                         NewValue;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChatRecord                                         OldValue;                                                // 0x0070(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ChatWidgetBase.FilterStreamingMode
	 */
	struct UChatWidgetBase_FilterStreamingMode_Params
	{
	public:
		class FString                                              OriginalStr;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassIconWidget.OnClickedClassIconButton
	 */
	struct UClassIconWidget_OnClickedClassIconButton_Params
	{	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.SetSelectedSlotIndex
	 */
	struct UClassPerkListWidgetBase_SetSelectedSlotIndex_Params
	{
	public:
		int32_t                                                    InSlotIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UClassPerkListWidgetBase_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UClassPerkListWidgetBase_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
	 */
	struct UClassPerkListWidgetBase_OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify    InMsg;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotPerkId
	 */
	struct UClassPerkListWidgetBase_GetSelectedSlotPerkId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotIndex
	 */
	struct UClassPerkListWidgetBase_GetSelectedSlotIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSelectWidget.OnPlayerCharacterId
	 */
	struct UClassSelectWidget_OnPlayerCharacterId_Params
	{
	public:
		struct FPrimaryAssetId                                     NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSelectWidget.OnClassSelectButtonClicked
	 */
	struct UClassSelectWidget_OnClassSelectButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.SetSelectedSlotIndex
	 */
	struct UClassSkillListWidgetBase_SetSelectedSlotIndex_Params
	{
	public:
		int32_t                                                    InSlotIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UClassSkillListWidgetBase_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UClassSkillListWidgetBase_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
	 */
	struct UClassSkillListWidgetBase_OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify   InMsg;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotSkillId
	 */
	struct UClassSkillListWidgetBase_GetSelectedSlotSkillId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotIndex
	 */
	struct UClassSkillListWidgetBase_GetSelectedSlotIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellSlotWidgetBase.SetSpellData
	 */
	struct USpellSlotWidgetBase_SetSpellData_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FYGQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellSlotWidgetBase.Reset
	 */
	struct USpellSlotWidgetBase_Reset_Params
	{	};

	/**
	 * Function DungeonCrawler.SpellSlotWidgetBase.OnSpellDataChanged
	 */
	struct USpellSlotWidgetBase_OnSpellDataChanged_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E6NE[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellSlotWidgetBase.OnSetSpellArtData
	 */
	struct USpellSlotWidgetBase_OnSetSpellArtData_Params
	{
	public:
		class UArtDataSpell*                                       InArtSpellData;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellSlotWidgetBase.OnReset
	 */
	struct USpellSlotWidgetBase_OnReset_Params
	{	};

	/**
	 * Function DungeonCrawler.SpellCapacityWidgetBase.OnSpellCapacityChanged
	 */
	struct USpellCapacityWidgetBase_OnSpellCapacityChanged_Params
	{
	public:
		float                                                      InSpellCurrentCapacity;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InSpellMaxCapacity;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSpellCapacityWidget.OnSpellListChanged
	 */
	struct UClassSpellCapacityWidget_OnSpellListChanged_Params
	{
	public:
		TArray<struct FSpellData>                                  InSpellDataArray;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSpellListWidget.OnShowEquippableSlot
	 */
	struct UClassSpellListWidget_OnShowEquippableSlot_Params
	{	};

	/**
	 * Function DungeonCrawler.ClassSpellListWidget.OnHideEquippableSlot
	 */
	struct UClassSpellListWidget_OnHideEquippableSlot_Params
	{	};

	/**
	 * Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 */
	struct UClassSpellSkillListWidgetBase_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassSlotUnLockLevelNotify                InMsg;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
	 */
	struct UClassSpellSkillListWidgetBase_OnFMsgWidgetClassLevelNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetClassLevelNotify                          InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated_BP
	 */
	struct UClassTabMenuWidget_OnLobbyCharacterInfoUpdated_BP_Params
	{
	public:
		struct FPrimaryAssetId                                     CharacterClassId;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated
	 */
	struct UClassTabMenuWidget_OnLobbyCharacterInfoUpdated_Params
	{	};

	/**
	 * Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedSkillId
	 */
	struct UClassUnEquipmentPerkandSkillListWidget_GetSelectedSkillId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedPerkId
	 */
	struct UClassUnEquipmentPerkandSkillListWidget_GetSelectedPerkId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientAccountSubsystem.UnbindMsgAll
	 */
	struct UClientAccountSubsystem_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientAccountSubsystem.UnbindMsg
	 */
	struct UClientAccountSubsystem_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientAccountSubsystem.TerminateBase
	 */
	struct UClientAccountSubsystem_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ClientAccountSubsystem.BroadcastMsgBlueprint
	 */
	struct UClientAccountSubsystem_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientPartySubsystem.UnbindMsgAll
	 */
	struct UClientPartySubsystem_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientPartySubsystem.UnbindMsg
	 */
	struct UClientPartySubsystem_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientPartySubsystem.TerminateBase
	 */
	struct UClientPartySubsystem_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ClientPartySubsystem.BroadcastMsgBlueprint
	 */
	struct UClientPartySubsystem_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientShopSubsystem.UnbindMsgAll
	 */
	struct UClientShopSubsystem_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientShopSubsystem.UnbindMsg
	 */
	struct UClientShopSubsystem_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ClientShopSubsystem.TerminateBase
	 */
	struct UClientShopSubsystem_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ClientShopSubsystem.BroadcastMsgBlueprint
	 */
	struct UClientShopSubsystem_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommemorativePlaqueTextWidget.UpdateCommenorativePlaqueText
	 */
	struct UCommemorativePlaqueTextWidget_UpdateCommenorativePlaqueText_Params
	{
	public:
		TArray<class FText>                                        InText;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommemorativePlaqueTextWidget.SnedWidgetToggleMsg
	 */
	struct UCommemorativePlaqueTextWidget_SnedWidgetToggleMsg_Params
	{	};

	/**
	 * Function DungeonCrawler.CommemorativePlaqueTextWidget.SetCommemorativePlaqueText
	 */
	struct UCommemorativePlaqueTextWidget_SetCommemorativePlaqueText_Params
	{
	public:
		struct FPrimaryAssetId                                     ScriptId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommonButtonBase.SetButtonText
	 */
	struct UDCCommonButtonBase_SetButtonText_Params
	{
	public:
		class FText                                                InButtonText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommonButtonBase.PlayClickSound
	 */
	struct UDCCommonButtonBase_PlayClickSound_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommonButtonBase.OnCommonButtonClicked
	 */
	struct UDCCommonButtonBase_OnCommonButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CommonButtonLWidget.SetSwitchOn
	 */
	struct UCommonButtonLWidget_SetSwitchOn_Params
	{
	public:
		bool                                                       bSetOn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonButtonLWidget.SetDisableTitleText
	 */
	struct UCommonButtonLWidget_SetDisableTitleText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonButtonLWidget.SetAbleTitleText
	 */
	struct UCommonButtonLWidget_SetAbleTitleText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonButtonPopupWidget.SetOnText
	 */
	struct UCommonButtonPopupWidget_SetOnText_Params
	{
	public:
		class FString                                              TextTitleOn;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonButtonPopupWidget.SetNormalText
	 */
	struct UCommonButtonPopupWidget_SetNormalText_Params
	{
	public:
		class FString                                              TextTitleNormal;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonButtonPopupWidget.SetAllText
	 */
	struct UCommonButtonPopupWidget_SetAllText_Params
	{
	public:
		class FString                                              TextTitle;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonPopupSWidget.OnRemovePopup
	 */
	struct UCommonPopupSWidget_OnRemovePopup_Params
	{	};

	/**
	 * Function DungeonCrawler.CommonPopupSWidget.OnCreatePopup
	 */
	struct UCommonPopupSWidget_OnCreatePopup_Params
	{
	public:
		struct FPopupSWidgetData                                   PopupSWidgetData;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.CommonPopupSWidget.HandleSingleButtonClicked
	 */
	struct UCommonPopupSWidget_HandleSingleButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CommonPopupSWidget.HandleRightButtonClicked
	 */
	struct UCommonPopupSWidget_HandleRightButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.CommonPopupSWidget.HandleLeftButtonClicked
	 */
	struct UCommonPopupSWidget_HandleLeftButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.ContainerInventoryGroupWidget.ResetContainerInventoryWidgets
	 */
	struct UContainerInventoryGroupWidget_ResetContainerInventoryWidgets_Params
	{	};

	/**
	 * Function DungeonCrawler.ContainerInventoryGroupWidget.OnPopItemSelectWidget
	 */
	struct UContainerInventoryGroupWidget_OnPopItemSelectWidget_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           DropScreenPos;                                           // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryGroupWidget.OnItemDropDetected
	 */
	struct UContainerInventoryGroupWidget_OnItemDropDetected_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           DropScreenPos;                                           // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.UpdateItemCanBeSet
	 */
	struct UContainerInventoryWidget_UpdateItemCanBeSet_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    SlotId;                                                  // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.OnRemoveItem
	 */
	struct UContainerInventoryWidget_OnRemoveItem_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.OnMoveItem
	 */
	struct UContainerInventoryWidget_OnMoveItem_Params
	{
	public:
		struct FItemData                                           OldItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FItemData                                           NewItemData;                                             // 0x0090(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.OnItemWidgetDropOrLeave
	 */
	struct UContainerInventoryWidget_OnItemWidgetDropOrLeave_Params
	{	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.OnItemDragDetected
	 */
	struct UContainerInventoryWidget_OnItemDragDetected_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           DragScreenPos;                                           // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.OnAddItem
	 */
	struct UContainerInventoryWidget_OnAddItem_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UItemWidget*                                         ReturnValue;                                             // 0x0090(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.InitializeContainerInventoryWidget
	 */
	struct UContainerInventoryWidget_InitializeContainerInventoryWidget_Params
	{
	public:
		class UInventoryComponent*                                 InInventoryComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAccountLink*                                        InAccountLink;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.GetSlotIdByScreenPosition
	 */
	struct UContainerInventoryWidget_GetSlotIdByScreenPosition_Params
	{
	public:
		struct FVector2D                                           ScreenPos;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerInventoryWidget.CanSetItemAt
	 */
	struct UContainerInventoryWidget_CanSetItemAt_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    SlotId;                                                  // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerSlotWidget.OnSetNewItem
	 */
	struct UContainerSlotWidget_OnSetNewItem_Params
	{
	public:
		bool                                                       bFullfilledAll;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerSlotWidget.OnRemoveItem
	 */
	struct UContainerSlotWidget_OnRemoveItem_Params
	{	};

	/**
	 * Function DungeonCrawler.ContainerSlotWidget.OnOverlapItemWidget
	 */
	struct UContainerSlotWidget_OnOverlapItemWidget_Params
	{
	public:
		bool                                                       bCanSetItem;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ContainerSlotWidget.OnLeaveItemWidget
	 */
	struct UContainerSlotWidget_OnLeaveItemWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.ContextMenuHolderInterface.OnRightClicked
	 */
	struct UContextMenuHolderInterface_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.ContextMenuWidgetBase.SetContextMenuWidgetPosition
	 */
	struct UContextMenuWidgetBase_SetContextMenuWidgetPosition_Params
	{	};

	/**
	 * Function DungeonCrawler.ContextMenuWidgetBase.RequestCloseMenu
	 */
	struct UContextMenuWidgetBase_RequestCloseMenu_Params
	{	};

	/**
	 * Function DungeonCrawler.ContextOptionListEntryWidgetBase.OnSelect
	 */
	struct UContextOptionListEntryWidgetBase_OnSelect_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemWidget.SetItemOwnerActor
	 */
	struct UItemWidget_SetItemOwnerActor_Params
	{
	public:
		class AActor*                                              InItemOwnedActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWidget.SetItemIcon
	 */
	struct UItemWidget_SetItemIcon_Params
	{
	public:
		class UTexture2D*                                          ItemIconTexture;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemInventorySize                                  ItemInventorySize;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWidget.SetItemData
	 */
	struct UItemWidget_SetItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWidget.OnSetItemRequirementsFulfilledStatus
	 */
	struct UItemWidget_OnSetItemRequirementsFulfilledStatus_Params
	{
	public:
		bool                                                       bFufilled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MGBF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F14B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWidget.OnItemData
	 */
	struct UItemWidget_OnItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FItemData                                           OldItemData;                                             // 0x0090(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWidget.GetItemIconImage
	 */
	struct UItemWidget_GetItemIconImage_Params
	{
	public:
		class UImage*                                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.QuickMoveItem
	 */
	struct UControllableItemWidget_QuickMoveItem_Params
	{	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.OnRightMouseButtonDown
	 */
	struct UControllableItemWidget_OnRightMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInventoryDropButtonPressed;                             // 0x00D0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInventorySplitButtonPressed;                            // 0x00D1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QM33[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00D8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDown
	 */
	struct UControllableItemWidget_OnLeftMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDoubleClick
	 */
	struct UControllableItemWidget_OnLeftMouseButtonDoubleClick_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.DropOneItem
	 */
	struct UControllableItemWidget_DropOneItem_Params
	{	};

	/**
	 * Function DungeonCrawler.ControllableItemWidget.DropAllItem
	 */
	struct UControllableItemWidget_DropAllItem_Params
	{	};

	/**
	 * Function DungeonCrawler.DCActorBase.UnbindMsgAll
	 */
	struct ADCActorBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorBase.UnbindMsg
	 */
	struct ADCActorBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorBase.TerminateBase
	 */
	struct ADCActorBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCActorBase.ReceivePreInitializeComponents
	 */
	struct ADCActorBase_ReceivePreInitializeComponents_Params
	{	};

	/**
	 * Function DungeonCrawler.DCActorBase.BroadcastMsgBlueprint
	 */
	struct ADCActorBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractableActorBase.InteractSucceed
	 */
	struct ADCInteractableActorBase_InteractSucceed_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        StateTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractableActorBase.InteractStarted
	 */
	struct ADCInteractableActorBase_InteractStarted_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractableActorBase.InteractLost
	 */
	struct ADCInteractableActorBase_InteractLost_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractableActorBase.InteractFound
	 */
	struct ADCInteractableActorBase_InteractFound_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractPart;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractableActorBase.InteractFailed
	 */
	struct ADCInteractableActorBase_InteractFailed_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetMovementStateGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_SetMovementStateGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetModeGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_SetModeGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetAnimationStateGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_SetAnimationStateGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SendGameplayEventToActorOverride
	 */
	struct UDCAbilitySystemBlueprintLibrary_SendGameplayEventToActorOverride_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayEffectData>                       InOverrideGameplayEffectDataArray;                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveLooseGameplayTagAll
	 */
	struct UDCAbilitySystemBlueprintLibrary_RemoveLooseGameplayTagAll_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_RemoveGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCueLocal
	 */
	struct UDCAbilitySystemBlueprintLibrary_RemoveGameplayCueLocal_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCue
	 */
	struct UDCAbilitySystemBlueprintLibrary_RemoveGameplayCue_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ParseOptionGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_ParseOptionGameplayTag_Params
	{
	public:
		class FString                                              InOptionStr;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionKey;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MatchesQuery
	 */
	struct UDCAbilitySystemBlueprintLibrary_MatchesQuery_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   InTagQuery;                                              // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsMatchingAbilityActivated
	 */
	struct UDCAbilitySystemBlueprintLibrary_IsMatchingAbilityActivated_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbilities
	 */
	struct UDCAbilitySystemBlueprintLibrary_GiveAbilities_Params
	{
	public:
		class UObject*                                             SourceObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InActor;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayAbilityData>                      InGameplayAbilityDataArray;                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayAbilitySpecHandle>                  ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSocketLocationBySocketName
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetSocketLocationBySocketName_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              AvatarActor;                                             // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutSocketLocation;                                       // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainerSpecArray
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetSetByCallerValueInContainerSpecArray_Params
	{
	public:
		struct FGameplayTag                                        InEventTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InSetByCallerDataTag;                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayEffectContainerSpec>              InEffectHandle;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainer
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetSetByCallerValueInContainer_Params
	{
	public:
		struct FGameplayTag                                        InEventTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InSetByCallerDataTag;                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayEffectContainer>                  InEffectContainer;                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetOwnedGameplayTags
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetOwnedGameplayTags_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedCount
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetMatchingAbilityActivatedCount_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetItemDataFromDesignData
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetItemDataFromDesignData_Params
	{
	public:
		struct FDesignDataItem                                     InDesignDataItem;                                        // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FItemData                                           OutItemData;                                             // 0x0170(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGrantedTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetGrantedTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectSetByCallerValue
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetGameplayEffectSetByCallerValue_Params
	{
	public:
		struct FGameplayTag                                        InSetByCallerTag;                                        // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSetByCallerValue;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescDataItem
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetGameplayEffectDescDataItem_Params
	{
	public:
		struct FDesignDataItem                                     InDesignDataItem;                                        // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDesignDataGameplayEffect                           InDesignDataGameplayEffect;                              // 0x0170(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FItemDataGameplayEffect                             InItemDataGameplayEffect;                                // 0x02F0(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayEffectDescData>                     OutGameplayEffectDescDataArray;                          // 0x0310(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescData
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetGameplayEffectDescData_Params
	{
	public:
		struct FDesignDataGameplayEffect                           InDesignDataGameplayEffect;                              // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayEffectDescData>                     OutGameplayEffectDescDataArray;                          // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectData
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetGameplayEffectData_Params
	{
	public:
		struct FDesignDataGameplayEffect                           InDesignDataGameplayEffect;                              // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDCGameplayEffectData                               OutGameplayEffectData;                                   // 0x0180(0x0048)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetEffectSpec
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetEffectSpec_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 OutEffectSpec;                                           // 0x0010(0x0298)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetCurrentMontageSectionName
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetCurrentMontageSectionName_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetAttributeDisplayName
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetAttributeDisplayName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0040(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetActorAttributeValue
	 */
	struct UDCAbilitySystemBlueprintLibrary_GetActorAttributeValue_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  InAttribute;                                             // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.FindSocketOwningMeshComponent
	 */
	struct UDCAbilitySystemBlueprintLibrary_FindSocketOwningMeshComponent_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              AvatarActor;                                             // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCueLocal
	 */
	struct UDCAbilitySystemBlueprintLibrary_ExecuteGameplayCueLocal_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCue
	 */
	struct UDCAbilitySystemBlueprintLibrary_ExecuteGameplayCue_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextSetSoundDataPrimaryAssetId
	 */
	struct UDCAbilitySystemBlueprintLibrary_EffectContextSetSoundDataPrimaryAssetId_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundDataPrimaryAssetId
	 */
	struct UDCAbilitySystemBlueprintLibrary_EffectContextGetSoundDataPrimaryAssetId_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundData
	 */
	struct UDCAbilitySystemBlueprintLibrary_EffectContextGetSoundData_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class USoundData*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetSoundDataPrimaryAssetId
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextSetSoundDataPrimaryAssetId_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0198(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetOrigin
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextSetOrigin_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0198(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextHasHitResult
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextHasHitResult_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0198(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSourceObject
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetSourceObject_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0198(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSoundDataPrimaryAssetId
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetSoundDataPrimaryAssetId_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0198(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOriginalInstigatorActor
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetOriginalInstigatorActor_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0198(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOrigin
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetOrigin_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0198(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetInstigatorActor
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetInstigatorActor_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0198(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetHitResult
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetHitResult_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x0198(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetEffectCauser
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextGetEffectCauser_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0198(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextAddHitResult
	 */
	struct UDCAbilitySystemBlueprintLibrary_DCEffectContextAddHitResult_Params
	{
	public:
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0000(0x0198)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0198(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bReset;                                                  // 0x0280(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ClearAllAbilities
	 */
	struct UDCAbilitySystemBlueprintLibrary_ClearAllAbilities_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.CancelAllAbilities
	 */
	struct UDCAbilitySystemBlueprintLibrary_CancelAllAbilities_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyPremadeSpecArray
	 */
	struct UDCAbilitySystemBlueprintLibrary_ApplyPremadeSpecArray_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ContainerTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffects
	 */
	struct UDCAbilitySystemBlueprintLibrary_ApplyGameplayEffects_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayEffectData>                       InGameplayEffectDataArray;                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              InSourceActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffectByIds
	 */
	struct UDCAbilitySystemBlueprintLibrary_ApplyGameplayEffectByIds_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             InGameplayEffectIdArray;                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              InSourceActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffect
	 */
	struct UDCAbilitySystemBlueprintLibrary_ApplyGameplayEffect_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataGameplayEffect                           InDesignDataGameplayEffect;                              // 0x0008(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              InSourceActor;                                           // 0x0188(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0190(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyEffectContainerSpec
	 */
	struct UDCAbilitySystemBlueprintLibrary_ApplyEffectContainerSpec_Params
	{
	public:
		struct FDCGameplayEffectContainerSpec                      ContainerSpec;                                           // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimSphereWithActorViewPoint
	 */
	struct UDCAbilitySystemBlueprintLibrary_AimSphereWithActorViewPoint_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KGJX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FHitResult>                                  OutHitResults;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AJDW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxRange;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPointToPoint
	 */
	struct UDCAbilitySystemBlueprintLibrary_AimLineWithActorViewPointToPoint_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TraceEnd;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  OutHitResults;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPoint
	 */
	struct UDCAbilitySystemBlueprintLibrary_AimLineWithActorViewPoint_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  OutHitResults;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JH3Z[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxRange;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddLooseGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_AddLooseGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayTag
	 */
	struct UDCAbilitySystemBlueprintLibrary_AddGameplayTag_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCueLocal
	 */
	struct UDCAbilitySystemBlueprintLibrary_AddGameplayCueLocal_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCue
	 */
	struct UDCAbilitySystemBlueprintLibrary_AddGameplayCue_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsgAll
	 */
	struct UDCAbilitySystemComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsg
	 */
	struct UDCAbilitySystemComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.TerminateBase
	 */
	struct UDCAbilitySystemComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.RemoveGameplayCueLocal
	 */
	struct UDCAbilitySystemComponent_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.PlayMontageOnSourceObject
	 */
	struct UDCAbilitySystemComponent_PlayMontageOnSourceObject_Params
	{
	public:
		class UGameplayAbility*                                    InAnimatingAbility;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        NewAnimMontage;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSectionName;                                        // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTimeSeconds;                                        // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.OnRep_ImpactEnduranceExhaustedData
	 */
	struct UDCAbilitySystemComponent_OnRep_ImpactEnduranceExhaustedData_Params
	{
	public:
		struct FImpactEnduranceExhaustedData                       InOldImpactEnduranceExhaustedData;                       // 0x0000(0x01A8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.OnRep_ActorDieData
	 */
	struct UDCAbilitySystemComponent_OnRep_ActorDieData_Params
	{
	public:
		struct FActorDieData                                       InOldActorDieData;                                       // 0x0000(0x01A8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.OnRep_AbilityHandleDataArray
	 */
	struct UDCAbilitySystemComponent_OnRep_AbilityHandleDataArray_Params
	{
	public:
		TArray<struct FDCGameplayAbilityHandleData>                InOldAbilityHandleDataArray;                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.OnImpactEnduranceExhaustedData
	 */
	struct UDCAbilitySystemComponent_OnImpactEnduranceExhaustedData_Params
	{
	public:
		struct FImpactEnduranceExhaustedData                       InImpactEnduranceExhaustedData;                          // 0x0000(0x01A8)  (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.OnActorDieData
	 */
	struct UDCAbilitySystemComponent_OnActorDieData_Params
	{
	public:
		struct FActorDieData                                       InActorDieData;                                          // 0x0000(0x01A8)  (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.GetContainerSpecArray
	 */
	struct UDCAbilitySystemComponent_GetContainerSpecArray_Params
	{
	public:
		TArray<struct FDCGameplayEffectContainerSpec>              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.ExecuteGameplayCueLocal
	 */
	struct UDCAbilitySystemComponent_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.BroadcastMsgBlueprint
	 */
	struct UDCAbilitySystemComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAbilitySystemComponent.AddGameplayCueLocal
	 */
	struct UDCAbilitySystemComponent_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.UnbindMsgAll
	 */
	struct UDCActorStatusComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.UnbindMsg
	 */
	struct UDCActorStatusComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.TerminateBase
	 */
	struct UDCActorStatusComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.OnRep_ActorStatusDatas
	 */
	struct UDCActorStatusComponent_OnRep_ActorStatusDatas_Params
	{
	public:
		TArray<struct FActorStatusData>                            OldActorStatusDatas;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.GameplayEffectStackChanged
	 */
	struct UDCActorStatusComponent_GameplayEffectStackChanged_Params
	{
	public:
		struct FGameplayTag                                        EffectGameplayTag;                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         EffectHandle;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewStackCount;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousStackCount;                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.GameplayEffectInhibitChanged
	 */
	struct UDCActorStatusComponent_GameplayEffectInhibitChanged_Params
	{
	public:
		struct FGameplayTag                                        EffectGameplayTag;                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         EffectHandle;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsInhibited;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCActorStatusComponent.BroadcastMsgBlueprint
	 */
	struct UDCActorStatusComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkComponent.UnbindMsgAll
	 */
	struct UDCAkComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkComponent.UnbindMsg
	 */
	struct UDCAkComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkComponent.TerminateBase
	 */
	struct UDCAkComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAkComponent.SetSoundSwitch
	 */
	struct UDCAkComponent_SetSoundSwitch_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPhysicalSurface                                           SurfaceType;                                             // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ESYF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SwitchGroup;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SwitchState;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkComponent.PostSoundEvent
	 */
	struct UDCAkComponent_PostSoundEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkComponent.BroadcastMsgBlueprint
	 */
	struct UDCAkComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsgAll
	 */
	struct ADCAkSpatialAudioVolume_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsg
	 */
	struct ADCAkSpatialAudioVolume_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.TerminateBase
	 */
	struct ADCAkSpatialAudioVolume_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnExitVolume
	 */
	struct ADCAkSpatialAudioVolume_OnTargetPlayerPawnExitVolume_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnEnterVolume
	 */
	struct ADCAkSpatialAudioVolume_OnTargetPlayerPawnEnterVolume_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapEnd
	 */
	struct ADCAkSpatialAudioVolume_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapBegin
	 */
	struct ADCAkSpatialAudioVolume_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NEJ9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAkSpatialAudioVolume.BroadcastMsgBlueprint
	 */
	struct ADCAkSpatialAudioVolume_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.UnbindMsgAll
	 */
	struct UDCAnimInstanceBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.UnbindMsg
	 */
	struct UDCAnimInstanceBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.TerminateBase
	 */
	struct UDCAnimInstanceBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.GetOriginActor
	 */
	struct UDCAnimInstanceBase_GetOriginActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.EventMontageStarted
	 */
	struct UDCAnimInstanceBase_EventMontageStarted_Params
	{
	public:
		class UAnimMontage*                                        InMontage;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.EventAllMontageInstancesEnded
	 */
	struct UDCAnimInstanceBase_EventAllMontageInstancesEnded_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAnimInstanceBase.BroadcastMsgBlueprint
	 */
	struct UDCAnimInstanceBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsgAll
	 */
	struct ADCAoeAIControllerBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsg
	 */
	struct ADCAoeAIControllerBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeAIControllerBase.TerminateBase
	 */
	struct ADCAoeAIControllerBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAoeAIControllerBase.BroadcastMsgBlueprint
	 */
	struct ADCAoeAIControllerBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeBase.UnbindMsgAll
	 */
	struct ADCAoeBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeBase.UnbindMsg
	 */
	struct ADCAoeBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeBase.TerminateBase
	 */
	struct ADCAoeBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAoeBase.RemoveEndOverlapActor
	 */
	struct ADCAoeBase_RemoveEndOverlapActor_Params
	{
	public:
		class ADCCharacterBase*                                    CharacterBase;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeBase.OnSetAI
	 */
	struct ADCAoeBase_OnSetAI_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAoeBase.BroadcastMsgBlueprint
	 */
	struct ADCAoeBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeBase.AddBeginOverlapActor
	 */
	struct ADCAoeBase_AddBeginOverlapActor_Params
	{
	public:
		class ADCCharacterBase*                                    CharacterBase;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoe
	 */
	struct UDCAoeSystemBlueprintLibrary_SpawnAoe_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              AoeClass;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCGameplayAbilityBase*                              DCGameplayAbilityBase;                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0030(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfully;                                           // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RCDK[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCAoeBase*                                          ReturnValue;                                             // 0x00E8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget
	 */
	struct UDCAoeSystemBlueprintLibrary_SortTargetsByDistanceAndPickTarget_Params
	{
	public:
		class ADCAoeBase*                                          DCAoeBase;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EAoeFilterSortingType                                      AoeFilterSortingType;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KZ16[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistance
	 */
	struct UDCAoeSystemBlueprintLibrary_SortTargetsByDistance_Params
	{
	public:
		class ADCAoeBase*                                          DCAoeBase;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EAoeFilterSortingType                                      AoeFilterSortingType;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickTarget
	 */
	struct UDCAoeSystemBlueprintLibrary_PickTarget_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQMZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickRandomTarget
	 */
	struct UDCAoeSystemBlueprintLibrary_PickRandomTarget_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.GetTargetArray
	 */
	struct UDCAoeSystemBlueprintLibrary_GetTargetArray_Params
	{
	public:
		class ADCAoeBase*                                          DCAoeBase;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterUnTagedTargets
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterUnTagedTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsWithinDistance
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterTargetsWithinDistance_Params
	{
	public:
		class ADCAoeBase*                                          DCAoeBase;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsOverDistance
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterTargetsOverDistance_Params
	{
	public:
		class ADCAoeBase*                                          DCAoeBase;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTagedTargets
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterTagedTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterPlayerCharacterTargets
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterPlayerCharacterTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterMonsterTargets
	 */
	struct UDCAoeSystemBlueprintLibrary_FilterMonsterTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeWithinDistance
	 */
	struct UDCAoeSystemBlueprintLibrary_DespawnAoeWithinDistance_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetIdWithinDistance
	 */
	struct UDCAoeSystemBlueprintLibrary_DespawnAoeByPrimaryAssetIdWithinDistance_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetId
	 */
	struct UDCAoeSystemBlueprintLibrary_DespawnAoeByPrimaryAssetId_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeAll
	 */
	struct UDCAoeSystemBlueprintLibrary_DespawnAoeAll_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WillMod
	 */
	struct UDCAttributeSet_OnRep_WillMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WillBase
	 */
	struct UDCAttributeSet_OnRep_WillBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Will
	 */
	struct UDCAttributeSet_OnRep_Will_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitMod
	 */
	struct UDCAttributeSet_OnRep_WeightLimitMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitBase
	 */
	struct UDCAttributeSet_OnRep_WeightLimitBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitAdd
	 */
	struct UDCAttributeSet_OnRep_WeightLimitAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimit
	 */
	struct UDCAttributeSet_OnRep_WeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Weight
	 */
	struct UDCAttributeSet_OnRep_Weight_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessMod
	 */
	struct UDCAttributeSet_OnRep_UtilityEffectivenessMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessBase
	 */
	struct UDCAttributeSet_OnRep_UtilityEffectivenessBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessAdd
	 */
	struct UDCAttributeSet_OnRep_UtilityEffectivenessAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectiveness
	 */
	struct UDCAttributeSet_OnRep_UtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_TotalShield
	 */
	struct UDCAttributeSet_OnRep_TotalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_StrengthMod
	 */
	struct UDCAttributeSet_OnRep_StrengthMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_StrengthBase
	 */
	struct UDCAttributeSet_OnRep_StrengthBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Strength
	 */
	struct UDCAttributeSet_OnRep_Strength_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellPayload
	 */
	struct UDCAttributeSet_OnRep_SpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellCastingSpeed
	 */
	struct UDCAttributeSet_OnRep_SpellCastingSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityMod
	 */
	struct UDCAttributeSet_OnRep_SpellCapacityMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityBase
	 */
	struct UDCAttributeSet_OnRep_SpellCapacityBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityAdd
	 */
	struct UDCAttributeSet_OnRep_SpellCapacityAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacity
	 */
	struct UDCAttributeSet_OnRep_SpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessMod
	 */
	struct UDCAttributeSet_OnRep_ResourcefulnessMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessBase
	 */
	struct UDCAttributeSet_OnRep_ResourcefulnessBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Resourcefulness
	 */
	struct UDCAttributeSet_OnRep_Resourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeedBase
	 */
	struct UDCAttributeSet_OnRep_RegularInteractionSpeedBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeed
	 */
	struct UDCAttributeSet_OnRep_RegularInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ProjectileReductionMod
	 */
	struct UDCAttributeSet_OnRep_ProjectileReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PrestigeItemDrop
	 */
	struct UDCAttributeSet_OnRep_PrestigeItemDrop_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalShield
	 */
	struct UDCAttributeSet_OnRep_PhysicalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReductionMod
	 */
	struct UDCAttributeSet_OnRep_PhysicalReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReduction
	 */
	struct UDCAttributeSet_OnRep_PhysicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalRangedHeadshotPower
	 */
	struct UDCAttributeSet_OnRep_PhysicalRangedHeadshotPower_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalPower
	 */
	struct UDCAttributeSet_OnRep_PhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealBase
	 */
	struct UDCAttributeSet_OnRep_PhysicalHealBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponSecondary
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageWeaponSecondary_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponPrimary
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageWeaponPrimary_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageTrue
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageTrue_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageMod
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageBase
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageAdd
	 */
	struct UDCAttributeSet_OnRep_PhysicalDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalBackstabPower
	 */
	struct UDCAttributeSet_OnRep_PhysicalBackstabPower_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalAbsoluteReduction
	 */
	struct UDCAttributeSet_OnRep_PhysicalAbsoluteReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedWithModifier
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedWithModifier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedMod
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedBase
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenaltyMod
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedArmorPenaltyMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenalty
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedArmorPenalty_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedAdd
	 */
	struct UDCAttributeSet_OnRep_MoveSpeedAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeed
	 */
	struct UDCAttributeSet_OnRep_MoveSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxTotalShield
	 */
	struct UDCAttributeSet_OnRep_MaxTotalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxPhysicalShield
	 */
	struct UDCAttributeSet_OnRep_MaxPhysicalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxMagicalShield
	 */
	struct UDCAttributeSet_OnRep_MaxMagicalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxImpactEndurance
	 */
	struct UDCAttributeSet_OnRep_MaxImpactEndurance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthMod
	 */
	struct UDCAttributeSet_OnRep_MaxHealthMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthBase
	 */
	struct UDCAttributeSet_OnRep_MaxHealthBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthAdd
	 */
	struct UDCAttributeSet_OnRep_MaxHealthAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealth
	 */
	struct UDCAttributeSet_OnRep_MaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicResistance
	 */
	struct UDCAttributeSet_OnRep_MagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicPenetration
	 */
	struct UDCAttributeSet_OnRep_MagicPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalShield
	 */
	struct UDCAttributeSet_OnRep_MagicalShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReductionMod
	 */
	struct UDCAttributeSet_OnRep_MagicalReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReduction
	 */
	struct UDCAttributeSet_OnRep_MagicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalPower
	 */
	struct UDCAttributeSet_OnRep_MagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalInteractionSpeed
	 */
	struct UDCAttributeSet_OnRep_MagicalInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealBase
	 */
	struct UDCAttributeSet_OnRep_MagicalHealBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageMod
	 */
	struct UDCAttributeSet_OnRep_MagicalFireDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageBase
	 */
	struct UDCAttributeSet_OnRep_MagicalFireDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageAdd
	 */
	struct UDCAttributeSet_OnRep_MagicalFireDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponSecondary
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageWeaponSecondary_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponPrimary
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageWeaponPrimary_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageTrue
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageTrue_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageMod
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageBase
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageAdd
	 */
	struct UDCAttributeSet_OnRep_MagicalDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageMod
	 */
	struct UDCAttributeSet_OnRep_MagicalArcaneDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageBase
	 */
	struct UDCAttributeSet_OnRep_MagicalArcaneDamageBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageAdd
	 */
	struct UDCAttributeSet_OnRep_MagicalArcaneDamageAdd_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_MagicalAbsoluteReduction
	 */
	struct UDCAttributeSet_OnRep_MagicalAbsoluteReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeMod
	 */
	struct UDCAttributeSet_OnRep_KnowledgeMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeBase
	 */
	struct UDCAttributeSet_OnRep_KnowledgeBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Knowledge
	 */
	struct UDCAttributeSet_OnRep_Knowledge_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ItemEquipSpeed
	 */
	struct UDCAttributeSet_OnRep_ItemEquipSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRatingMod
	 */
	struct UDCAttributeSet_OnRep_ItemArmorRatingMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRating
	 */
	struct UDCAttributeSet_OnRep_ItemArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ImpactResistance
	 */
	struct UDCAttributeSet_OnRep_ImpactResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ImpactPower
	 */
	struct UDCAttributeSet_OnRep_ImpactPower_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ImpactEndurance
	 */
	struct UDCAttributeSet_OnRep_ImpactEndurance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Health
	 */
	struct UDCAttributeSet_OnRep_Health_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_HeadshotReductionMod
	 */
	struct UDCAttributeSet_OnRep_HeadshotReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_DebuffDurationMod
	 */
	struct UDCAttributeSet_OnRep_DebuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_BuffDurationMod
	 */
	struct UDCAttributeSet_OnRep_BuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ArmorRating
	 */
	struct UDCAttributeSet_OnRep_ArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ArmorPenetration
	 */
	struct UDCAttributeSet_OnRep_ArmorPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_AgilityMod
	 */
	struct UDCAttributeSet_OnRep_AgilityMod_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_AgilityBase
	 */
	struct UDCAttributeSet_OnRep_AgilityBase_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_Agility
	 */
	struct UDCAttributeSet_OnRep_Agility_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAttributeSet.OnRep_ActionSpeed
	 */
	struct UDCAttributeSet_OnRep_ActionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_DashToLocation.DashToLocation
	 */
	struct UDCAT_DashToLocation_DashToLocation_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DestLocation;                                            // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AllowedDistance;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Teleport;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B9DQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_DashToLocation*                                ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_InteractionSkillCheck.InteractionSkillCheck
	 */
	struct UDCAT_InteractionSkillCheck_InteractionSkillCheck_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SucceedSectionStartTime;                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SucceedSectionEndTime;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PerfectSucceedSectionStartTime;                          // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PerfectSucceedSectionEndTime;                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RGIV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_InteractionSkillCheck*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.MoveWithInputVectorCurve
	 */
	struct UDCAT_MoveWithInputVectorCurve_MoveWithInputVectorCurve_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DestLocation;                                            // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveVector*                                        InVelocityVector;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistanceTolerance;                                       // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldTeleportWhenFinished;                             // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DLWF[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_MoveWithInputVectorCurve*                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineUpdate
	 */
	struct UDCAT_MoveWithInputVectorCurve_HandleTimelineUpdate_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineFinished
	 */
	struct UDCAT_MoveWithInputVectorCurve_HandleTimelineFinished_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_OverlapActorsInRadius.OverlapActorsInRadius
	 */
	struct UDCAT_OverlapActorsInRadius_OverlapActorsInRadius_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                CollisionProfileName;                                    // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BZ6P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              OverlapTargetClass;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_OverlapActorsInRadius*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapEnd
	 */
	struct UDCAT_OverlapActorsInRadius_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapBegin
	 */
	struct UDCAT_OverlapActorsInRadius_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HUP3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
	 */
	struct UDCAT_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x003C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9L05[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTimeSeconds;                                        // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_PlayMontageAndWaitForEvent*                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_RotateToActor.RotateToActor
	 */
	struct UDCAT_RotateToActor_RotateToActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHitBoxType                                                HitBox;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LB2J[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Speed;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WithoutPitch;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RYE4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_RotateToActor*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_ServerWaitClientTargetData.ServerWaitForClientTargetData
	 */
	struct UDCAT_ServerWaitClientTargetData_ServerWaitForClientTargetData_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_12YR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_ServerWaitClientTargetData*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_ServerWaitClientTargetData.OnTargetDataReplicatedCallback
	 */
	struct UDCAT_ServerWaitClientTargetData_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_SpawnProjectile.SpawnProjectile
	 */
	struct UDCAT_SpawnProjectile_SpawnProjectile_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              SpawnClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7BED[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_SpawnProjectile*                               ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_TargetActorRadius.TargetActorRadius
	 */
	struct UDCAT_TargetActorRadius_TargetActorRadius_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          CollisionChannel;                                        // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G3TT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              TargetingClass;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_TargetActorRadius*                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitAimDirChangedFromLoc.WaitAimDirectionChangedFromLocation
	 */
	struct UDCAT_WaitAimDirChangedFromLoc_WaitAimDirectionChangedFromLocation_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InitialAimTargetLocation;                                // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitAimDirChangedFromLoc*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitAimDirectionChanged.WaitAimDirectionChanged
	 */
	struct UDCAT_WaitAimDirectionChanged_WaitAimDirectionChanged_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitAimDirectionChanged*                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributesChange
	 */
	struct UDCAT_WaitAttributeChangeByExecution_WaitForAttributesChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayAttribute>                          Attributes;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AXJA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitAttributeChangeByExecution*                ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributeChange
	 */
	struct UDCAT_WaitAttributeChangeByExecution_WaitForAttributeChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4V7[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitAttributeChangeByExecution*                ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayPausable.WaitDelay
	 */
	struct UDCAT_WaitDelayPausable_WaitDelay_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JJWS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitDelayPausable*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayPausable.ResumeTimer
	 */
	struct UDCAT_WaitDelayPausable_ResumeTimer_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayPausable.PauseTimer
	 */
	struct UDCAT_WaitDelayPausable_PauseTimer_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayPausable.GetElapsedTime
	 */
	struct UDCAT_WaitDelayPausable_GetElapsedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayPausable.AddTimerElapsedTimeRatio
	 */
	struct UDCAT_WaitDelayPausable_AddTimerElapsedTimeRatio_Params
	{
	public:
		float                                                      AdditionalRatio;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayRestartable.WaitDelay
	 */
	struct UDCAT_WaitDelayRestartable_WaitDelay_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8NNF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitDelayRestartable*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDelayRestartable.RestartTimer
	 */
	struct UDCAT_WaitDelayRestartable_RestartTimer_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDistChangeFromActor.WaitDistanceChange
	 */
	struct UDCAT_WaitDistChangeFromActor_WaitDistanceChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaximumDistance;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          CollisionChannel;                                        // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I1IG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitDistChangeFromActor*                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDistChangeFromLocation.WaitDistanceChange
	 */
	struct UDCAT_WaitDistChangeFromLocation_WaitDistanceChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaximumDistance;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A5FS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitDistChangeFromLocation*                    ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitDistChangeFromView.WaitDistanceChange
	 */
	struct UDCAT_WaitDistChangeFromView_WaitDistanceChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaximumDistance;                                         // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CollisionRadius;                                         // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          CollisionChannel;                                        // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C63B[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitDistChangeFromView*                        ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitForCharacterUnCrouch.WaitForCharacterUnCrouch
	 */
	struct UDCAT_WaitForCharacterUnCrouch_WaitForCharacterUnCrouch_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitForCharacterUnCrouch*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitForGameplayEvents.WaitForGameplayEvents
	 */
	struct UDCAT_WaitForGameplayEvents_WaitForGameplayEvents_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               InEventTags;                                             // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UDCAT_WaitForGameplayEvents*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitForInputAction.WaitForInputAction
	 */
	struct UDCAT_WaitForInputAction_WaitForInputAction_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        InInputAction;                                           // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U337[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitForInputAction*                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEndWithTagRequirements
	 */
	struct UDCAT_WaitGameplayAbilityActivateOrEnd_WaitForAbilityActivateOrEndWithTagRequirements_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TagRequirements;                                         // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QYVV[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitGameplayAbilityActivateOrEnd*              ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd_Query
	 */
	struct UDCAT_WaitGameplayAbilityActivateOrEnd_WaitForAbilityActivateOrEnd_Query_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XOW1[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitGameplayAbilityActivateOrEnd*              ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd
	 */
	struct UDCAT_WaitGameplayAbilityActivateOrEnd_WaitForAbilityActivateOrEnd_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SGFS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitGameplayAbilityActivateOrEnd*              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityEnd
	 */
	struct UDCAT_WaitGameplayAbilityActivateOrEnd_OnAbilityEnd_Params
	{
	public:
		struct FAbilityEndedData                                   AbilityEndedData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityActivate
	 */
	struct UDCAT_WaitGameplayAbilityActivateOrEnd_OnAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.WaitGameplayEffectAdded
	 */
	struct UDCAT_WaitGameplayEffectAdd_WaitGameplayEffectAdded_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RRLY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitGameplayEffectAdd*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.OnApplyGameplayEffectCallback
	 */
	struct UDCAT_WaitGameplayEffectAdd_OnApplyGameplayEffectCallback_Params
	{
	public:
		class UAbilitySystemComponent*                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x02A0(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitGenericGameplayTagEvent.WaitGenericGameplayTagEvent
	 */
	struct UDCAT_WaitGenericGameplayTagEvent_WaitGenericGameplayTagEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitGenericGameplayTagEvent*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.WaitInteractableTarget
	 */
	struct UDCAT_WaitInteractableTarget_WaitInteractableTarget_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCGATA_LineTraceInteractable*                       InTargetActor;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitInteractableTarget*                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.StopTargeting
	 */
	struct UDCAT_WaitInteractableTarget_StopTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.StartTargeting
	 */
	struct UDCAT_WaitInteractableTarget_StartTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.ResetTargeting
	 */
	struct UDCAT_WaitInteractableTarget_ResetTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.OnLostInteractableTarget
	 */
	struct UDCAT_WaitInteractableTarget_OnLostInteractableTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitInteractableTarget.OnFoundNewInteractableTarget
	 */
	struct UDCAT_WaitInteractableTarget_OnFoundNewInteractableTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.WaitSocketBlockedStateChange
	 */
	struct UDCAT_WaitSocketBlockedStateChange_WaitSocketBlockedStateChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCGATA_AimTraceToSocket*                            InTargetActor;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitSocketBlockedStateChange*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StopTargeting
	 */
	struct UDCAT_WaitSocketBlockedStateChange_StopTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StartTargeting
	 */
	struct UDCAT_WaitSocketBlockedStateChange_StartTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.ResetTargeting
	 */
	struct UDCAT_WaitSocketBlockedStateChange_ResetTargeting_Params
	{	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightUnblocked
	 */
	struct UDCAT_WaitSocketBlockedStateChange_OnSocketSightUnblocked_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightBlocked
	 */
	struct UDCAT_WaitSocketBlockedStateChange_OnSocketSightBlocked_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitTargetData.DCWaitTargetData
	 */
	struct UDCAT_WaitTargetData_DCWaitTargetData_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BIDR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGameplayAbilityTargetActor*                         InTargetActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitTargetData*                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitTargetGameplayTagEvent.WaitTargetGameplayTagEvent
	 */
	struct UDCAT_WaitTargetGameplayTagEvent_WaitTargetGameplayTagEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InTargetTag;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAT_WaitTargetGameplayTagEvent*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCAT_WaitVelocityChange.WaitVelocityChange
	 */
	struct UDCAT_WaitVelocityChange_WaitVelocityChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinimumMagnitude;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WECZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAT_WaitVelocityChange*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemWidgetBase.IsSet
	 */
	struct UDCItemWidgetBase_IsSet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemWidgetBase.IsReadOnly
	 */
	struct UDCItemWidgetBase_IsReadOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemCommonWidget.OnDragDropFinished
	 */
	struct UDCItemCommonWidget_OnDragDropFinished_Params
	{
	public:
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemCommonWidget.GetTooltipWidget
	 */
	struct UDCItemCommonWidget_GetTooltipWidget_Params
	{
	public:
		class UDCItemTooltipWidget*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCBagItemWidget.IsGold
	 */
	struct UDCBagItemWidget_IsGold_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInventoryWidgetBase.SetReadOnly
	 */
	struct UDCInventoryWidgetBase_SetReadOnly_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInventoryWidgetBase.OnWidgetVisibilityChanged
	 */
	struct UDCInventoryWidgetBase_OnWidgetVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInventoryWidgetBase.OnItemDrop
	 */
	struct UDCInventoryWidgetBase_OnItemDrop_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             Src;                                                     // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             Dst;                                                     // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ANSY[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInventoryWidgetBase.OnItemClick
	 */
	struct UDCInventoryWidgetBase_OnItemClick_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NYTI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       Event;                                                   // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInventoryWidgetBase.IsReadOnly
	 */
	struct UDCInventoryWidgetBase_IsReadOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCBagWidget.OnItemsUpdated
	 */
	struct UDCBagWidget_OnItemsUpdated_Params
	{	};

	/**
	 * Function DungeonCrawler.DCBagWidget.OnDropInternal
	 */
	struct UDCBagWidget_OnDropInternal_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D3E9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDCItemId                                           ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YCFI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCBagWidget.GetGoldAmount
	 */
	struct UDCBagWidget_GetGoldAmount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.UnbindMsgAll
	 */
	struct ADCCharacterBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.UnbindMsg
	 */
	struct ADCCharacterBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.TogglePerspective
	 */
	struct ADCCharacterBase_TogglePerspective_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.TerminateBase
	 */
	struct ADCCharacterBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.SetIsDead
	 */
	struct ADCCharacterBase_SetIsDead_Params
	{
	public:
		bool                                                       IsDead;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.SetGenericTeamId
	 */
	struct ADCCharacterBase_SetGenericTeamId_Params
	{
	public:
		struct FGenericTeamId                                      TeamID;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.ServerSetRemoteViewYaw
	 */
	struct ADCCharacterBase_ServerSetRemoteViewYaw_Params
	{
	public:
		unsigned char                                              InRemoteViewYaw;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.RemoveAllLocalStateTags
	 */
	struct ADCCharacterBase_RemoveAllLocalStateTags_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.ReceivePreInitializeComponents
	 */
	struct ADCCharacterBase_ReceivePreInitializeComponents_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnUpdateTeammateState
	 */
	struct ADCCharacterBase_OnUpdateTeammateState_Params
	{
	public:
		bool                                                       bIsTeammateWithLocalPlayer;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnSetPerspective
	 */
	struct ADCCharacterBase_OnSetPerspective_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIsFirstPersonPerspective;                             // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnRep_AccountId
	 */
	struct ADCCharacterBase_OnRep_AccountId_Params
	{
	public:
		class FString                                              InOldAccountId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnQuickSlotClicked
	 */
	struct ADCCharacterBase_OnQuickSlotClicked_Params
	{
	public:
		EEquipmentQuickSlotType                                    SlotType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnGameState
	 */
	struct ADCCharacterBase_OnGameState_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.OnFMsgGASActorDieNotifyBlueprint
	 */
	struct ADCCharacterBase_OnFMsgGASActorDieNotifyBlueprint_Params
	{
	public:
		struct FMsgGASActorDieNotify                               InMsg;                                                   // 0x0000(0x01B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.IsSameTeam
	 */
	struct ADCCharacterBase_IsSameTeam_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.IsInFirstPersonPerspective
	 */
	struct ADCCharacterBase_IsInFirstPersonPerspective_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.IsDead
	 */
	struct ADCCharacterBase_IsDead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.InteractSucceed
	 */
	struct ADCCharacterBase_InteractSucceed_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        StateTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.InteractLost
	 */
	struct ADCCharacterBase_InteractLost_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.InteractFound
	 */
	struct ADCCharacterBase_InteractFound_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractPart;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetPartyId
	 */
	struct ADCCharacterBase_GetPartyId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetNickNameCached
	 */
	struct ADCCharacterBase_GetNickNameCached_Params
	{
	public:
		struct FNickname                                           ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetHitBoxLocation
	 */
	struct ADCCharacterBase_GetHitBoxLocation_Params
	{
	public:
		EHitBoxType                                                HitBoxType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P6PJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetGenericTeamId
	 */
	struct ADCCharacterBase_GetGenericTeamId_Params
	{
	public:
		struct FGenericTeamId                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetCapsuleTopLocation
	 */
	struct ADCCharacterBase_GetCapsuleTopLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetCapsuleBottomLocation
	 */
	struct ADCCharacterBase_GetCapsuleBottomLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetCameraComponent
	 */
	struct ADCCharacterBase_GetCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GetAccountId
	 */
	struct ADCCharacterBase_GetAccountId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.GameplayTagUpdated
	 */
	struct ADCCharacterBase_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterBase.BroadcastMsgBlueprint
	 */
	struct ADCCharacterBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsgAll
	 */
	struct ADCCharacterLobbyCapture_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsg
	 */
	struct ADCCharacterLobbyCapture_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.TerminateBase
	 */
	struct ADCCharacterLobbyCapture_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.OnVisibleCharacterRenderRight
	 */
	struct ADCCharacterLobbyCapture_OnVisibleCharacterRenderRight_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.OnVisibleCharacterRenderLeft
	 */
	struct ADCCharacterLobbyCapture_OnVisibleCharacterRenderLeft_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.OnItemEquipped
	 */
	struct ADCCharacterLobbyCapture_OnItemEquipped_Params
	{
	public:
		class UAnimationAsset*                                     ItemStandIdle;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterLobbyCapture.BroadcastMsgBlueprint
	 */
	struct ADCCharacterLobbyCapture_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterProduction.OnRep_ItemDataList
	 */
	struct ADCCharacterProduction_OnRep_ItemDataList_Params
	{
	public:
		TArray<class FString>                                      OldItemAssetIDList;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterProduction.OnRep_ChangeHeadMesh
	 */
	struct ADCCharacterProduction_OnRep_ChangeHeadMesh_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterProduction.OnItemEquip
	 */
	struct ADCCharacterProduction_OnItemEquip_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCharacterSelectCapture.ActorActivity
	 */
	struct ADCCharacterSelectCapture_ActorActivity_Params
	{
	public:
		bool                                                       IsDisable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterSkinComponent.SetDataForDebug_Server
	 */
	struct UDCCharacterSkinComponent_SetDataForDebug_Server_Params
	{
	public:
		class UDCCharacterSkinDataAsset*                           InData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterSkinComponent.OnRep_Data
	 */
	struct UDCCharacterSkinComponent_OnRep_Data_Params
	{
	public:
		class UDCCharacterSkinDataAsset*                           OldData;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterSkinWidget.GetTooltipWidget
	 */
	struct UDCCharacterSkinWidget_GetTooltipWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCharacterSkinListEntryWidget.OnRightClicked
	 */
	struct UDCCharacterSkinListEntryWidget_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockEntryWidget.ExecuteContextMenu
	 */
	struct UDCCommunityBlockEntryWidget_ExecuteContextMenu_Params
	{
	public:
		EContextOptionType                                         Option;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockEntryWidget.CleanupContextMenuWidget
	 */
	struct UDCCommunityBlockEntryWidget_CleanupContextMenuWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.OnEntryHovered
	 */
	struct UDCCommunityBlockWidget_OnEntryHovered_Params
	{
	public:
		class UObject*                                             WidgetData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsHovered;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageRight
	 */
	struct UDCCommunityBlockWidget_OnButtonPageRight_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageLeft
	 */
	struct UDCCommunityBlockWidget_OnButtonPageLeft_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.OnButtonBack
	 */
	struct UDCCommunityBlockWidget_OnButtonBack_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.OnBlockUpdated
	 */
	struct UDCCommunityBlockWidget_OnBlockUpdated_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.NumItemsPerPage
	 */
	struct UDCCommunityBlockWidget_NumItemsPerPage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.GetMaxPage
	 */
	struct UDCCommunityBlockWidget_GetMaxPage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCommunityBlockWidget.FindId
	 */
	struct UDCCommunityBlockWidget_FindId_Params
	{
	public:
		class FText                                                FindText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCContextComponent.UnbindMsgAll
	 */
	struct UDCContextComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCContextComponent.UnbindMsg
	 */
	struct UDCContextComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCContextComponent.TerminateBase
	 */
	struct UDCContextComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCContextComponent.OnContextMenuHolderVisibilityChaned
	 */
	struct UDCContextComponent_OnContextMenuHolderVisibilityChaned_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCContextComponent.BroadcastMsgBlueprint
	 */
	struct UDCContextComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCContextMenuEntryWidget.Execute
	 */
	struct UDCContextMenuEntryWidget_Execute_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCustomizeCharacterSkinListWidget.OnSetCharacterSkinInfoArray
	 */
	struct UDCCustomizeCharacterSkinListWidget_OnSetCharacterSkinInfoArray_Params
	{
	public:
		TArray<struct FDCCharacterSkinInfo>                        CharacterSkinInfoArray;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteListWidget.OnSetEmoteIdArray
	 */
	struct UDCCustomizeEmoteListWidget_OnSetEmoteIdArray_Params
	{
	public:
		TArray<struct FDCEmoteInfo>                                EmoteIdArray;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.SetEmoteIconImageAngle
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_SetEmoteIconImageAngle_Params
	{
	public:
		float                                                      NewAngle;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.OnEmoteNameChanged
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_OnEmoteNameChanged_Params
	{
	public:
		class FText                                                NewEmoteName;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetPreviewEmoteVisibility
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_GetPreviewEmoteVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetHighlightVisibility
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_GetHighlightVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetEmoteIconVisibility
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_GetEmoteIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetArrowVisibility
	 */
	struct UDCCustomizeEmoteRadialSlotWidget_GetArrowVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnSetItemSkinInfoArray
	 */
	struct UDCCustomizeItemSkinListWidget_OnSetItemSkinInfoArray_Params
	{
	public:
		TArray<struct FDCItemSkinInfo>                             ItemSkinInfoArray;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.OnItemTabSelected
	 */
	struct UDCCustomizeWidgetBase_OnItemTabSelected_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.OnEmoteTabSelected
	 */
	struct UDCCustomizeWidgetBase_OnEmoteTabSelected_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.OnCustomizeWidgetOpen
	 */
	struct UDCCustomizeWidgetBase_OnCustomizeWidgetOpen_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.OnCharacterTabSelected
	 */
	struct UDCCustomizeWidgetBase_OnCharacterTabSelected_Params
	{	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.GetItemSkinListVisibility
	 */
	struct UDCCustomizeWidgetBase_GetItemSkinListVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.GetEmoteListVisibility
	 */
	struct UDCCustomizeWidgetBase_GetEmoteListVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCCustomizeWidgetBase.GetCharacterSkinListVisibility
	 */
	struct UDCCustomizeWidgetBase_GetCharacterSkinListVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDamageIndicatorComponent.UnbindMsgAll
	 */
	struct UDCDamageIndicatorComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDamageIndicatorComponent.UnbindMsg
	 */
	struct UDCDamageIndicatorComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDamageIndicatorComponent.TerminateBase
	 */
	struct UDCDamageIndicatorComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCDamageIndicatorComponent.BroadcastMsgBlueprint
	 */
	struct UDCDamageIndicatorComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.MakeUniqueId
	 */
	struct UDCDataBlueprintLibrary_MakeUniqueId_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetIdStr
	 */
	struct UDCDataBlueprintLibrary_MakePrimaryAssetIdStr_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetId
	 */
	struct UDCDataBlueprintLibrary_MakePrimaryAssetId_Params
	{
	public:
		class FString                                              PrimaryAssetIdStr;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.LoadPrimaryAsset
	 */
	struct UDCDataBlueprintLibrary_LoadPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     InPrimaryAssetId;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InOnComplete;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.IsStreamingMode
	 */
	struct UDCDataBlueprintLibrary_IsStreamingMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNickname
	 */
	struct UDCDataBlueprintLibrary_GetViewNickname_Params
	{
	public:
		struct FNickname                                           Nickname;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeId_Unidentified
	 */
	struct UDCDataBlueprintLibrary_GetItemPropertyTypeId_Unidentified_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockSellBackItemByUniqueId
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockSellBackItemByUniqueId_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    StockSellBackUniqueId;                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockSellBackItem                        ReturnValue;                                             // 0x0018(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockSellBack
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockSellBack_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockSellBack                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockCraftItemByUniqueId
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockCraftItemByUniqueId_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    StockCraftUniqueId;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockCraftItem                           ReturnValue;                                             // 0x0018(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockCraft
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockCraft_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockCraft                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockBuyItemByUniqueId
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockBuyItemByUniqueId_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    StockBuyUniqueId;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockBuyItem                             ReturnValue;                                             // 0x0018(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataStockBuy
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataStockBuy_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataStockBuy                                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpellMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataSpellMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataSpell>      OutDesignDataSpellMap;                                   // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpell
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataSpell_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataSpell                                    ReturnValue;                                             // 0x0010(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkillMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataSkillMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataSkill>      OutDesignDataSkillMap;                                   // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkill
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataSkill_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataSkill                                    ReturnValue;                                             // 0x0010(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsSkillCheck
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPropsSkillCheck_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataPropsSkillCheck                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsInteract
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPropsInteract_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataPropsInteract                            ReturnValue;                                             // 0x0010(0x0098)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataProps
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataProps_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataProps                                    ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataProjectile
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataProjectile_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataProjectile                               ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacterMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPlayerCharacterMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter> OutDesignDataPlayerCharacterMap;                         // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacter
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPlayerCharacter_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataPlayerCharacter                          ReturnValue;                                             // 0x0010(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerkMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPerkMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataPerk>       OutDesignDataPerkMap;                                    // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerk
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataPerk_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataPerk                                     ReturnValue;                                             // 0x0010(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMovementModifier
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataMovementModifier_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataMovementModifier                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMonster
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataMonster_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataMonster                                  ReturnValue;                                             // 0x0010(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMerchant
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataMerchant_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataMerchant                                 ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMeleeAttack
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataMeleeAttack_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataMeleeAttack                              ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataLootDrop
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataLootDrop_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataLootDrop                                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemRequirement
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemRequirement_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItemRequirement                          ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemPropertyType
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemPropertyType_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItemPropertyType                         ReturnValue;                                             // 0x0010(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemProperty
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemProperty_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItemProperty                             ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemIdsByGameplayTag
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemIdsByGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        ItemGameplayTag;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemContainer
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemContainer_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItemContainer                            ReturnValue;                                             // 0x0010(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemConsume
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItemConsume_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItemConsume                              ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItem
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataItem_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataItem                                     ReturnValue;                                             // 0x0010(0x0170)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataIdTagGroup
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataIdTagGroup_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataIdTagGroup                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayEffect
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataGameplayEffect_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataGameplayEffect                           ReturnValue;                                             // 0x0010(0x0180)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayAbility
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataGameplayAbility_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataGameplayAbility                          ReturnValue;                                             // 0x0010(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataFloorRule
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataFloorRule_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataFloorRule                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataFloorPortal
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataFloorPortal_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataFloorPortal                              ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataEmoteMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataEmoteMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataEmote>      OutDesignDataEmoteMap;                                   // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataEmote
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataEmote_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataEmote                                    ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataDungeonMap
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataDungeonMap_Params
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataDungeon>    OutDesignDataDungeonMap;                                 // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataDungeon
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataDungeon_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataDungeon                                  ReturnValue;                                             // 0x0010(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataConstant
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataConstant_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataConstant                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataBaseItem
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataBaseItem_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataBaseItem                                 ReturnValue;                                             // 0x0010(0x0064)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataAssetItemRequirement
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataAssetItemRequirement_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDesignDataAssetItemRequirement*                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataAoe
	 */
	struct UDCDataBlueprintLibrary_GetDesignDataAoe_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDesignDataAoe                                      ReturnValue;                                             // 0x0010(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetDescData
	 */
	struct UDCDataBlueprintLibrary_GetDescData_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDescData*                                           ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterBaseItemMap
	 */
	struct UDCDataBlueprintLibrary_GetCharacterBaseItemMap_Params
	{
	public:
		struct FPrimaryAssetId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<struct FPrimaryAssetId, int32_t>                      BaseItemMap;                                             // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEmoteListEntryWidget.OnRightClicked
	 */
	struct UDCEmoteListEntryWidget_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCEmoteListEntryWidget.GetSelectedVisibility
	 */
	struct UDCEmoteListEntryWidget_GetSelectedVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.RemovePlayerMappableConfigByTagContainer
	 */
	struct UDCEnhancedInputLibrary_RemovePlayerMappableConfigByTagContainer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               InputConfigTags;                                         // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputVectorForAction
	 */
	struct UDCEnhancedInputLibrary_InjectInputVectorForAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputForAction
	 */
	struct UDCEnhancedInputLibrary_InjectInputForAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   RawValue;                                                // 0x0010(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetKeysMappedToAction
	 */
	struct UDCEnhancedInputLibrary_GetKeysMappedToAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetInputConfigByTag
	 */
	struct UDCEnhancedInputLibrary_GetInputConfigByTag_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCInputConfig*                                      ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetInputAction
	 */
	struct UDCEnhancedInputLibrary_GetInputAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputTag;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        ReturnValue;                                             // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetEnhancedPlayerInput
	 */
	struct UDCEnhancedInputLibrary_GetEnhancedPlayerInput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEnhancedPlayerInput*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetDCEnhancedInputLocalPlayerSubSystem
	 */
	struct UDCEnhancedInputLibrary_GetDCEnhancedInputLocalPlayerSubSystem_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCEnhancedInputLocalPlayerSubsystem*                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueWithController
	 */
	struct UDCEnhancedInputLibrary_GetActionValueWithController_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueByTags
	 */
	struct UDCEnhancedInputLibrary_GetActionValueByTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputTag;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0018(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolWithController
	 */
	struct UDCEnhancedInputLibrary_GetActionBoolWithController_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolByTags
	 */
	struct UDCEnhancedInputLibrary_GetActionBoolByTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InputTag;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLibrary.AddPlayerMappableConfigByTagContainer
	 */
	struct UDCEnhancedInputLibrary_AddPlayerMappableConfigByTagContainer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               InputConfigTags;                                         // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.RemovePlayerMappableConfigByTag
	 */
	struct UDCEnhancedInputLocalPlayerSubsystem_RemovePlayerMappableConfigByTag_Params
	{
	public:
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetPlayerMappableInputConfig
	 */
	struct UDCEnhancedInputLocalPlayerSubsystem_GetPlayerMappableInputConfig_Params
	{
	public:
		struct FGameplayTag                                        ConfigTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPlayerMappableInputConfig*                          ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetInputConfig
	 */
	struct UDCEnhancedInputLocalPlayerSubsystem_GetInputConfig_Params
	{
	public:
		struct FGameplayTag                                        ConfigTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCInputConfig*                                      ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.AddPlayerMappableConfigByTag
	 */
	struct UDCEnhancedInputLocalPlayerSubsystem_AddPlayerMappableConfigByTag_Params
	{
	public:
		struct FGameplayTag                                        InputConfigTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEquipmentSlotWidget.IsWeapon
	 */
	struct UDCEquipmentSlotWidget_IsWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEquipmentSlotWidget.IsTwoHandedWeapon
	 */
	struct UDCEquipmentSlotWidget_IsTwoHandedWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEquipmentSlotWidget.IsPairSlot
	 */
	struct UDCEquipmentSlotWidget_IsPairSlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCEquipmentWidget.OnItemsUpdated
	 */
	struct UDCEquipmentWidget_OnItemsUpdated_Params
	{	};

	/**
	 * Function DungeonCrawler.DCEquipmentWidget.GetSlotWidget
	 */
	struct UDCEquipmentWidget_GetSlotWidget_Params
	{
	public:
		EDCEquipmentSlotIndex                                      Index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9BTV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCEquipmentSlotWidget*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameInstance.UnbindMsgAll
	 */
	struct UDCGameInstance_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameInstance.UnbindMsg
	 */
	struct UDCGameInstance_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameInstance.TerminateBase
	 */
	struct UDCGameInstance_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameInstance.OnPreLoadMap
	 */
	struct UDCGameInstance_OnPreLoadMap_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameInstance.OnLoadingFinished
	 */
	struct UDCGameInstance_OnLoadingFinished_Params
	{
	public:
		class FString                                              InMapName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameInstance.BroadcastMsgBlueprint
	 */
	struct UDCGameInstance_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsgAll
	 */
	struct ADCGameModeAIControllerBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsg
	 */
	struct ADCGameModeAIControllerBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeAIControllerBase.TerminateBase
	 */
	struct ADCGameModeAIControllerBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameModeAIControllerBase.ReceivePreInitializeComponents
	 */
	struct ADCGameModeAIControllerBase_ReceivePreInitializeComponents_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameModeAIControllerBase.BroadcastMsgBlueprint
	 */
	struct ADCGameModeAIControllerBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeBase.UnbindMsgAll
	 */
	struct ADCGameModeBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeBase.UnbindMsg
	 */
	struct ADCGameModeBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameModeBase.TerminateBase
	 */
	struct ADCGameModeBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameModeBase.BroadcastMsgBlueprint
	 */
	struct ADCGameModeBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameObjectLinkComponent.RequestToLinkers
	 */
	struct UDCGameObjectLinkComponent_RequestToLinkers_Params
	{
	public:
		struct FObjectLinkRequestEvent                             ObjectLinkRequestEvent;                                  // 0x0000(0x00B0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FObjectLinkResponeEvent>                     ReturnValue;                                             // 0x00B0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.RemoveMovementModifier
	 */
	struct UDCGameplayAbilityBase_RemoveMovementModifier_Params
	{
	public:
		struct FGameplayTagContainer                               ContainerTags;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCueLocal
	 */
	struct UDCGameplayAbilityBase_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCue
	 */
	struct UDCGameplayAbilityBase_RemoveGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.RemoveAllAppliedMovementModifiers
	 */
	struct UDCGameplayAbilityBase_RemoveAllAppliedMovementModifiers_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpecFromContainer
	 */
	struct UDCGameplayAbilityBase_MakeEffectContainerSpecFromContainer_Params
	{
	public:
		TArray<struct FDCGameplayEffectContainerSpec>              OutContainerSpecArray;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDCGameplayEffectContainer                          Container;                                               // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0068(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x0118(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpec
	 */
	struct UDCGameplayAbilityBase_MakeEffectContainerSpec_Params
	{
	public:
		TArray<struct FDCGameplayEffectContainerSpec>              OutContainerSpecArray;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ContainerTag;                                            // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0018(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x00C8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerPremadeSpec
	 */
	struct UDCGameplayAbilityBase_MakeEffectContainerPremadeSpec_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ContainerTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.GetSetByCallerValueInEffectContainerArray
	 */
	struct UDCGameplayAbilityBase_GetSetByCallerValueInEffectContainerArray_Params
	{
	public:
		struct FGameplayTag                                        ContainerTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SetByCallerDataTag;                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.GetGameplayTriggerTag
	 */
	struct UDCGameplayAbilityBase_GetGameplayTriggerTag_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueWithParams
	 */
	struct UDCGameplayAbilityBase_ExecuteGameplayCueWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Params;                                                  // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocalWithParams
	 */
	struct UDCGameplayAbilityBase_ExecuteGameplayCueLocalWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Params;                                                  // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocal
	 */
	struct UDCGameplayAbilityBase_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCue
	 */
	struct UDCGameplayAbilityBase_ExecuteGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.CopyPremadeSpecArray
	 */
	struct UDCGameplayAbilityBase_CopyPremadeSpecArray_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ApplyPremadeSpecArray
	 */
	struct UDCGameplayAbilityBase_ApplyPremadeSpecArray_Params
	{
	public:
		struct FGameplayTag                                        ContainerTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ApplyMovementModifier
	 */
	struct UDCGameplayAbilityBase_ApplyMovementModifier_Params
	{
	public:
		struct FGameplayTagContainer                               ContainerTags;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpecArray
	 */
	struct UDCGameplayAbilityBase_ApplyEffectContainerSpecArray_Params
	{
	public:
		TArray<struct FDCGameplayEffectContainerSpec>              OutContainerSpecArray;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ContainerTag;                                            // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0018(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpec
	 */
	struct UDCGameplayAbilityBase_ApplyEffectContainerSpec_Params
	{
	public:
		struct FDCGameplayEffectContainerSpec                      ContainerSpec;                                           // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainer
	 */
	struct UDCGameplayAbilityBase_ApplyEffectContainer_Params
	{
	public:
		struct FGameplayTag                                        ContainerTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FGDZ[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueWithParams
	 */
	struct UDCGameplayAbilityBase_AddGameplayCueWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Params;                                                  // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocalWithParams
	 */
	struct UDCGameplayAbilityBase_AddGameplayCueLocalWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Params;                                                  // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocal
	 */
	struct UDCGameplayAbilityBase_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCue
	 */
	struct UDCGameplayAbilityBase_AddGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayCueNotify_Actor.SetAkComponentRTPCValue
	 */
	struct ADCGameplayCueNotify_Actor_SetAkComponentRTPCValue_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkRtpc*                                             RtpcValue;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InTickValue;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InTotalValue;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxRTPCValue;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayCueNotify_Actor.ClearAkComponentRTPCValue
	 */
	struct ADCGameplayCueNotify_Actor_ClearAkComponentRTPCValue_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameplayTagCollider.OnRep_TargetAccountId
	 */
	struct ADCGameplayTagCollider_OnRep_TargetAccountId_Params
	{
	public:
		class FString                                              InOldTargetAccountId;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayTagCollider.OnOverlapping
	 */
	struct ADCGameplayTagCollider_OnOverlapping_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameplayTagCollider.OnOverlapEnd
	 */
	struct ADCGameplayTagCollider_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameplayTagCollider.OnOverlapBegin
	 */
	struct ADCGameplayTagCollider_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WBVD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSession.UnbindMsgAll
	 */
	struct ADCGameSession_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSession.UnbindMsg
	 */
	struct ADCGameSession_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSession.TerminateBase
	 */
	struct ADCGameSession_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameSession.CharacterResurrection
	 */
	struct ADCGameSession_CharacterResurrection_Params
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DCCharacterClass;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDCGameplayEffectSetByCallerData>            InInitGameplayEffectSetByCallerDataArray;                // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIsRemoveAllItem;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YUSX[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCCharacterProduction*                              CharacterProduction;                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSession.BroadcastMsgBlueprint
	 */
	struct ADCGameSession_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.UpdateGameState
	 */
	struct ADCGameSpawner_UpdateGameState_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.SpawnProps
	 */
	struct ADCGameSpawner_SpawnProps_Params
	{
	public:
		struct FPrimaryAssetId                                     InPropsId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APropsActorBase*                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.SpawnMonster
	 */
	struct ADCGameSpawner_SpawnMonster_Params
	{
	public:
		struct FPrimaryAssetId                                     InMonsterId;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreview;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_16CO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCMonsterBase*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.SpawnItemHolder
	 */
	struct ADCGameSpawner_SpawnItemHolder_Params
	{
	public:
		struct FPrimaryAssetId                                     InLootDropId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemHolderActorBase*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.SetNextPreview
	 */
	struct ADCGameSpawner_SetNextPreview_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameSpawner.BindFMsgGameStateNotify
	 */
	struct ADCGameSpawner_BindFMsgGameStateNotify_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.UnbindMsgAll
	 */
	struct ADCGameStateBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.UnbindMsg
	 */
	struct ADCGameStateBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.TerminateBase
	 */
	struct ADCGameStateBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.SetGameInfo
	 */
	struct ADCGameStateBase_SetGameInfo_Params
	{
	public:
		struct FDCGameInfo                                         InGameInfo;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_HideDeathSwarmTimer
	 */
	struct ADCGameStateBase_SetDungeonInfo_HideDeathSwarmTimer_Params
	{
	public:
		bool                                                       HideDeathSwarmTimer;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_GameTimeSec
	 */
	struct ADCGameStateBase_SetDungeonInfo_GameTimeSec_Params
	{
	public:
		int32_t                                                    GameTimeSec;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnSetGameInfo
	 */
	struct ADCGameStateBase_OnSetGameInfo_Params
	{
	public:
		struct FDCGameInfo                                         OldGameInfo;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_PartyDataArray
	 */
	struct ADCGameStateBase_OnRep_PartyDataArray_Params
	{
	public:
		TArray<struct FPartyData>                                  OldPartyDataArray;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_GameStateDataArray
	 */
	struct ADCGameStateBase_OnRep_GameStateDataArray_Params
	{
	public:
		TArray<struct FGameStateData>                              OldGameStateDataArray;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_GameInfo
	 */
	struct ADCGameStateBase_OnRep_GameInfo_Params
	{
	public:
		struct FDCGameInfo                                         OldGameInfo;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_GameFloorRuleData
	 */
	struct ADCGameStateBase_OnRep_GameFloorRuleData_Params
	{
	public:
		struct FGameFloorRuleData                                  InOldGameFloorRuleData;                                  // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_DungeonInfo
	 */
	struct ADCGameStateBase_OnRep_DungeonInfo_Params
	{
	public:
		struct FDCDungeonInfo                                      OldDungeonInfo;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnRep_AccountDataReplicationArray
	 */
	struct ADCGameStateBase_OnRep_AccountDataReplicationArray_Params
	{
	public:
		TArray<struct FAccountDataReplication>                     OldAccountDataReplicationArray;                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnGameFloorRuleData
	 */
	struct ADCGameStateBase_OnGameFloorRuleData_Params
	{
	public:
		struct FGameFloorRuleData                                  InGameFloorRuleData;                                     // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.OnDungeonInfo
	 */
	struct ADCGameStateBase_OnDungeonInfo_Params
	{
	public:
		struct FDCDungeonInfo                                      InDungeonInfo;                                           // 0x0000(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.GetGameInfo
	 */
	struct ADCGameStateBase_GetGameInfo_Params
	{
	public:
		struct FDCGameInfo                                         ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.GetDungeonInfo
	 */
	struct ADCGameStateBase_GetDungeonInfo_Params
	{
	public:
		struct FDCDungeonInfo                                      ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameStateBase.BroadcastMsgBlueprint
	 */
	struct ADCGameStateBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGameUserSettings.GetInputConfigByName
	 */
	struct UDCGameUserSettings_GetInputConfigByName_Params
	{
	public:
		class FName                                                ConfigName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPlayerMappableInputConfig*                          ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGhostTrailActor.SetGhostMaterial
	 */
	struct ADCGhostTrailActor_SetGhostMaterial_Params
	{
	public:
		TArray<class UMeshComponent*>                              Components;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGhostTrailActor.HandleTimelineUpdate
	 */
	struct ADCGhostTrailActor_HandleTimelineUpdate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGhostTrailActor.HandleTimelineFinished
	 */
	struct ADCGhostTrailActor_HandleTimelineFinished_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGhostTrailActor.BeginGhostTrailEffect
	 */
	struct ADCGhostTrailActor_BeginGhostTrailEffect_Params
	{	};

	/**
	 * Function DungeonCrawler.DCHitBoxComponent.GetHitResultFromClosestLocationTraceOnMesh
	 */
	struct UDCHitBoxComponent_GetHitResultFromClosestLocationTraceOnMesh_Params
	{
	public:
		struct FHitResult                                          InHitResult;                                             // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x00E8(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x00F0(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCHitBoxComponent.GetHitDirection
	 */
	struct UDCHitBoxComponent_GetHitDirection_Params
	{
	public:
		struct FVector                                             AttackerLocation;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHitDirection                                              ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCHitBoxComponent.GetClosestLocationOnMesh
	 */
	struct UDCHitBoxComponent_GetClosestLocationOnMesh_Params
	{
	public:
		struct FHitResult                                          InHitResult;                                             // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x00E8(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00F0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInputNumberWidget.OnCancelled
	 */
	struct UDCInputNumberWidget_OnCancelled_Params
	{	};

	/**
	 * Function DungeonCrawler.DCInputNumberWidget.OnAccepted
	 */
	struct UDCInputNumberWidget_OnAccepted_Params
	{	};

	/**
	 * Function DungeonCrawler.DCInputNumberWidget.ManualClick
	 */
	struct UDCInputNumberWidget_ManualClick_Params
	{	};

	/**
	 * Function DungeonCrawler.DCInputNumberWidget.IsValidText
	 */
	struct UDCInputNumberWidget_IsValidText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoRarity
	 */
	struct UDCInteractTargetInterface_InteractTargetInfoRarity_Params
	{
	public:
		struct FGameplayTag                                        RarityTag;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoName
	 */
	struct UDCInteractTargetInterface_InteractTargetInfoName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemSkinComponent.RemoveDataForDebug_Server
	 */
	struct UDCItemSkinComponent_RemoveDataForDebug_Server_Params
	{
	public:
		struct FPrimaryAssetId                                     ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemSkinComponent.OnRep_Datas
	 */
	struct UDCItemSkinComponent_OnRep_Datas_Params
	{
	public:
		TArray<class UDCItemSkinDataAsset*>                        OldDatas;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemSkinComponent.AddDataForDebug_Server
	 */
	struct UDCItemSkinComponent_AddDataForDebug_Server_Params
	{
	public:
		class UDCItemSkinDataAsset*                                InData;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemSkinWidget.GetTooltipWidget
	 */
	struct UDCItemSkinWidget_GetTooltipWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemSkinListEntryWidget.OnRightClicked
	 */
	struct UDCItemSkinListEntryWidget_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCItemTooltipStatWidget.IsEmpty
	 */
	struct UDCItemTooltipStatWidget_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemTooltipAbilityWidget.IsEmpty
	 */
	struct UDCItemTooltipAbilityWidget_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemTooltipRequirementWidget.IsEmpty
	 */
	struct UDCItemTooltipRequirementWidget_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemViewerActor.SetStartRotateLocation
	 */
	struct ADCItemViewerActor_SetStartRotateLocation_Params
	{
	public:
		float                                                      InStartPosition;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemViewerActor.SetItemActorRotation
	 */
	struct ADCItemViewerActor_SetItemActorRotation_Params
	{
	public:
		float                                                      InYaw;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemViewerActor.InitItemActorRotation
	 */
	struct ADCItemViewerActor_InitItemActorRotation_Params
	{	};

	/**
	 * Function DungeonCrawler.DCLoadoutWidget.Init
	 */
	struct UDCLoadoutWidget_Init_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMerchantBlueprintLibrary.GetStockSellBackReceivedDataArray
	 */
	struct UDCMerchantBlueprintLibrary_GetStockSellBackReceivedDataArray_Params
	{
	public:
		struct FDesignDataStockSellBackItem                        InDesignDataStockSellBackItem;                           // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FStockSellBackReceivedData>                  ReturnValue;                                             // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMerchantBlueprintLibrary.GetStockCraftRequiredDataArray
	 */
	struct UDCMerchantBlueprintLibrary_GetStockCraftRequiredDataArray_Params
	{
	public:
		struct FDesignDataStockCraftItem                           InDesignDataStockCraftItem;                              // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FStockCraftRequiredData>                     ReturnValue;                                             // 0x00B0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMerchantBlueprintLibrary.GetStockBuyRequiredDataArray
	 */
	struct UDCMerchantBlueprintLibrary_GetStockBuyRequiredDataArray_Params
	{
	public:
		struct FDesignDataStockBuyItem                             InDesignDataStockBuyItem;                                // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FStockBuyRequiredData>                       ReturnValue;                                             // 0x00B0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.UnbindMsgAll
	 */
	struct UDCMetaInventoryComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.UnbindMsg
	 */
	struct UDCMetaInventoryComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.TerminateBase
	 */
	struct UDCMetaInventoryComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.OnResetInventory
	 */
	struct UDCMetaInventoryComponent_OnResetInventory_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.OnItemDrop
	 */
	struct UDCMetaInventoryComponent_OnItemDrop_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             Src;                                                     // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             Dst;                                                     // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4GG2[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.OnItemClick
	 */
	struct UDCMetaInventoryComponent_OnItemClick_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8X73[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       Event;                                                   // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaInventoryComponent.BroadcastMsgBlueprint
	 */
	struct UDCMetaInventoryComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.UpdateGameState
	 */
	struct ADCMetaPlayerController_UpdateGameState_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.UnbindMsgAll
	 */
	struct ADCMetaPlayerController_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.UnbindMsg
	 */
	struct ADCMetaPlayerController_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.TerminateBase
	 */
	struct ADCMetaPlayerController_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.Gm
	 */
	struct ADCMetaPlayerController_Gm_Params
	{
	public:
		class FString                                              InCmd;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.GetAccountSessionData
	 */
	struct ADCMetaPlayerController_GetAccountSessionData_Params
	{
	public:
		struct FAccountSessionData                                 ReturnValue;                                             // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.ExitClient
	 */
	struct ADCMetaPlayerController_ExitClient_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMetaPlayerController.BroadcastMsgBlueprint
	 */
	struct ADCMetaPlayerController_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MetaComponentBase.UnbindMsgAll
	 */
	struct UMetaComponentBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MetaComponentBase.UnbindMsg
	 */
	struct UMetaComponentBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MetaComponentBase.TerminateBase
	 */
	struct UMetaComponentBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.MetaComponentBase.BroadcastMsgBlueprint
	 */
	struct UMetaComponentBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.UpdateResetTimer
	 */
	struct UDCMetaTradeComponent_UpdateResetTimer_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnTradingBoxItemUpdate
	 */
	struct UDCMetaTradeComponent_OnTradingBoxItemUpdate_Params
	{
	public:
		struct FDCItemInfo                                         ItemInfo;                                                // 0x0000(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0108(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             InventoryId;                                             // 0x010C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnTradingBoxItemRemove
	 */
	struct UDCMetaTradeComponent_OnTradingBoxItemRemove_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             InventoryId;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnTradingBoxItemAdd
	 */
	struct UDCMetaTradeComponent_OnTradingBoxItemAdd_Params
	{
	public:
		struct FDCItemInfo                                         ItemInfo;                                                // 0x0000(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0108(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             InventoryId;                                             // 0x010C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnItemDrop
	 */
	struct UDCMetaTradeComponent_OnItemDrop_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    _;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             To;                                                      // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U5UA[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnItemClick
	 */
	struct UDCMetaTradeComponent_OnItemClick_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TQQ6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       Event;                                                   // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMetaTradeComponent.OnInventoryItemClick
	 */
	struct UDCMetaTradeComponent_OnInventoryItemClick_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDCInventoryId                                             From;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5KT6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       Event;                                                   // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.UnbindMsgAll
	 */
	struct ADCMonsterAIController_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.UnbindMsg
	 */
	struct ADCMonsterAIController_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.TerminateBase
	 */
	struct ADCMonsterAIController_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionUpdated
	 */
	struct ADCMonsterAIController_OnTargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x0058)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionInfoUpdated
	 */
	struct ADCMonsterAIController_OnTargetPerceptionInfoUpdated_Params
	{
	public:
		struct FActorPerceptionUpdateInfo                          UpdateInfo;                                              // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.OnPerceptionUpdated
	 */
	struct ADCMonsterAIController_OnPerceptionUpdated_Params
	{
	public:
		TArray<class AActor*>                                      UpdatedActors;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAIController.BroadcastMsgBlueprint
	 */
	struct ADCMonsterAIController_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SubAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SubAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Point;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SpawnSlave
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SpawnSlave_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              SlaveClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      XYRange;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfully;                                           // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9VSP[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByZRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SortTargetsByZRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EMonsterFilterSortingType                                  MonsterFilterSortingType;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByXYRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SortTargetsByXYRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EMonsterFilterSortingType                                  MonsterFilterSortingType;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SortTargetsByDistanceAndPickTarget_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EMonsterFilterSortingType                                  MonsterFilterSortingType;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_04M2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistance
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SortTargetsByDistance_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EMonsterFilterSortingType                                  MonsterFilterSortingType;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SortTargetsByAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EMonsterFilterSortingType                                  MonsterFilterSortingType;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggroRate
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SetAggroRate_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_SetAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Point;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggroAll
	 */
	struct UDCMonsterAISystemBlueprintLibrary_RemoveAggroAll_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_RemoveAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTopAggroTarget
	 */
	struct UDCMonsterAISystemBlueprintLibrary_PickTopAggroTarget_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTarget
	 */
	struct UDCMonsterAISystemBlueprintLibrary_PickTarget_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LNUP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickRandomTarget
	 */
	struct UDCMonsterAISystemBlueprintLibrary_PickRandomTarget_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.MulAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_MulAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Point;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToLocation
	 */
	struct UDCMonsterAISystemBlueprintLibrary_JumpToLocation_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DstLocation;                                             // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Power;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFavorHighArc;                                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToActor
	 */
	struct UDCMonsterAISystemBlueprintLibrary_JumpToActor_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DstActor;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Power;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFavorHighArc;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.IsAvailablePath
	 */
	struct UDCMonsterAISystemBlueprintLibrary_IsAvailablePath_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DstLocation;                                             // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSlaveCount
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetSlaveCount_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSightTargetArray
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetSightTargetArray_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetHearingTargetArray
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetHearingTargetArray_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetDamageTargetArray
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetDamageTargetArray_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetCurrentAttributeValue
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetCurrentAttributeValue_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  GameplayAttribute;                                       // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfully;                                           // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KU1H[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetBaseAttributeValue
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetBaseAttributeValue_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  GameplayAttribute;                                       // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfully;                                           // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NZB8[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAllTargetArray
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetAllTargetArray_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroPoint
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetAggroPoint_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfully;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MRF3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroMonster
	 */
	struct UDCMonsterAISystemBlueprintLibrary_GetAggroMonster_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCMonsterBase*>                              TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterUnTagedTargets
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterUnTagedTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinZRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinZRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ZRange;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      XYRange;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ZRange;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DirectionalAngle;                                        // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AllowedAngle;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinXYRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      XYRange;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DirectionalAngle;                                        // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AllowedAngle;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistance
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinDistance_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsWithinDirectionAngleAndAllowedAngle_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      DirectionalAngle;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AllowedAngle;                                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverZRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsOverZRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ZRange;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverXYRange
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsOverXYRange_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      XYRange;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverDistance
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTargetsOverDistance_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTagedTargets
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterTagedTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterPlayerCharacterTargets
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterPlayerCharacterTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargetsByID
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterMonsterTargetsByID_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ID;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargets
	 */
	struct UDCMonsterAISystemBlueprintLibrary_FilterMonsterTargets_Params
	{
	public:
		TArray<class ADCCharacterBase*>                            TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.AddAggro
	 */
	struct UDCMonsterAISystemBlueprintLibrary_AddAggro_Params
	{
	public:
		class ADCMonsterBase*                                      DCMonsterBase;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCCharacterBase*                                    Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Point;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.SetMonsterId
	 */
	struct ADCMonsterBase_SetMonsterId_Params
	{
	public:
		struct FPrimaryAssetId                                     InMonsterId;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnStuckByShield
	 */
	struct ADCMonsterBase_OnStuckByShield_Params
	{
	public:
		class ADCCharacterBase*                                    InInstigator;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnSetAI
	 */
	struct ADCMonsterBase_OnSetAI_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnRep_PauseAnims
	 */
	struct ADCMonsterBase_OnRep_PauseAnims_Params
	{
	public:
		unsigned char                                              OldPauseAnims;                                           // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnRep_OrientRotationToMovement
	 */
	struct ADCMonsterBase_OnRep_OrientRotationToMovement_Params
	{
	public:
		unsigned char                                              OldOrientRotationToMovement;                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnRep_MonsterId
	 */
	struct ADCMonsterBase_OnRep_MonsterId_Params
	{
	public:
		struct FPrimaryAssetId                                     InOldMonsterId;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnRep_MonsterCollisionProfile
	 */
	struct ADCMonsterBase_OnRep_MonsterCollisionProfile_Params
	{
	public:
		unsigned char                                              OldMonsterCollisionProfile;                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnFMsgGASAttributeNotifyBlueprint
	 */
	struct ADCMonsterBase_OnFMsgGASAttributeNotifyBlueprint_Params
	{
	public:
		struct FMsgGASAttributeNotify                              InMsg;                                                   // 0x0000(0x0498)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnDamaged
	 */
	struct ADCMonsterBase_OnDamaged_Params
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnBeforeDeath
	 */
	struct ADCMonsterBase_OnBeforeDeath_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.OnAfterDeath
	 */
	struct ADCMonsterBase_OnAfterDeath_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.Normal
	 */
	struct ADCMonsterBase_Normal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.InteractableWithoutHit
	 */
	struct ADCMonsterBase_InteractableWithoutHit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.InteractableOnly
	 */
	struct ADCMonsterBase_InteractableOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.Interactable
	 */
	struct ADCMonsterBase_Interactable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.GetMonsterId
	 */
	struct ADCMonsterBase_GetMonsterId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.GetDesignDataMonster
	 */
	struct ADCMonsterBase_GetDesignDataMonster_Params
	{
	public:
		struct FDesignDataMonster                                  ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.Fly
	 */
	struct ADCMonsterBase_Fly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.Death
	 */
	struct ADCMonsterBase_Death_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.ChangePauseAnims
	 */
	struct ADCMonsterBase_ChangePauseAnims_Params
	{
	public:
		unsigned char                                              Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.ChangeOrientRotationToMovement
	 */
	struct ADCMonsterBase_ChangeOrientRotationToMovement_Params
	{
	public:
		unsigned char                                              Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.Burrow
	 */
	struct ADCMonsterBase_Burrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterBase.BeforeDeath
	 */
	struct ADCMonsterBase_BeforeDeath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterGameplayAbilityBase.AbilityActivated
	 */
	struct UDCMonsterGameplayAbilityBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.UpdateGameState
	 */
	struct ADCMonsterSpawner_UpdateGameState_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.UnbindMsgAll
	 */
	struct ADCMonsterSpawner_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.UnbindMsg
	 */
	struct ADCMonsterSpawner_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.TerminateBase
	 */
	struct ADCMonsterSpawner_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.Spawns
	 */
	struct ADCMonsterSpawner_Spawns_Params
	{
	public:
		TArray<class ADCMonsterBase*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMonsterSpawner.BroadcastMsgBlueprint
	 */
	struct ADCMonsterSpawner_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMultiLineEditableTextBox.InsertTextAtCursor
	 */
	struct UDCMultiLineEditableTextBox_InsertTextAtCursor_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMultiLineEditableTextBox.Goto
	 */
	struct UDCMultiLineEditableTextBox_Goto_Params
	{
	public:
		int32_t                                                    InLineIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InOffset;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCMultiLineEditableTextBox.AnyTextSelected
	 */
	struct UDCMultiLineEditableTextBox_AnyTextSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPerkDataComponent.SetWeaponMasteryList
	 */
	struct UDCPerkDataComponent_SetWeaponMasteryList_Params
	{
	public:
		struct FGameplayTagContainer                               InWeaponMsteryList;                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPerkDataComponent.SetSpearProficiencyList
	 */
	struct UDCPerkDataComponent_SetSpearProficiencyList_Params
	{
	public:
		struct FGameplayTagContainer                               InWeaponList;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPerkDataComponent.ResetWeaponMasteryList
	 */
	struct UDCPerkDataComponent_ResetWeaponMasteryList_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPerkDataComponent.ResetSpearProficiencyList
	 */
	struct UDCPerkDataComponent_ResetSpearProficiencyList_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerBlueprintFunctionLibrary.GetCurrentPlayerPawn
	 */
	struct UDCPlayerBlueprintFunctionLibrary_GetCurrentPlayerPawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.UpdateMeshHalfTranslucent
	 */
	struct ADCPlayerCharacterBase_UpdateMeshHalfTranslucent_Params
	{
	public:
		bool                                                       IsTranslucent;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ANSM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.ShowHitDirectionUIMessage
	 */
	struct ADCPlayerCharacterBase_ShowHitDirectionUIMessage_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitDirection;                                            // 0x0008(0x0018)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedSkillIdArray
	 */
	struct ADCPlayerCharacterBase_OnRep_OwnedSkillIdArray_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedPerkIdArray
	 */
	struct ADCPlayerCharacterBase_OnRep_OwnedPerkIdArray_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.GetGender
	 */
	struct ADCPlayerCharacterBase_GetGender_Params
	{
	public:
		EDCGender                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerCharacterBase.ClientShowSystemMessage
	 */
	struct ADCPlayerCharacterBase_ClientShowSystemMessage_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.UnbindMsgAll
	 */
	struct ADCPlayerController_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.UnbindMsg
	 */
	struct ADCPlayerController_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.TerminateBase
	 */
	struct ADCPlayerController_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerController.StatServer
	 */
	struct ADCPlayerController_StatServer_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerController.StartToWearItem_Client
	 */
	struct ADCPlayerController_StartToWearItem_Client_Params
	{
	public:
		struct FItemData                                           InWearingItemData;                                       // 0x0000(0x0090)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              InWearingActor;                                          // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDuration;                                              // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G4ZP[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InDescription;                                           // 0x00A0(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.SetClientReady_Server
	 */
	struct ADCPlayerController_SetClientReady_Server_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ServerDebugSpawnItem
	 */
	struct ADCPlayerController_ServerDebugSpawnItem_Params
	{
	public:
		class AActor*                                              SpawnActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     SpawnItemAssetId;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ServerDebugGiveGameplayEffectToTarget
	 */
	struct ADCPlayerController_ServerDebugGiveGameplayEffectToTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     GameplayEffectAssetId;                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.RequestPlayerCharacterLocation_Server
	 */
	struct ADCPlayerController_RequestPlayerCharacterLocation_Server_Params
	{
	public:
		struct FDCAccountId                                        InAccountId;                                             // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnRep_AccountId
	 */
	struct ADCPlayerController_OnRep_AccountId_Params
	{
	public:
		class FString                                              OldId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnPlayerInfoUpdate
	 */
	struct ADCPlayerController_OnPlayerInfoUpdate_Params
	{
	public:
		struct FDCPlayerInfo                                       InPlayerInfo;                                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDCPlayerInfo                                       OldPlayerInfo;                                           // 0x00A0(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnPlayerInfoAdd
	 */
	struct ADCPlayerController_OnPlayerInfoAdd_Params
	{
	public:
		struct FDCPlayerInfo                                       InPlayerInfo;                                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnIronShieldScan
	 */
	struct ADCPlayerController_OnIronShieldScan_Params
	{
	public:
		struct FIronShieldScanResult                               InIronShieldScanResult;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnGameStateNotify
	 */
	struct ADCPlayerController_OnGameStateNotify_Params
	{
	public:
		struct FGameStateData                                      InGameStateData;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnFMsgGameKillLogNotifyClient
	 */
	struct ADCPlayerController_OnFMsgGameKillLogNotifyClient_Params
	{
	public:
		struct FGameKillLogData                                    InGameKillLogData;                                       // 0x0000(0x00D8)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnFMsgGameFloorLogNotifyClient
	 */
	struct ADCPlayerController_OnFMsgGameFloorLogNotifyClient_Params
	{
	public:
		struct FGameFloorLogData                                   InGameFloorLogData;                                      // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.OnFMsgGameAnnounceNotifyClient
	 */
	struct ADCPlayerController_OnFMsgGameAnnounceNotifyClient_Params
	{
	public:
		struct FGameAnnounceData                                   InGameAnnounceData;                                      // 0x0000(0x0090)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.NotifySystemMessage_Client
	 */
	struct ADCPlayerController_NotifySystemMessage_Client_Params
	{
	public:
		class FText                                                SystemMessage;                                           // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.LobbyPopup
	 */
	struct ADCPlayerController_LobbyPopup_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerController.IsTargetAccountSelf
	 */
	struct ADCPlayerController_IsTargetAccountSelf_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.GmServer
	 */
	struct ADCPlayerController_GmServer_Params
	{
	public:
		class FString                                              InCmd;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.Gm
	 */
	struct ADCPlayerController_Gm_Params
	{
	public:
		class FString                                              InCmd;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.GetDebugFaceTargetActor
	 */
	struct ADCPlayerController_GetDebugFaceTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.GetAccountSessionData
	 */
	struct ADCPlayerController_GetAccountSessionData_Params
	{
	public:
		struct FAccountSessionData                                 ReturnValue;                                             // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ExitClientServer
	 */
	struct ADCPlayerController_ExitClientServer_Params
	{
	public:
		bool                                                       InbLobby;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LHR9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InReason;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ExitClient
	 */
	struct ADCPlayerController_ExitClient_Params
	{
	public:
		bool                                                       bInLobby;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKU7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InReason;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ExecuteExitClientReason
	 */
	struct ADCPlayerController_ExecuteExitClientReason_Params
	{
	public:
		bool                                                       bInLobby;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_933A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InReason;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ExecuteExitClient
	 */
	struct ADCPlayerController_ExecuteExitClient_Params
	{
	public:
		bool                                                       bInLobby;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ClientLobbyPopup
	 */
	struct ADCPlayerController_ClientLobbyPopup_Params
	{	};

	/**
	 * Function DungeonCrawler.DCPlayerController.ChangeParty_Server
	 */
	struct ADCPlayerController_ChangeParty_Server_Params
	{
	public:
		struct FDCPartyId                                          InPartyId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.BroadcastMsgBlueprint
	 */
	struct ADCPlayerController_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerController.AckPlayerCharacterLocation_Client
	 */
	struct ADCPlayerController_AckPlayerCharacterLocation_Client_Params
	{
	public:
		struct FDCAccountId                                        InAccountId;                                             // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPlayerPawnLocation;                                    // 0x0010(0x0018)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InPlayerPawnRotation;                                    // 0x0028(0x0018)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerInfoHolder.OnRep_PlayerInfo
	 */
	struct ADCPlayerInfoHolder_OnRep_PlayerInfo_Params
	{
	public:
		struct FDCPlayerInfo                                       OldPlayerInfo;                                           // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerInfoHolder.OnPlayerInfoUpdated
	 */
	struct ADCPlayerInfoHolder_OnPlayerInfoUpdated_Params
	{
	public:
		struct FDCPlayerInfo                                       InPlayerInfo;                                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDCPlayerInfo                                       InOldPlayerInfo;                                         // 0x00A0(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerInventoryWidget.GetEquipWidget
	 */
	struct UDCPlayerInventoryWidget_GetEquipWidget_Params
	{
	public:
		class UDCEquipmentWidget*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCPlayerInventoryWidget.GetBagWidget
	 */
	struct UDCPlayerInventoryWidget_GetBagWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z2U6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCBagWidget*                                        ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCShopItemSlotWidget.GetTooltipWidget
	 */
	struct UDCShopItemSlotWidget_GetTooltipWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCShopItemSlotWidget.GetSelectedImgVisibility
	 */
	struct UDCShopItemSlotWidget_GetSelectedImgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCShopItemSlotWidget.GetPurchasedImgVisibility
	 */
	struct UDCShopItemSlotWidget_GetPurchasedImgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCShopItemSlotWidget.GetHoverImgVisibility
	 */
	struct UDCShopItemSlotWidget_GetHoverImgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCShopWidgetBase.OnWidgetOpen
	 */
	struct UDCShopWidgetBase_OnWidgetOpen_Params
	{	};

	/**
	 * Function DungeonCrawler.DCShopWidgetBase.OnWidgetClose
	 */
	struct UDCShopWidgetBase_OnWidgetClose_Params
	{	};

	/**
	 * Function DungeonCrawler.DCShopWidgetBase.OnPrevPage
	 */
	struct UDCShopWidgetBase_OnPrevPage_Params
	{	};

	/**
	 * Function DungeonCrawler.DCShopWidgetBase.OnNextPage
	 */
	struct UDCShopWidgetBase_OnNextPage_Params
	{	};

	/**
	 * Function DungeonCrawler.DCShopWidgetBase.OnButtonBuyClicked
	 */
	struct UDCShopWidgetBase_OnButtonBuyClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCShowingKeyWidgetBase.OnInputBindChanged
	 */
	struct UDCShowingKeyWidgetBase_OnInputBindChanged_Params
	{	};

	/**
	 * Function DungeonCrawler.DCSimpleTooltipWidget.SetTooltipData
	 */
	struct UDCSimpleTooltipWidget_SetTooltipData_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSlateColor                                         TextColor;                                               // 0x0018(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCSimpleTooltipWidget.GetTooltipColor
	 */
	struct UDCSimpleTooltipWidget_GetTooltipColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsgAll
	 */
	struct UDCSkeletalMeshComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsg
	 */
	struct UDCSkeletalMeshComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCSkeletalMeshComponent.TerminateBase
	 */
	struct UDCSkeletalMeshComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCSkeletalMeshComponent.SetAffectNavigation
	 */
	struct UDCSkeletalMeshComponent_SetAffectNavigation_Params
	{
	public:
		bool                                                       bRelevant;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCSkeletalMeshComponent.BroadcastMsgBlueprint
	 */
	struct UDCSkeletalMeshComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTargetType.GetTargets
	 */
	struct UDCTargetType_GetTargets_Params
	{
	public:
		class AActor*                                              TargetingOwnerActor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetingAvatarActor;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  OutHitResults;                                           // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      OutActors;                                               // 0x00D0(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradeBoxWidget.SetReady
	 */
	struct UDCTradeBoxWidget_SetReady_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.OnTradeRemoved
	 */
	struct UDCTradeInventoryWidget_OnTradeRemoved_Params
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.OnTradeInserted
	 */
	struct UDCTradeInventoryWidget_OnTradeInserted_Params
	{
	public:
		struct FDCItemInfo                                         ItemInfo;                                                // 0x0000(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0108(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.OnTradeEnd
	 */
	struct UDCTradeInventoryWidget_OnTradeEnd_Params
	{	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.OnStorageTabClicked
	 */
	struct UDCTradeInventoryWidget_OnStorageTabClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryTabClicked
	 */
	struct UDCTradeInventoryWidget_OnInventoryTabClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCTradeInventoryWidget.Init
	 */
	struct UDCTradeInventoryWidget_Init_Params
	{	};

	/**
	 * Function DungeonCrawler.DCTradePhaseConfirmWidget.OnResponseLocalTraderConfirmRequestResult
	 */
	struct UDCTradePhaseConfirmWidget_OnResponseLocalTraderConfirmRequestResult_Params
	{
	public:
		bool                                                       bRequestSucceed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradePhaseConfirmWidget.OnLocalTraderCheckBoxStateChanged
	 */
	struct UDCTradePhaseConfirmWidget_OnLocalTraderCheckBoxStateChanged_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradePhaseConfirmWidget.OnCancelTradeButtonClicked
	 */
	struct UDCTradePhaseConfirmWidget_OnCancelTradeButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCTradePhaseDealWidget.OnResponseLocalTraderRequestRequestResult
	 */
	struct UDCTradePhaseDealWidget_OnResponseLocalTraderRequestRequestResult_Params
	{
	public:
		bool                                                       bRequestSucceed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradePhaseDealWidget.OnLocalTraderCheckBoxStateChanged
	 */
	struct UDCTradePhaseDealWidget_OnLocalTraderCheckBoxStateChanged_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCTradePhaseDealWidget.OnCancelTradeButtonClicked
	 */
	struct UDCTradePhaseDealWidget_OnCancelTradeButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.SetPlayerCursorCenter
	 */
	struct UDCWidgetBlueprintLibrary_SetPlayerCursorCenter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.PopupMessageSWidgetNotify
	 */
	struct UDCWidgetBlueprintLibrary_PopupMessageSWidgetNotify_Params
	{
	public:
		class APlayerController*                                   InPlayer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                DescMessage;                                             // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EPopupButtonType                                           ButtonType;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupMessageReqeust
	 */
	struct UDCWidgetBlueprintLibrary_MakePopupMessageReqeust_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPopupDataBase*                                      PopupData;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMsgWidgetPopupMessageReqeust                       ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupDataSWidget
	 */
	struct UDCWidgetBlueprintLibrary_MakePopupDataSWidget_Params
	{
	public:
		EPopupButtonType                                           PopupButtonType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_95C5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DescMessage;                                             // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class UPopupDataSWidget*                                   ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastSystemMessageNotify
	 */
	struct UDCWidgetBlueprintLibrary_BroadcastSystemMessageNotify_Params
	{
	public:
		class APlayerController*                                   InPlayer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutPutMessage;                                           // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastLobbySystemMessage
	 */
	struct UDCWidgetBlueprintLibrary_BroadcastLobbySystemMessage_Params
	{
	public:
		class APlayerController*                                   InPlayer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                AnnounceText;                                            // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnSuccessStockBuy
	 */
	struct UDealTableBuyWidget_OnSuccessStockBuy_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnStockBuyFillItemsResponse
	 */
	struct UDealTableBuyWidget_OnStockBuyFillItemsResponse_Params
	{
	public:
		bool                                                       bFillSucceed;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VVP0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FStockBuyRequiredData>                       ResultRequiredDataArray;                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnSetStockBuyData
	 */
	struct UDealTableBuyWidget_OnSetStockBuyData_Params
	{
	public:
		struct FStockBuyData                                       InStockBuyBata;                                          // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnRemoveStockBuyData
	 */
	struct UDealTableBuyWidget_OnRemoveStockBuyData_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnClickedMakeDealButton
	 */
	struct UDealTableBuyWidget_OnClickedMakeDealButton_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableBuyWidget.OnClickedFillAllButton
	 */
	struct UDealTableBuyWidget_OnClickedFillAllButton_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnSuccessStockCraft
	 */
	struct UDealTableCraftWidget_OnSuccessStockCraft_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnStockCraftFillItemsResponse
	 */
	struct UDealTableCraftWidget_OnStockCraftFillItemsResponse_Params
	{
	public:
		bool                                                       bFillSucceed;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y52F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FStockCraftRequiredData>                     ResultRequiredDataArray;                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnSetStockCraftData
	 */
	struct UDealTableCraftWidget_OnSetStockCraftData_Params
	{
	public:
		struct FStockCraftData                                     InStockCraftData;                                        // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnRemoveStockCraftData
	 */
	struct UDealTableCraftWidget_OnRemoveStockCraftData_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnClickedMakeDealButton
	 */
	struct UDealTableCraftWidget_OnClickedMakeDealButton_Params
	{	};

	/**
	 * Function DungeonCrawler.DealTableCraftWidget.OnClickedFillAllButton
	 */
	struct UDealTableCraftWidget_OnClickedFillAllButton_Params
	{	};

	/**
	 * Function DungeonCrawler.InventoryComponent.UnbindMsgAll
	 */
	struct UInventoryComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.UnbindMsg
	 */
	struct UInventoryComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.TerminateBase
	 */
	struct UInventoryComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.InventoryComponent.OnRep_TotalGoldCount
	 */
	struct UInventoryComponent_OnRep_TotalGoldCount_Params
	{
	public:
		int64_t                                                    OldTotalGoldCount;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.OnRep_ContainingItems
	 */
	struct UInventoryComponent_OnRep_ContainingItems_Params
	{
	public:
		TArray<struct FItemData>                                   OldContainingItems;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.GetItemByItemUniqueId
	 */
	struct UInventoryComponent_GetItemByItemUniqueId_Params
	{
	public:
		int64_t                                                    InItemUniqueId;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.GetInventoryType
	 */
	struct UInventoryComponent_GetInventoryType_Params
	{
	public:
		EInventoryType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.ClientShowMessage
	 */
	struct UInventoryComponent_ClientShowMessage_Params
	{
	public:
		class FText                                                OutPutMessage;                                           // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.BroadcastMsgBlueprint
	 */
	struct UInventoryComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryComponent.AddContainingItem
	 */
	struct UInventoryComponent_AddContainingItem_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PropsActorBase.UpdateInteractDepthValue
	 */
	struct APropsActorBase_UpdateInteractDepthValue_Params
	{
	public:
		int32_t                                                    DepthValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PropsActorBase.SetPropsId
	 */
	struct APropsActorBase_SetPropsId_Params
	{
	public:
		struct FPrimaryAssetId                                     InPropsId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PropsActorBase.GetPropsId
	 */
	struct APropsActorBase_GetPropsId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PropsActorBase.GetDesignDataProps
	 */
	struct APropsActorBase_GetDesignDataProps_Params
	{
	public:
		struct FDesignDataProps                                    ReturnValue;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PropsActorBase.GameplayTagUpdated
	 */
	struct APropsActorBase_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DescData.GetExecImpactPower
	 */
	struct UDescData_GetExecImpactPower_Params
	{
	public:
		class UDescDataParam*                                      InDescDataParam;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DescData.GetDescription
	 */
	struct UDescData_GetDescription_Params
	{
	public:
		class UDescDataParam*                                      InDescDataParam;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FText>                                        OutDescTextArray;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DesignDataAssetItemRequirement.IsTargetFulfilledAllRequirements
	 */
	struct UDesignDataAssetItemRequirement_IsTargetFulfilledAllRequirements_Params
	{
	public:
		struct FDesignDataItem                                     DesignDataItem;                                          // 0x0000(0x0170)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0170(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0178(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DesignDataAssetItemRequirement.IsFulfilledAllRequirements
	 */
	struct UDesignDataAssetItemRequirement_IsFulfilledAllRequirements_Params
	{
	public:
		struct FDesignDataItem                                     DesignDataItem;                                          // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0170(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0180(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0188(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0198(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x01B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirementsTarget
	 */
	struct UDesignDataAssetItemRequirement_GetUnmetItemRequirementsTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EItemRequirementType>                               ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirements
	 */
	struct UDesignDataAssetItemRequirement_GetUnmetItemRequirements_Params
	{
	public:
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EItemRequirementType>                               ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DesignDataAssetItemBundleInfo.GetBundleArtAssetByCount
	 */
	struct UDesignDataAssetItemBundleInfo_GetBundleArtAssetByCount_Params
	{
	public:
		int32_t                                                    ItemCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EmoteComponent.UnbindMsgAll
	 */
	struct UEmoteComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EmoteComponent.UnbindMsg
	 */
	struct UEmoteComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EmoteComponent.TerminateBase
	 */
	struct UEmoteComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.EmoteComponent.BroadcastMsgBlueprint
	 */
	struct UEmoteComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlot.GetItem
	 */
	struct UEquipmentSlot_GetItem_Params
	{
	public:
		class UItem*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.UpdateCrossHairWidget
	 */
	struct UEquipmentInventoryComponent_UpdateCrossHairWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsgAll
	 */
	struct UEquipmentInventoryComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsg
	 */
	struct UEquipmentInventoryComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.TryRemoveItem
	 */
	struct UEquipmentInventoryComponent_TryRemoveItem_Params
	{
	public:
		int64_t                                                    RemoveItemUniqueId;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.TryAddItem
	 */
	struct UEquipmentInventoryComponent_TryAddItem_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    SlotId;                                                  // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BySystem;                                                // 0x0094(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0095(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.TerminateBase
	 */
	struct UEquipmentInventoryComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.SetEquipItemAt
	 */
	struct UEquipmentInventoryComponent_SetEquipItemAt_Params
	{
	public:
		EEquipmentQuickSlotType                                    QuickSlotType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEquip;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.ServerMoveToNextSlot
	 */
	struct UEquipmentInventoryComponent_ServerMoveToNextSlot_Params
	{
	public:
		EEquipmentQuickSlotType                                    QuickSlotType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNextAvailableSlot;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.RemoveContaingItemActors
	 */
	struct UEquipmentInventoryComponent_RemoveContaingItemActors_Params
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.RemoveAllItems
	 */
	struct UEquipmentInventoryComponent_RemoveAllItems_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.OnRep_SheathItemActors
	 */
	struct UEquipmentInventoryComponent_OnRep_SheathItemActors_Params
	{
	public:
		TArray<class AItemActor*>                                  OldSheathItemActors;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquippedItemActors
	 */
	struct UEquipmentInventoryComponent_OnRep_EquippedItemActors_Params
	{
	public:
		TArray<class AItemActor*>                                  OldEquippedItemActors;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.OnRep_ContainingItems
	 */
	struct UEquipmentInventoryComponent_OnRep_ContainingItems_Params
	{
	public:
		TArray<struct FItemData>                                   OldContainingItems;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.OnFinishedActiveEquipmentQuickSlot
	 */
	struct UEquipmentInventoryComponent_OnFinishedActiveEquipmentQuickSlot_Params
	{
	public:
		EEquipmentQuickSlotType                                    QuickSlotType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSlotActive;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.HideEquippedItemActorsInGame
	 */
	struct UEquipmentInventoryComponent_HideEquippedItemActorsInGame_Params
	{
	public:
		bool                                                       bHidden;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetSlotIdByItemSlotType
	 */
	struct UEquipmentInventoryComponent_GetSlotIdByItemSlotType_Params
	{
	public:
		struct FGameplayTag                                        SlotType;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetQuickSlotInfoByType
	 */
	struct UEquipmentInventoryComponent_GetQuickSlotInfoByType_Params
	{
	public:
		EEquipmentQuickSlotType                                    QuickSlotType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8OFG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEquipmentQuickSlotInfo                             ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetItemsBySlotType
	 */
	struct UEquipmentInventoryComponent_GetItemsBySlotType_Params
	{
	public:
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetItemByItemUniqueId
	 */
	struct UEquipmentInventoryComponent_GetItemByItemUniqueId_Params
	{
	public:
		int64_t                                                    InItemUniqueId;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentHoldingItemData
	 */
	struct UEquipmentInventoryComponent_GetCurrentHoldingItemData_Params
	{
	public:
		struct FItemData                                           ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentActiveSlotType
	 */
	struct UEquipmentInventoryComponent_GetCurrentActiveSlotType_Params
	{
	public:
		EEquipmentQuickSlotType                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryComponent.BroadcastMsgBlueprint
	 */
	struct UEquipmentInventoryComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnSwitchChestAndSoulHeart
	 */
	struct UEquipmentInventoryGroupWidget_OnSwitchChestAndSoulHeart_Params
	{
	public:
		int32_t                                                    ActiveIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDropDetected
	 */
	struct UEquipmentInventoryGroupWidget_OnItemDropDetected_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragOver
	 */
	struct UEquipmentInventoryGroupWidget_OnItemDragOver_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           DragScreenPos;                                           // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           DragWidgetScreenPos;                                     // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           DragWidgetAbsoluteSize;                                  // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragLeaveOrDrop
	 */
	struct UEquipmentInventoryGroupWidget_OnItemDragLeaveOrDrop_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnDragOverChestSlot
	 */
	struct UEquipmentInventoryGroupWidget_OnDragOverChestSlot_Params
	{
	public:
		bool                                                       bIsDragOver;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentInventoryGroupWidget.OnCurrentActiveSlot
	 */
	struct UEquipmentInventoryGroupWidget_OnCurrentActiveSlot_Params
	{
	public:
		EEquipmentQuickSlotType                                    ItemQuickSlotType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.SetPreviewItemWidget
	 */
	struct UEquipmentSlotWidget_SetPreviewItemWidget_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.SetActiveHoverImage
	 */
	struct UEquipmentSlotWidget_SetActiveHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.RemovePreviewItemWidget
	 */
	struct UEquipmentSlotWidget_RemovePreviewItemWidget_Params
	{
	public:
		bool                                                       bSetItem;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.OnRemoveItem
	 */
	struct UEquipmentSlotWidget_OnRemoveItem_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.OnOverlapItemWidget
	 */
	struct UEquipmentSlotWidget_OnOverlapItemWidget_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValidSlot;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanEquip;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.OnLeaveItemWidget
	 */
	struct UEquipmentSlotWidget_OnLeaveItemWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.OnItemSlotActivate
	 */
	struct UEquipmentSlotWidget_OnItemSlotActivate_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.OnFinishedItemDataSet
	 */
	struct UEquipmentSlotWidget_OnFinishedItemDataSet_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        HandType;                                                // 0x0090(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SlotType;                                                // 0x0098(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemInventorySize                                  InventorySize;                                           // 0x00A0(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentSlotWidget.CheckAndSetActiveHoverImage
	 */
	struct UEquipmentSlotWidget_CheckAndSetActiveHoverImage_Params
	{	};

	/**
	 * Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActiveSecondaryHoverImage
	 */
	struct UEquipmentWeaponSlotSetWidget_SetActiveSecondaryHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActivePrimaryHoverImage
	 */
	struct UEquipmentWeaponSlotSetWidget_SetActivePrimaryHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.EquipmentWeaponSlotSetWidget.CheckAndSetActiveHoverImageBySlot
	 */
	struct UEquipmentWeaponSlotSetWidget_CheckAndSetActiveHoverImageBySlot_Params
	{
	public:
		class UWidget*                                             SlotUnderPointerPosition;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ExpandableInventoryComponent.SetExpandable
	 */
	struct UExpandableInventoryComponent_SetExpandable_Params
	{
	public:
		bool                                                       bCanExpand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameActorStatusSlotWidget.OnActorStatusData
	 */
	struct UGameActorStatusSlotWidget_OnActorStatusData_Params
	{
	public:
		struct FActorStatusData                                    NewValue;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorStatusData                                    OldValue;                                                // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameAlivePlayerCountWidget.OnTotalPlayerCount
	 */
	struct UGameAlivePlayerCountWidget_OnTotalPlayerCount_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameAlivePlayerCountWidget.OnAlivePlayerCount
	 */
	struct UGameAlivePlayerCountWidget_OnAlivePlayerCount_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnPlayShootCrossHair
	 */
	struct UGameCrossHairWidget_OnPlayShootCrossHair_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnPlayPullingCrossHair
	 */
	struct UGameCrossHairWidget_OnPlayPullingCrossHair_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnInitCrossHair
	 */
	struct UGameCrossHairWidget_OnInitCrossHair_Params
	{	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnCrossHairVisability
	 */
	struct UGameCrossHairWidget_OnCrossHairVisability_Params
	{
	public:
		bool                                                       IsVisablile;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SetDefault;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnChangeWeaponCrossHair
	 */
	struct UGameCrossHairWidget_OnChangeWeaponCrossHair_Params
	{
	public:
		struct FGameplayTag                                        WeaponTypeTag;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemUtilityTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemSlotTypeTags;                                        // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsAttackEnable;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnChangeToRangeCrossHairAndPullAction
	 */
	struct UGameCrossHairWidget_OnChangeToRangeCrossHairAndPullAction_Params
	{
	public:
		struct FGameplayTag                                        WeaponTypeTag;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemUtilityTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnChangeCrossHairInfo
	 */
	struct UGameCrossHairWidget_OnChangeCrossHairInfo_Params
	{
	public:
		struct FGameplayTag                                        WeaponTypeTag;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ChangeAngle;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsPinPoint;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F2XZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RotateTime;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameCrossHairWidget.OnActivateSpellCrossHair
	 */
	struct UGameCrossHairWidget_OnActivateSpellCrossHair_Params
	{
	public:
		bool                                                       IsActivate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSelectGroupWidget.OnSelectedEmoteIndexChanged
	 */
	struct UGameEmoteSelectGroupWidget_OnSelectedEmoteIndexChanged_Params
	{	};

	/**
	 * Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectPopup
	 */
	struct UGameEmoteSelectGroupWidget_OnEmoteSelectPopup_Params
	{	};

	/**
	 * Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectClose
	 */
	struct UGameEmoteSelectGroupWidget_OnEmoteSelectClose_Params
	{	};

	/**
	 * Function DungeonCrawler.GameEmoteSelectGroupWidget.OnCurrentEmoteSlotChanged
	 */
	struct UGameEmoteSelectGroupWidget_OnCurrentEmoteSlotChanged_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.SetEmoteData
	 */
	struct UGameEmoteSlotWidget_SetEmoteData_Params
	{
	public:
		class UDCEmoteDataAsset*                                   InDesignDataEmote;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.SelectionChange
	 */
	struct UGameEmoteSlotWidget_SelectionChange_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.Reset
	 */
	struct UGameEmoteSlotWidget_Reset_Params
	{	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.OnSetEmoteArtData
	 */
	struct UGameEmoteSlotWidget_OnSetEmoteArtData_Params
	{
	public:
		class UArtDataEmote*                                       InArtEmoteData;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.OnSelectionChanged
	 */
	struct UGameEmoteSlotWidget_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameEmoteSlotWidget.OnReset
	 */
	struct UGameEmoteSlotWidget_OnReset_Params
	{	};

	/**
	 * Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsgAll
	 */
	struct UGameHeadupWidgetComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsg
	 */
	struct UGameHeadupWidgetComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameHeadupWidgetComponent.TerminateBase
	 */
	struct UGameHeadupWidgetComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.GameHeadupWidgetComponent.BroadcastMsgBlueprint
	 */
	struct UGameHeadupWidgetComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameHitDirectionWidget.SetHitDirection
	 */
	struct UGameHitDirectionWidget_SetHitDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameHitDirectionWidget.OnAnimation
	 */
	struct UGameHitDirectionWidget_OnAnimation_Params
	{	};

	/**
	 * Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractTargetData
	 */
	struct UGameInteractionDescriptionWidget_OnInteractTargetData_Params
	{
	public:
		struct FInteractTargetData                                 NewValue;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInteractTargetData                                 OldValue;                                                // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractableDataByStateMap
	 */
	struct UGameInteractionDescriptionWidget_OnInteractableDataByStateMap_Params
	{
	public:
		TMap<struct FGameplayTag, struct FInteractionData>         NewValue;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<struct FGameplayTag, struct FInteractionData>         OldValue;                                                // 0x0050(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInteractionDescriptionWidget.OnInputType
	 */
	struct UGameInteractionDescriptionWidget_OnInputType_Params
	{
	public:
		ECommonInputType                                           NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECommonInputType                                           OldValue;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckStart
	 */
	struct UGameInteractionSkillCheckWidget_OnInteractSkillCheckStart_Params
	{
	public:
		struct FSkillCheckData                                     SkillCheckData;                                          // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckEnd
	 */
	struct UGameInteractionSkillCheckWidget_OnInteractSkillCheckEnd_Params
	{
	public:
		ESkillCheckResult                                          SkillCheckResult;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInventoryGroupWidget.OnPopItemSelectWidget
	 */
	struct UGameInventoryGroupWidget_OnPopItemSelectWidget_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInventoryGroupWidget.OnItemDropOne
	 */
	struct UGameInventoryGroupWidget_OnItemDropOne_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameInventoryGroupWidget.OnItemDrop
	 */
	struct UGameInventoryGroupWidget_OnItemDrop_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwnerActor;                                           // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetTitle
	 */
	struct UGameMenuOptionComboBoxWidget_SetTitle_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxList
	 */
	struct UGameMenuOptionComboBoxWidget_SetComboBoxList_Params
	{
	public:
		TArray<class FString>                                      InComboBoxDataList;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxIndex
	 */
	struct UGameMenuOptionComboBoxWidget_SetComboBoxIndex_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxText
	 */
	struct UGameMenuOptionComboBoxWidget_GetSelectedComboBoxText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxIndex
	 */
	struct UGameMenuOptionComboBoxWidget_GetSelectedComboBoxIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.ClearComboBox
	 */
	struct UGameMenuOptionComboBoxWidget_ClearComboBox_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionComboBoxWidget.AddComboBox
	 */
	struct UGameMenuOptionComboBoxWidget_AddComboBox_Params
	{
	public:
		class FString                                              InComboBoxData;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateDetailText
	 */
	struct UGameMenuOptionPopupWidget_UpdateDetailText_Params
	{
	public:
		class FText                                                InDetailText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateButtonText
	 */
	struct UGameMenuOptionPopupWidget_UpdateButtonText_Params
	{
	public:
		class FText                                                InLeftText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                InRightText;                                             // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.SetDetailText
	 */
	struct UGameMenuOptionPopupWidget_SetDetailText_Params
	{
	public:
		class FText                                                InDetailText;                                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.SetButtonText
	 */
	struct UGameMenuOptionPopupWidget_SetButtonText_Params
	{
	public:
		class FText                                                InLeftText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                InRightText;                                             // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.HandleRightButtonClicked
	 */
	struct UGameMenuOptionPopupWidget_HandleRightButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionPopupWidget.HandleLeftButtonClicked
	 */
	struct UGameMenuOptionPopupWidget_HandleLeftButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.UpdateWindowFocusChanged
	 */
	struct UGameMenuOptionsAudioWidget_UpdateWindowFocusChanged_Params
	{
	public:
		bool                                                       IsFocus;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsBackgroundOption;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XW6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TotalVolume;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnTotalVolumeValueChanged
	 */
	struct UGameMenuOptionsAudioWidget_OnTotalVolumeValueChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnResetButtionClicked
	 */
	struct UGameMenuOptionsAudioWidget_OnResetButtionClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnMusicVolumeValueChanged
	 */
	struct UGameMenuOptionsAudioWidget_OnMusicVolumeValueChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnGameUserSettingAudios
	 */
	struct UGameMenuOptionsAudioWidget_OnGameUserSettingAudios_Params
	{
	public:
		struct FGameUserSettingAudios                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGameUserSettingAudios                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnEffectVolumeValueChanged
	 */
	struct UGameMenuOptionsAudioWidget_OnEffectVolumeValueChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnBackgroundMusicChanged
	 */
	struct UGameMenuOptionsAudioWidget_OnBackgroundMusicChanged_Params
	{
	public:
		bool                                                       IsToggle;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnApplyButtonClicked
	 */
	struct UGameMenuOptionsAudioWidget_OnApplyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsAudioWidget.OnAppActivateStateChanged
	 */
	struct UGameMenuOptionsAudioWidget_OnAppActivateStateChanged_Params
	{
	public:
		bool                                                       IsAppActivateChange;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnStreamingModeClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnStreamingModeClicked_Params
	{
	public:
		bool                                                       IsClick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnResetButtonClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnResetButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnMouseSensitivitySliderValueChenged
	 */
	struct UGameMenuOptionsControlsWidget_OnMouseSensitivitySliderValueChenged_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnKoreanButtonClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnKoreanButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseVerticalAxisClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnInvertMouseVerticalAxisClicked_Params
	{
	public:
		bool                                                       IsClick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseHorizontalAxisClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnInvertMouseHorizontalAxisClicked_Params
	{
	public:
		bool                                                       IsClick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnIgnoreInvitationClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnIgnoreInvitationClicked_Params
	{
	public:
		bool                                                       IsClick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnGameUserSettingControls
	 */
	struct UGameMenuOptionsControlsWidget_OnGameUserSettingControls_Params
	{
	public:
		struct FGameUserSettingControls                            NewValue;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameUserSettingControls                            OldValue;                                                // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnEnglishButtonClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnEnglishButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsControlsWidget.OnApplyButtonClicked
	 */
	struct UGameMenuOptionsControlsWidget_OnApplyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnSecondaryKeyBindButtonClicked
	 */
	struct UGameMenuOptionsInputBindSlotWidget_OnSecondaryKeyBindButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnPrimaryKeyBindButtonClicked
	 */
	struct UGameMenuOptionsInputBindSlotWidget_OnPrimaryKeyBindButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnClearButtonClicked
	 */
	struct UGameMenuOptionsInputBindSlotWidget_OnClearButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandleSecondaryKeyPressed
	 */
	struct UGameMenuOptionsInputBindSlotWidget_HandleSecondaryKeyPressed_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandlePrimaryKeyPressed
	 */
	struct UGameMenuOptionsInputBindSlotWidget_HandlePrimaryKeyPressed_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.ChangeBinding
	 */
	struct UGameMenuOptionsInputBindSlotWidget_ChangeBinding_Params
	{
	public:
		int32_t                                                    InKeyBindSlot;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AXI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                InKey;                                                   // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputWidget.RefreshWidget
	 */
	struct UGameMenuOptionsInputWidget_RefreshWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputWidget.OnResetButtonClicked
	 */
	struct UGameMenuOptionsInputWidget_OnResetButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputWidget.OnInputBindPendingChange
	 */
	struct UGameMenuOptionsInputWidget_OnInputBindPendingChange_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsInputWidget.OnApplyButtonClicked
	 */
	struct UGameMenuOptionsInputWidget_OnApplyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderValue
	 */
	struct UGameMenuOptionSliderWidget_UpdateSliderValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderMinMaxValue
	 */
	struct UGameMenuOptionSliderWidget_UpdateSliderMinMaxValue_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.SetTitle
	 */
	struct UGameMenuOptionSliderWidget_SetTitle_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.SetSliderMinMaxValue
	 */
	struct UGameMenuOptionSliderWidget_SetSliderMinMaxValue_Params
	{
	public:
		float                                                      InMinValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxValue;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStepSize;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.SetOptionValue
	 */
	struct UGameMenuOptionSliderWidget_SetOptionValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValuePercent
	 */
	struct UGameMenuOptionSliderWidget_GetOptionValuePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValue
	 */
	struct UGameMenuOptionSliderWidget_GetOptionValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValueByPercent
	 */
	struct UGameMenuOptionSliderWidget_GetCurrentOptionValueByPercent_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValue
	 */
	struct UGameMenuOptionSliderWidget_GetCurrentOptionValue_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionSliderWidget.ExtractOnlyNumberics
	 */
	struct UGameMenuOptionSliderWidget_ExtractOnlyNumberics_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInteger;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FXPF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetTitle
	 */
	struct UGameMenuOptionsVideosSlotWidget_SetTitle_Params
	{
	public:
		class FText                                                InTitle;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetQualityLevel
	 */
	struct UGameMenuOptionsVideosSlotWidget_SetQualityLevel_Params
	{
	public:
		int32_t                                                    InQualityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnQualityLevel
	 */
	struct UGameMenuOptionsVideosSlotWidget_OnQualityLevel_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnMediumButtonClicked
	 */
	struct UGameMenuOptionsVideosSlotWidget_OnMediumButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnLowButtonClicked
	 */
	struct UGameMenuOptionsVideosSlotWidget_OnLowButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnHighButtonClicked
	 */
	struct UGameMenuOptionsVideosSlotWidget_OnHighButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnEpicButtonClicked
	 */
	struct UGameMenuOptionsVideosSlotWidget_OnEpicButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.GetQualityLevel
	 */
	struct UGameMenuOptionsVideosSlotWidget_GetQualityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateGammaValue
	 */
	struct UGameMenuOptionsVideoWidget_UpdateGammaValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateDisplayModeOption
	 */
	struct UGameMenuOptionsVideoWidget_UpdateDisplayModeOption_Params
	{
	public:
		int32_t                                                    InUpdateIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.RevertDisplayModeOption
	 */
	struct UGameMenuOptionsVideoWidget_RevertDisplayModeOption_Params
	{
	public:
		int32_t                                                    InDisplayIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InResolutionindex;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.OnRevertDisplayOption
	 */
	struct UGameMenuOptionsVideoWidget_OnRevertDisplayOption_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.OnResetButtonClicked
	 */
	struct UGameMenuOptionsVideoWidget_OnResetButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.OnDisplayOptionChangePopup
	 */
	struct UGameMenuOptionsVideoWidget_OnDisplayOptionChangePopup_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyDisplayOption
	 */
	struct UGameMenuOptionsVideoWidget_OnApplyDisplayOption_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyButtonClicked
	 */
	struct UGameMenuOptionsVideoWidget_OnApplyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnWidgetToggleNotify
	 */
	struct UGameMenuOptionsWidget_OnWidgetToggleNotify_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnVideoButtonChecked
	 */
	struct UGameMenuOptionsWidget_OnVideoButtonChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnToggled
	 */
	struct UGameMenuOptionsWidget_OnToggled_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnInputButtonChecked
	 */
	struct UGameMenuOptionsWidget_OnInputButtonChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnGameplayButtonChecked
	 */
	struct UGameMenuOptionsWidget_OnGameplayButtonChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnControlsButtonChecked
	 */
	struct UGameMenuOptionsWidget_OnControlsButtonChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionsWidget.OnAudioButtonChecked
	 */
	struct UGameMenuOptionsWidget_OnAudioButtonChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.UpdateButtonText
	 */
	struct UGameMenuOptionToggleSwitchWidget_UpdateButtonText_Params
	{
	public:
		class FText                                                LeftText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                RightText;                                               // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetToggleSwitch
	 */
	struct UGameMenuOptionToggleSwitchWidget_SetToggleSwitch_Params
	{
	public:
		bool                                                       InSwitch;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetTitle
	 */
	struct UGameMenuOptionToggleSwitchWidget_SetTitle_Params
	{
	public:
		class FText                                                InTitle;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetButtonText
	 */
	struct UGameMenuOptionToggleSwitchWidget_SetButtonText_Params
	{
	public:
		class FText                                                LeftText;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                RightText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitchClicked
	 */
	struct UGameMenuOptionToggleSwitchWidget_OnToggleSwitchClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitch
	 */
	struct UGameMenuOptionToggleSwitchWidget_OnToggleSwitch_Params
	{
	public:
		bool                                                       InSwitch;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OffToggleSwitchClicked
	 */
	struct UGameMenuOptionToggleSwitchWidget_OffToggleSwitchClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetToggleSwitch
	 */
	struct UGameMenuOptionToggleSwitchWidget_GetToggleSwitch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnOptionsButtonClicked
	 */
	struct UGameMenuWidget_OnOptionsButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnMenuPop
	 */
	struct UGameMenuWidget_OnMenuPop_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnLobbyButtonClicked
	 */
	struct UGameMenuWidget_OnLobbyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnExitButtonClicked
	 */
	struct UGameMenuWidget_OnExitButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnDisplayOptionApplyPopup
	 */
	struct UGameMenuWidget_OnDisplayOptionApplyPopup_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnContinueButtonClicked
	 */
	struct UGameMenuWidget_OnContinueButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMenuWidget.OnCharacterSelectClicked
	 */
	struct UGameMenuWidget_OnCharacterSelectClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.GameMiniMapWidget.OnMiniMapName
	 */
	struct UGameMiniMapWidget_OnMiniMapName_Params
	{
	public:
		class FString                                              NewMiniMapName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OldMiniMapName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameMiniMapWidget.OnMiniMapDeathSwarmData
	 */
	struct UGameMiniMapWidget_OnMiniMapDeathSwarmData_Params
	{
	public:
		struct FMiniMapDeathSwarmData                              NewValue;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMiniMapDeathSwarmData                              OldValue;                                                // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GamePartyManagePartyMemberWidget.OnAccountDataReplication
	 */
	struct UGamePartyManagePartyMemberWidget_OnAccountDataReplication_Params
	{
	public:
		struct FAccountDataReplication                             NewValue;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAccountDataReplication                             OldValue;                                                // 0x0070(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GamePartyManagePartyWidget.PartyJoin
	 */
	struct UGamePartyManagePartyWidget_PartyJoin_Params
	{	};

	/**
	 * Function DungeonCrawler.GamePartyManagePartyWidget.OnPartyData
	 */
	struct UGamePartyManagePartyWidget_OnPartyData_Params
	{
	public:
		struct FPartyData                                          NewValue;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPartyData                                          OldValue;                                                // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GamePartyWidget.OnPartyData
	 */
	struct UGamePartyWidget_OnPartyData_Params
	{
	public:
		struct FPartyData                                          NewValue;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPartyData                                          OldValue;                                                // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GamePartyWidget.OnAccountDataReplication
	 */
	struct UGamePartyWidget_OnAccountDataReplication_Params
	{
	public:
		struct FAccountDataReplication                             NewValue;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAccountDataReplication                             OldValue;                                                // 0x0070(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GamePlayerCharacterWidget.OnCurrentActiveSlot
	 */
	struct UGamePlayerCharacterWidget_OnCurrentActiveSlot_Params
	{
	public:
		class UEquipmentSlotWidget*                                CurrentActiveWidget;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillSlotCooldownData
	 */
	struct UGameSkillSlotWidget_UpdateSkillSlotCooldownData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SkillTag;                                                // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDuration;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RemainDuration;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillDescData
	 */
	struct UGameSkillSlotWidget_UpdateSkillDescData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSkillData                                          NewSkillData;                                            // 0x0004(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillData
	 */
	struct UGameSkillSlotWidget_UpdateSkillData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSkillData                                          NewSkillData;                                            // 0x0004(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillCooldownDuration
	 */
	struct UGameSkillSlotWidget_UpdateSkillCooldownDuration_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillArtData
	 */
	struct UGameSkillSlotWidget_UpdateSkillArtData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSkillData                                          NewSkillData;                                            // 0x0004(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlotVisible
	 */
	struct UGameSkillSlotWidget_OnUpdateSkillSlotVisible_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsVisibility;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlot
	 */
	struct UGameSkillSlotWidget_OnUpdateSkillSlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SkillTag;                                                // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillDesc
	 */
	struct UGameSkillSlotWidget_OnUpdateSkillDesc_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L3L7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                SkillName;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                SkillDesc;                                               // 0x0020(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillData
	 */
	struct UGameSkillSlotWidget_OnUpdateSkillData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSkillData                                          InSkillData;                                             // 0x0004(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FDesignDataSkill                                    InDesignDataSkill;                                       // 0x0030(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillArtData
	 */
	struct UGameSkillSlotWidget_OnUpdateSkillArtData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9V25[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArtDataSkill*                                       SkillArtData;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnSkillFailedSystemMessage
	 */
	struct UGameSkillSlotWidget_OnSkillFailedSystemMessage_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnSkillCooldownEnd
	 */
	struct UGameSkillSlotWidget_OnSkillCooldownEnd_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillDesc
	 */
	struct UGameSkillSlotWidget_OnResetSkillDesc_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillCooldownUI
	 */
	struct UGameSkillSlotWidget_OnResetSkillCooldownUI_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.OnLinkedPawnDestroyed
	 */
	struct UGameSkillSlotWidget_OnLinkedPawnDestroyed_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownPercent
	 */
	struct UGameSkillSlotWidget_GetSkillSlotCooldownPercent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownDuration
	 */
	struct UGameSkillSlotWidget_GetSkillSlotCooldownDuration_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSkillSlotWidget.CheckSkillCooldownComplete
	 */
	struct UGameSkillSlotWidget_CheckSkillCooldownComplete_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingStart
	 */
	struct UGameSpellCastingBarWidget_OnSpellChannelingStart_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingEnd
	 */
	struct UGameSpellCastingBarWidget_OnSpellChannelingEnd_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastSucceed
	 */
	struct UGameSpellCastingBarWidget_OnSpellCastSucceed_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastStart
	 */
	struct UGameSpellCastingBarWidget_OnSpellCastStart_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastEnd
	 */
	struct UGameSpellCastingBarWidget_OnSpellCastEnd_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellCurrentSlotWidget.SetSpellData
	 */
	struct UGameSpellCurrentSlotWidget_SetSpellData_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VAZC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSpellDataChanged
	 */
	struct UGameSpellCurrentSlotWidget_OnSpellDataChanged_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7J20[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSetSpellArtData
	 */
	struct UGameSpellCurrentSlotWidget_OnSetSpellArtData_Params
	{
	public:
		class UArtDataSpell*                                       InArtSpellData;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectPopup
	 */
	struct UGameSpellSelectGroupWidget_OnSpellSelectPopup_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectClose
	 */
	struct UGameSpellSelectGroupWidget_OnSpellSelectClose_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellSelectGroupWidget.OnSelectedSpellIndexChanged
	 */
	struct UGameSpellSelectGroupWidget_OnSelectedSpellIndexChanged_Params
	{	};

	/**
	 * Function DungeonCrawler.GameSpellSelectGroupWidget.OnCurrentSpellSlotChanged
	 */
	struct UGameSpellSelectGroupWidget_OnCurrentSpellSlotChanged_Params
	{
	public:
		class UGameSpellSlotWidget*                                InSelectedSlot;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellSlotWidget.SelectionChange
	 */
	struct UGameSpellSlotWidget_SelectionChange_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameSpellSlotWidget.OnSelectionChanged
	 */
	struct UGameSpellSlotWidget_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.StartTimer
	 */
	struct UTimerWidgetBase_StartTimer_Params
	{
	public:
		float                                                      InEndServerWorldTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.OnProgress
	 */
	struct UTimerWidgetBase_OnProgress_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.OnLeftSecond
	 */
	struct UTimerWidgetBase_OnLeftSecond_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.OnLeftMinute
	 */
	struct UTimerWidgetBase_OnLeftMinute_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.OnLeftHour
	 */
	struct UTimerWidgetBase_OnLeftHour_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TimerWidgetBase.OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint
	 */
	struct UTimerWidgetBase_OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint_Params
	{
	public:
		struct FMsgAccountLinkAccountDataReplicationNotify         InMsg;                                                   // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerLimit
	 */
	struct UGameTavernStartTimerWidget_OnPlayerLimit_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerCount
	 */
	struct UGameTavernStartTimerWidget_OnPlayerCount_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.UnbindMsgAll
	 */
	struct UGameTestComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.UnbindMsg
	 */
	struct UGameTestComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.TerminateBase
	 */
	struct UGameTestComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassResponse
	 */
	struct UGameTestComponent_MsgGameTestChangePlayerCharacterClassResponse_Params
	{
	public:
		struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassResponse InMsg;                                                   // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassRequest
	 */
	struct UGameTestComponent_MsgGameTestChangePlayerCharacterClassRequest_Params
	{
	public:
		struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassRequest InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveResponse
	 */
	struct UGameTestComponent_ClientMsgClassSpellSlotMoveResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellSlotMoveResponse InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveRequest
	 */
	struct UGameTestComponent_ClientMsgClassSpellSlotMoveRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellSlotMoveRequest InMsg;                                                   // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeResponse
	 */
	struct UGameTestComponent_ClientMsgClassSpellSequenceChangeResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeResponse InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeRequest
	 */
	struct UGameTestComponent_ClientMsgClassSpellSequenceChangeRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeRequest InMsg;                                                   // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListResponse
	 */
	struct UGameTestComponent_ClientMsgClassSpellListResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellListResponse    InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListRequest
	 */
	struct UGameTestComponent_ClientMsgClassSpellListRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSpellListRequest     InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListResponse
	 */
	struct UGameTestComponent_ClientMsgClassSkillListResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSkillListResponse    InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListRequest
	 */
	struct UGameTestComponent_ClientMsgClassSkillListRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassSkillListRequest     InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListResponse
	 */
	struct UGameTestComponent_ClientMsgClassPerkListResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassPerkListResponse     InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListRequest
	 */
	struct UGameTestComponent_ClientMsgClassPerkListRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassPerkListRequest      InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoResponse
	 */
	struct UGameTestComponent_ClientMsgClassLevelInfoResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassLevelInfoResponse    InMsg;                                                   // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoRequest
	 */
	struct UGameTestComponent_ClientMsgClassLevelInfoRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassLevelInfoRequest     InMsg;                                                   // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveResponse
	 */
	struct UGameTestComponent_ClientMsgClassItemMoveResponse_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassItemMoveResponse     InMsg;                                                   // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveRequest
	 */
	struct UGameTestComponent_ClientMsgClassItemMoveRequest_Params
	{
	public:
		struct FDungeonCrawler_FClientMsgClassItemMoveRequest      InMsg;                                                   // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GameTestComponent.BroadcastMsgBlueprint
	 */
	struct UGameTestComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.ReceivedEvent
	 */
	struct UGA_ActivateItemBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.OtherHandIAStarted
	 */
	struct UGA_ActivateItemBase_OtherHandIAStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.OtherHandIACompleted
	 */
	struct UGA_ActivateItemBase_OtherHandIACompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.OnCompleted
	 */
	struct UGA_ActivateItemBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.OnCancelled
	 */
	struct UGA_ActivateItemBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.EventReceived
	 */
	struct UGA_ActivateItemBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ActivateItemBase.AbilityActivated
	 */
	struct UGA_ActivateItemBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_AuraBase.OnAuraOverlapEnd
	 */
	struct UGA_AuraBase_OnAuraOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBegin
	 */
	struct UGA_AuraBase_OnAuraOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9UN5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapEnd
	 */
	struct UGA_AuraBase_OnAntiAuraOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapBegin
	 */
	struct UGA_AuraBase_OnAntiAuraOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NPCQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.ReceivedEvent
	 */
	struct UGA_RangedAttackBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.ProjectileFired
	 */
	struct UGA_RangedAttackBase_ProjectileFired_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.OnCompleted
	 */
	struct UGA_RangedAttackBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.OnCancelled
	 */
	struct UGA_RangedAttackBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.MultiFireProjectiles
	 */
	struct UGA_RangedAttackBase_MultiFireProjectiles_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.GetProjectileActorClass
	 */
	struct UGA_RangedAttackBase_GetProjectileActorClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightUnblocked
	 */
	struct UGA_RangedAttackBase_FireSocketSightUnblocked_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightBlocked
	 */
	struct UGA_RangedAttackBase_FireSocketSightBlocked_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.FireProjectile
	 */
	struct UGA_RangedAttackBase_FireProjectile_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.EventReceived
	 */
	struct UGA_RangedAttackBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.CreateProjectiles
	 */
	struct UGA_RangedAttackBase_CreateProjectiles_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N4DG[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00C0(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.CreatedProjectile
	 */
	struct UGA_RangedAttackBase_CreatedProjectile_Params
	{
	public:
		class AProjectileActor*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x00F0(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.CheckedCrossHairRecoveryForThrowingItems
	 */
	struct UGA_RangedAttackBase_CheckedCrossHairRecoveryForThrowingItems_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.ActivateCrossHairPullAnimation
	 */
	struct UGA_RangedAttackBase_ActivateCrossHairPullAnimation_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_RangedAttackBase.AbilityActivated
	 */
	struct UGA_RangedAttackBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChargedRangedAttackBase.SendPlayShootCrossHairNotify
	 */
	struct UGA_ChargedRangedAttackBase_SendPlayShootCrossHairNotify_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ChargedRangedAttackBase.OnMutiShotSkill
	 */
	struct UGA_ChargedRangedAttackBase_OnMutiShotSkill_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionStarted
	 */
	struct UGA_ChargedRangedAttackBase_InputActionStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionCompleted
	 */
	struct UGA_ChargedRangedAttackBase_InputActionCompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChargedRangedAttackBase.CreateMultiShotProjectiles
	 */
	struct UGA_ChargedRangedAttackBase_CreateMultiShotProjectiles_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TWRO[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00C0(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_BowQuickShotBase.InputActionStarted
	 */
	struct UGA_BowQuickShotBase_InputActionStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_BowQuickShotBase.InputActionCompleted
	 */
	struct UGA_BowQuickShotBase_InputActionCompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChangeIdle.OnCompleted
	 */
	struct UGA_ChangeIdle_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChangeIdle.OnBlendOut
	 */
	struct UGA_ChangeIdle_OnBlendOut_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ChangeIdle.AbilityActivated
	 */
	struct UGA_ChangeIdle_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_CharacterJump.OnMovementModeChange
	 */
	struct UGA_CharacterJump_OnMovementModeChange_Params
	{
	public:
		EMovementMode                                              MovementMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_CharacterJump.EventReceived
	 */
	struct UGA_CharacterJump_EventReceived_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Drop.OnEndSync
	 */
	struct UGA_Drop_OnEndSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Equip.OnTaskCompleted
	 */
	struct UGA_Equip_OnTaskCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Equip.OnGameplayEventReceived
	 */
	struct UGA_Equip_OnGameplayEventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Equip.OnCancelled
	 */
	struct UGA_Equip_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnVelocityChange
	 */
	struct UGA_Interact_OnVelocityChange_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnStartSync
	 */
	struct UGA_Interact_OnStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnStartDelayFinished
	 */
	struct UGA_Interact_OnStartDelayFinished_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnSkillCheckSucceed
	 */
	struct UGA_Interact_OnSkillCheckSucceed_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnSkillCheckPerfectSucceed
	 */
	struct UGA_Interact_OnSkillCheckPerfectSucceed_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnSkillCheckFinished
	 */
	struct UGA_Interact_OnSkillCheckFinished_Params
	{
	public:
		ESkillCheckResult                                          Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnSkillCheckFailed
	 */
	struct UGA_Interact_OnSkillCheckFailed_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnSkillCheck
	 */
	struct UGA_Interact_OnSkillCheck_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnFinish
	 */
	struct UGA_Interact_OnFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnEndSync
	 */
	struct UGA_Interact_OnEndSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnCancelled
	 */
	struct UGA_Interact_OnCancelled_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.OnAimDirectionChange
	 */
	struct UGA_Interact_OnAimDirectionChange_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_Interact.IsValidData
	 */
	struct UGA_Interact_IsValidData_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_Interact.EventReceived
	 */
	struct UGA_Interact_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_StoppablePassiveBase.OnStateTagRemoved
	 */
	struct UGA_StoppablePassiveBase_OnStateTagRemoved_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_StoppablePassiveBase.OnStateTagAdded
	 */
	struct UGA_StoppablePassiveBase_OnStateTagAdded_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStop
	 */
	struct UGA_StoppablePassiveBase_OnPassiveStop_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStart
	 */
	struct UGA_StoppablePassiveBase_OnPassiveStart_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_InteractPassive.RefreshInteractionData
	 */
	struct UGA_InteractPassive_RefreshInteractionData_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_InteractPassive.ReceivedEvent
	 */
	struct UGA_InteractPassive_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_InteractPassive.OnTargetGameplayTagChange
	 */
	struct UGA_InteractPassive_OnTargetGameplayTagChange_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_InteractPassive.OnLostInteractableTarget
	 */
	struct UGA_InteractPassive_OnLostInteractableTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_InteractPassive.OnFoundNewInteractableTarget
	 */
	struct UGA_InteractPassive_OnFoundNewInteractableTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemActivateBase.ReceivedEvent
	 */
	struct UGA_ItemActivateBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemActivateBase.EventReceived
	 */
	struct UGA_ItemActivateBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemActivateBase.Deactivated
	 */
	struct UGA_ItemActivateBase_Deactivated_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemActivateBase.Activated
	 */
	struct UGA_ItemActivateBase_Activated_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnStartSync
	 */
	struct UGA_ItemConsumeBase_OnStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnFinish
	 */
	struct UGA_ItemConsumeBase_OnFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnEndSync
	 */
	struct UGA_ItemConsumeBase_OnEndSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeStartEventReceived
	 */
	struct UGA_ItemConsumeBase_OnConsumeStartEventReceived_Params
	{
	public:
		float                                                      ConsumeDuration;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeMontageCompleted
	 */
	struct UGA_ItemConsumeBase_OnConsumeMontageCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeEndEventReceived
	 */
	struct UGA_ItemConsumeBase_OnConsumeEndEventReceived_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.EventReceived
	 */
	struct UGA_ItemConsumeBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.ConsumeEventReceived
	 */
	struct UGA_ItemConsumeBase_ConsumeEventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ItemConsumeBase.AbilityActivated
	 */
	struct UGA_ItemConsumeBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ServerTargetDataReceived
	 */
	struct UGA_MeleeAttackBase_ServerTargetDataReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ServerReceivedTargetData
	 */
	struct UGA_MeleeAttackBase_ServerReceivedTargetData_Params
	{
	public:
		struct FGameplayTag                                        InEffectTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ReceivedTargetData
	 */
	struct UGA_MeleeAttackBase_ReceivedTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ReceivedEvent
	 */
	struct UGA_MeleeAttackBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnStuckFinish
	 */
	struct UGA_MeleeAttackBase_OnStuckFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnStuck
	 */
	struct UGA_MeleeAttackBase_OnStuck_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnInterruptFinish
	 */
	struct UGA_MeleeAttackBase_OnInterruptFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnInterrupted
	 */
	struct UGA_MeleeAttackBase_OnInterrupted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnHitFinish
	 */
	struct UGA_MeleeAttackBase_OnHitFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnHit
	 */
	struct UGA_MeleeAttackBase_OnHit_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnCompleted
	 */
	struct UGA_MeleeAttackBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnCancelled
	 */
	struct UGA_MeleeAttackBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.OnBlendOut
	 */
	struct UGA_MeleeAttackBase_OnBlendOut_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.MontageJumpToNextSection
	 */
	struct UGA_MeleeAttackBase_MontageJumpToNextSection_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.EventReceived
	 */
	struct UGA_MeleeAttackBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ClientTargetDataReceived
	 */
	struct UGA_MeleeAttackBase_ClientTargetDataReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ClientReceivedTargetData
	 */
	struct UGA_MeleeAttackBase_ClientReceivedTargetData_Params
	{
	public:
		struct FGameplayTag                                        InEffectTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ChangeToDefaultCrossHair
	 */
	struct UGA_MeleeAttackBase_ChangeToDefaultCrossHair_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.ActivateCrossHairAction
	 */
	struct UGA_MeleeAttackBase_ActivateCrossHairAction_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_MeleeAttackBase.AbilityActivated
	 */
	struct UGA_MeleeAttackBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MultiShotBase.InputActionStarted
	 */
	struct UGA_MultiShotBase_InputActionStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_MultiShotBase.InputActionCompleted
	 */
	struct UGA_MultiShotBase_InputActionCompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PaviseInstall.ReceivedEvent
	 */
	struct UGA_PaviseInstall_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PaviseInstall.OnInterrupted
	 */
	struct UGA_PaviseInstall_OnInterrupted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PaviseInstall.OnCompleted
	 */
	struct UGA_PaviseInstall_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PaviseInstall.EventReceived
	 */
	struct UGA_PaviseInstall_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PaviseInstall.AbilityActivated
	 */
	struct UGA_PaviseInstall_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PickUp.OnStartSync
	 */
	struct UGA_PickUp_OnStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PickUp.OnPickedUp
	 */
	struct UGA_PickUp_OnPickedUp_Params
	{
	public:
		class AActor*                                              ItemHolderToPickUp;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldDestroy;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIAStarted
	 */
	struct UGA_PlayerCharMeleeAttackBase_OtherHandIAStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIACompleted
	 */
	struct UGA_PlayerCharMeleeAttackBase_OtherHandIACompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIAStarted
	 */
	struct UGA_PlayerCharMeleeAttackBase_ComboIAStarted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIACompleted
	 */
	struct UGA_PlayerCharMeleeAttackBase_ComboIACompleted_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillBase.AbilityActivated
	 */
	struct UGA_PlayerSkillBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.ReceivedEvent
	 */
	struct UGA_PlayerSkillCastBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnVelocityChange_Channeling
	 */
	struct UGA_PlayerSkillCastBase_OnVelocityChange_Channeling_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnVelocityChange_Casting
	 */
	struct UGA_PlayerSkillCastBase_OnVelocityChange_Casting_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnSkillActived_Server
	 */
	struct UGA_PlayerSkillCastBase_OnSkillActived_Server_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        CooldownTag;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnSkillActived_Client
	 */
	struct UGA_PlayerSkillCastBase_OnSkillActived_Client_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        CooldownTag;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnSkillActive
	 */
	struct UGA_PlayerSkillCastBase_OnSkillActive_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnInterrupted
	 */
	struct UGA_PlayerSkillCastBase_OnInterrupted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCompleted
	 */
	struct UGA_PlayerSkillCastBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingStartTrigger
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingStartTrigger_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingStartSync
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingReadySync
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingReadySync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingFinishSync
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingFinishSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingFinish
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingActivate
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingActivate_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              CueParams;                                               // 0x00B0(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnChannelingAction
	 */
	struct UGA_PlayerSkillCastBase_OnChannelingAction_Params
	{
	public:
		int32_t                                                    ActionCount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartTrigger
	 */
	struct UGA_PlayerSkillCastBase_OnCastingStartTrigger_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartSync
	 */
	struct UGA_PlayerSkillCastBase_OnCastingStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinishSync
	 */
	struct UGA_PlayerSkillCastBase_OnCastingFinishSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinish
	 */
	struct UGA_PlayerSkillCastBase_OnCastingFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnCancelled
	 */
	struct UGA_PlayerSkillCastBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.OnBlendOut
	 */
	struct UGA_PlayerSkillCastBase_OnBlendOut_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.IsVisibleWeapon
	 */
	struct UGA_PlayerSkillCastBase_IsVisibleWeapon_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.EventReceived
	 */
	struct UGA_PlayerSkillCastBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.EndAbilityWhenSkillEvent
	 */
	struct UGA_PlayerSkillCastBase_EndAbilityWhenSkillEvent_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.CheckedApplyCooldownTag
	 */
	struct UGA_PlayerSkillCastBase_CheckedApplyCooldownTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillCastBase.Activated_CooldownAfter_Client
	 */
	struct UGA_PlayerSkillCastBase_Activated_CooldownAfter_Client_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        CooldownTag;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CooldownDuration;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillRouterBase.SendSystemMessage
	 */
	struct UGA_PlayerSkillRouterBase_SendSystemMessage_Params
	{
	public:
		class FText                                                SystemMessage;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillRouterBase.OnSystemMessage
	 */
	struct UGA_PlayerSkillRouterBase_OnSystemMessage_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSkillRouterBase.OnRoutedAbilityEnded
	 */
	struct UGA_PlayerSkillRouterBase_OnRoutedAbilityEnded_Params
	{
	public:
		struct FAbilityEndedData                                   AbilityEndedData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.SpellFireEvent
	 */
	struct UGA_PlayerSpellCastBase_SpellFireEvent_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.ServerReceivedTargetData
	 */
	struct UGA_PlayerSpellCastBase_ServerReceivedTargetData_Params
	{
	public:
		struct FGameplayTag                                        InEffectTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.SendActivateSpellCrossHairNotify
	 */
	struct UGA_PlayerSpellCastBase_SendActivateSpellCrossHairNotify_Params
	{
	public:
		bool                                                       IsActivate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedTargetData
	 */
	struct UGA_PlayerSpellCastBase_ReceivedTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedEvent
	 */
	struct UGA_PlayerSpellCastBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnVelocityChange
	 */
	struct UGA_PlayerSpellCastBase_OnVelocityChange_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuckFinish
	 */
	struct UGA_PlayerSpellCastBase_OnStuckFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuck
	 */
	struct UGA_PlayerSpellCastBase_OnStuck_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnStartSync
	 */
	struct UGA_PlayerSpellCastBase_OnStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnRelease
	 */
	struct UGA_PlayerSpellCastBase_OnRelease_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterruptFinish
	 */
	struct UGA_PlayerSpellCastBase_OnInterruptFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterrupted
	 */
	struct UGA_PlayerSpellCastBase_OnInterrupted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnFire
	 */
	struct UGA_PlayerSpellCastBase_OnFire_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinishSync
	 */
	struct UGA_PlayerSpellCastBase_OnFinishSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinish
	 */
	struct UGA_PlayerSpellCastBase_OnFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnCompleted
	 */
	struct UGA_PlayerSpellCastBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingTriggerSync
	 */
	struct UGA_PlayerSpellCastBase_OnChannelingTriggerSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinishSync
	 */
	struct UGA_PlayerSpellCastBase_OnChannelingFinishSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinish
	 */
	struct UGA_PlayerSpellCastBase_OnChannelingFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingAction
	 */
	struct UGA_PlayerSpellCastBase_OnChannelingAction_Params
	{
	public:
		int32_t                                                    ActionCounter;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnCastTriggerSync
	 */
	struct UGA_PlayerSpellCastBase_OnCastTriggerSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnCancelled
	 */
	struct UGA_PlayerSpellCastBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.OnBlendOut
	 */
	struct UGA_PlayerSpellCastBase_OnBlendOut_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.EventReceived
	 */
	struct UGA_PlayerSpellCastBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.ClientReceivedTargetData
	 */
	struct UGA_PlayerSpellCastBase_ClientReceivedTargetData_Params
	{
	public:
		struct FGameplayTag                                        InEffectTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InChannelTag;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    InData;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.CastingFinishEvent
	 */
	struct UGA_PlayerSpellCastBase_CastingFinishEvent_Params
	{
	public:
		struct FDesignDataSpell                                    CurentDesignSpellData;                                   // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayerSpellCastBase.AbilityActivated
	 */
	struct UGA_PlayerSpellCastBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.ReceivedEvent
	 */
	struct UGA_PlayMontageAndWaitForEvent_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCompleted
	 */
	struct UGA_PlayMontageAndWaitForEvent_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCancelled
	 */
	struct UGA_PlayMontageAndWaitForEvent_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.EventReceived
	 */
	struct UGA_PlayMontageAndWaitForEvent_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.AbilityActivated
	 */
	struct UGA_PlayMontageAndWaitForEvent_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ProjectileCollision.TargetDataReceived
	 */
	struct UGA_ProjectileCollision_TargetDataReceived_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ProjectileCollision.ReceivedTargetData
	 */
	struct UGA_ProjectileCollision_ReceivedTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.ReceivedEvent
	 */
	struct UGA_ReloadAmmoBase_ReceivedEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.OnReloadSucceed
	 */
	struct UGA_ReloadAmmoBase_OnReloadSucceed_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.OnReload
	 */
	struct UGA_ReloadAmmoBase_OnReload_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.OnCompleted
	 */
	struct UGA_ReloadAmmoBase_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.OnCancelled
	 */
	struct UGA_ReloadAmmoBase_OnCancelled_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.EventReceived
	 */
	struct UGA_ReloadAmmoBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.CancelReloadByCrossHairAim
	 */
	struct UGA_ReloadAmmoBase_CancelReloadByCrossHairAim_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.ActivateCrossHairPullAnimationByCrossbow
	 */
	struct UGA_ReloadAmmoBase_ActivateCrossHairPullAnimationByCrossbow_Params
	{
	public:
		float                                                      ActionSpeed;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReloadAmmoBase.AbilityActivated
	 */
	struct UGA_ReloadAmmoBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReversibleChangeIdle.OnCompleted
	 */
	struct UGA_ReversibleChangeIdle_OnCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReversibleChangeIdle.OnBlendOut
	 */
	struct UGA_ReversibleChangeIdle_OnBlendOut_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_ReversibleChangeIdle.AbilityActivated
	 */
	struct UGA_ReversibleChangeIdle_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.IsSocketSightBlocked
	 */
	struct UGA_SpellBase_IsSocketSightBlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.GetRange
	 */
	struct UGA_SpellBase_GetRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.GetAimRadius
	 */
	struct UGA_SpellBase_GetAimRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.FireProjectile
	 */
	struct UGA_SpellBase_FireProjectile_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UClass*                                              ProjectileActorClass;                                    // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.CastToTarget
	 */
	struct UGA_SpellBase_CastToTarget_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       IsEndAbility;                                            // 0x00E8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UseExecuteGameplayCue;                                   // 0x00E9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.CastToSelf
	 */
	struct UGA_SpellBase_CastToSelf_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.CastFinished
	 */
	struct UGA_SpellBase_CastFinished_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_SpellBase.AbilityActivated
	 */
	struct UGA_SpellBase_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bIsSocketSightBlocked;                                   // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_WearBase.OnStartSync
	 */
	struct UGA_WearBase_OnStartSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_WearBase.OnLootTargetRemoved
	 */
	struct UGA_WearBase_OnLootTargetRemoved_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_WearBase.OnFinish
	 */
	struct UGA_WearBase_OnFinish_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_WearBase.OnEndSync
	 */
	struct UGA_WearBase_OnEndSync_Params
	{	};

	/**
	 * Function DungeonCrawler.GA_WearBase.OnChangingMontageCompleted
	 */
	struct UGA_WearBase_OnChangingMontageCompleted_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GA_WearBase.EventReceived
	 */
	struct UGA_WearBase_EventReceived_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGlitterComponent.UnbindMsgAll
	 */
	struct UDCGlitterComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGlitterComponent.UnbindMsg
	 */
	struct UDCGlitterComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCGlitterComponent.TerminateBase
	 */
	struct UDCGlitterComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.DCGlitterComponent.BroadcastMsgBlueprint
	 */
	struct UDCGlitterComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.GlobalData.GetAttackTypeText
	 */
	struct UGlobalData_GetAttackTypeText_Params
	{
	public:
		struct FGameplayTag                                        AttackType;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MonsterSpawnableInterface.Spawn
	 */
	struct UMonsterSpawnableInterface_Spawn_Params
	{
	public:
		class UClass*                                              Monster;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADCMonsterBase*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.UnbindMsgAll
	 */
	struct UImpactableComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.UnbindMsg
	 */
	struct UImpactableComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.TerminateBase
	 */
	struct UImpactableComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.SetImpactableQuery
	 */
	struct UImpactableComponent_SetImpactableQuery_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             TagQueryDatas;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.GetImpactableTagQueryArray
	 */
	struct UImpactableComponent_GetImpactableTagQueryArray_Params
	{
	public:
		TArray<class UTagQueryData*>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ImpactableComponent.BroadcastMsgBlueprint
	 */
	struct UImpactableComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.IMUtilBlueprintLibrary.GetServerWorldTimeSeconds
	 */
	struct UIMUtilBlueprintLibrary_GetServerWorldTimeSeconds_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.IMUtilBlueprintLibrary.GetProjectVersion
	 */
	struct UIMUtilBlueprintLibrary_GetProjectVersion_Params
	{
	public:
		class FString                                              OutVersion;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.UnregisterInteracter
	 */
	struct UInteractableTargetComponent_UnregisterInteracter_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.UnbindMsgAll
	 */
	struct UInteractableTargetComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.UnbindMsg
	 */
	struct UInteractableTargetComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.TerminateBase
	 */
	struct UInteractableTargetComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.ShouldCancelOthersWhenInteractSucceed
	 */
	struct UInteractableTargetComponent_ShouldCancelOthersWhenInteractSucceed_Params
	{
	public:
		struct FGameplayTag                                        StateTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.SetInteractionData
	 */
	struct UInteractableTargetComponent_SetInteractionData_Params
	{
	public:
		struct FDesignDataPropsInteract                            InteractionData;                                         // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.RegisterInteracter
	 */
	struct UInteractableTargetComponent_RegisterInteracter_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.IsDetectable
	 */
	struct UInteractableTargetComponent_IsDetectable_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.InteractSucceed
	 */
	struct UInteractableTargetComponent_InteractSucceed_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        StateTag;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.InteractFailed
	 */
	struct UInteractableTargetComponent_InteractFailed_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.GetStateTag
	 */
	struct UInteractableTargetComponent_GetStateTag_Params
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.GetInteractTargetData
	 */
	struct UInteractableTargetComponent_GetInteractTargetData_Params
	{
	public:
		struct FInteractTargetData                                 ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.GetInteractableDataByStateMap
	 */
	struct UInteractableTargetComponent_GetInteractableDataByStateMap_Params
	{
	public:
		TMap<struct FGameplayTag, struct FInteractionData>         ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.GetInteractability
	 */
	struct UInteractableTargetComponent_GetInteractability_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInteractabilityType                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.GetData
	 */
	struct UInteractableTargetComponent_GetData_Params
	{
	public:
		struct FGameplayTag                                        StateTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInteractionData                                    ReturnValue;                                             // 0x0008(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.CanInteract
	 */
	struct UInteractableTargetComponent_CanInteract_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.CancelAllInteractions
	 */
	struct UInteractableTargetComponent_CancelAllInteractions_Params
	{	};

	/**
	 * Function DungeonCrawler.InteractableTargetComponent.BroadcastMsgBlueprint
	 */
	struct UInteractableTargetComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryLootingWidget.RequestInventoryWidgetVisible
	 */
	struct UInventoryLootingWidget_RequestInventoryWidgetVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryLootingWidget.OnLootingTargetCountChanged
	 */
	struct UInventoryLootingWidget_OnLootingTargetCountChanged_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryLootingWidget.OnLootingPlayerSet
	 */
	struct UInventoryLootingWidget_OnLootingPlayerSet_Params
	{
	public:
		bool                                                       bSetTargetPlayer;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C44B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                TargetPlayerName;                                        // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryStatusWidget.OnPlayerCharacterName
	 */
	struct UInventoryStatusWidget_OnPlayerCharacterName_Params
	{
	public:
		class FText                                                NewValue;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                OldValue;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InventoryTabWidgetBase.OnClickedInventoryTab
	 */
	struct UInventoryTabWidgetBase_OnClickedInventoryTab_Params
	{	};

	/**
	 * Function DungeonCrawler.InventoryTabWidgetBase.OnChangeActiveState
	 */
	struct UInventoryTabWidgetBase_OnChangeActiveState_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyUserSlotWidget.OnRightClicked
	 */
	struct UInvitePartyUserSlotWidget_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.TryRequestInviteParty
	 */
	struct UInvitePartyWidget_TryRequestInviteParty_Params
	{
	public:
		class UInvitePartyUserSlotWidgetData*                      InInvitePartyUserSlotWidgetData;                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnUserListFindIdClicked
	 */
	struct UInvitePartyWidget_OnUserListFindIdClicked_Params
	{
	public:
		class FText                                                FindId;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnTextChangedFindUserId
	 */
	struct UInvitePartyWidget_OnTextChangedFindUserId_Params
	{
	public:
		class FText                                                FindId;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnRightButtonCkicked
	 */
	struct UInvitePartyWidget_OnRightButtonCkicked_Params
	{	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnPopupSWidgetPartyInviteResult
	 */
	struct UInvitePartyWidget_OnPopupSWidgetPartyInviteResult_Params
	{
	public:
		EPopupResult                                               PopupResult;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4T7K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInvitePartyUserSlot                                TargetUser;                                              // 0x0008(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnPartyPrivacyButtonClicked
	 */
	struct UInvitePartyWidget_OnPartyPrivacyButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnPageNumber
	 */
	struct UInvitePartyWidget_OnPageNumber_Params
	{
	public:
		int32_t                                                    CurrentPage;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPage;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnLocateNumber
	 */
	struct UInvitePartyWidget_OnLocateNumber_Params
	{
	public:
		int32_t                                                    LobbyCount;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DungeonCount;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BlockCount;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnLeftButtonCkicked
	 */
	struct UInvitePartyWidget_OnLeftButtonCkicked_Params
	{	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnInvitePartyUserSlotData
	 */
	struct UInvitePartyWidget_OnInvitePartyUserSlotData_Params
	{
	public:
		struct FInvitePartyUserSlotData                            NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInvitePartyUserSlotData                            OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnClassIconSelected
	 */
	struct UInvitePartyWidget_OnClassIconSelected_Params
	{
	public:
		struct FPrimaryAssetId                                     InCharacterClassId;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.OnButtonShowBlock
	 */
	struct UInvitePartyWidget_OnButtonShowBlock_Params
	{	};

	/**
	 * Function DungeonCrawler.InvitePartyWidget.HandleBackButtonClicked
	 */
	struct UInvitePartyWidget_HandleBackButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.Item.UnbindMsgAll
	 */
	struct UItem_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.UnbindMsg
	 */
	struct UItem_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.TerminateBase
	 */
	struct UItem_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.Item.IsItemWeaponType
	 */
	struct UItem_IsItemWeaponType_Params
	{
	public:
		struct FGameplayTag                                        WeaponType;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.Initialize
	 */
	struct UItem_Initialize_Params
	{
	public:
		struct FItemData                                           Data;                                                    // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemWeaponTypes
	 */
	struct UItem_GetItemWeaponTypes_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemSlotType
	 */
	struct UItem_GetItemSlotType_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemIconTexture
	 */
	struct UItem_GetItemIconTexture_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemHandType
	 */
	struct UItem_GetItemHandType_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemDataWeaponTypeTags
	 */
	struct UItem_GetItemDataWeaponTypeTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemDataUtilityTag
	 */
	struct UItem_GetItemDataUtilityTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemData
	 */
	struct UItem_GetItemData_Params
	{
	public:
		struct FItemData                                           ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemActorClass
	 */
	struct UItem_GetItemActorClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetItemActor
	 */
	struct UItem_GetItemActor_Params
	{
	public:
		class AItemActor*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.GetDesignDataItem
	 */
	struct UItem_GetDesignDataItem_Params
	{
	public:
		struct FDesignDataItem                                     ReturnValue;                                             // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.Item.BroadcastMsgBlueprint
	 */
	struct UItem_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.SetItemData
	 */
	struct AItemActor_SetItemData_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.PreReduceAmmoCount
	 */
	struct AItemActor_PreReduceAmmoCount_Params
	{
	public:
		int32_t                                                    ReduceCount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.OnRep_ItemData
	 */
	struct AItemActor_OnRep_ItemData_Params
	{
	public:
		struct FItemData                                           OldItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.OnAttachmentReplication
	 */
	struct AItemActor_OnAttachmentReplication_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemActor.OnAttachedSheathSocket
	 */
	struct AItemActor_OnAttachedSheathSocket_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemActor.OnAttachedEquipSocket
	 */
	struct AItemActor_OnAttachedEquipSocket_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemActor.ItemDataUpdated
	 */
	struct AItemActor_ItemDataUpdated_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GetSoundData
	 */
	struct AItemActor_GetSoundData_Params
	{
	public:
		class USoundData*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GetItemUtilityTag
	 */
	struct AItemActor_GetItemUtilityTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GetItemTypeTags
	 */
	struct AItemActor_GetItemTypeTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GetItemData
	 */
	struct AItemActor_GetItemData_Params
	{
	public:
		struct FItemData                                           ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GetDesignDataItem
	 */
	struct AItemActor_GetDesignDataItem_Params
	{
	public:
		struct FDesignDataItem                                     ReturnValue;                                             // 0x0000(0x0170)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemActor.GameplayTagUpdated
	 */
	struct AItemActor_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemComponentBase.UnbindMsgAll
	 */
	struct UItemComponentBase_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemComponentBase.UnbindMsg
	 */
	struct UItemComponentBase_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemComponentBase.TerminateBase
	 */
	struct UItemComponentBase_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemComponentBase.BroadcastMsgBlueprint
	 */
	struct UItemComponentBase_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockValueChanged
	 */
	struct UItemCountSelectWidget_OnTextBlockValueChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockCommitted
	 */
	struct UItemCountSelectWidget_OnTextBlockCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.OnSliderValueChanged
	 */
	struct UItemCountSelectWidget_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.OnRemovePopup
	 */
	struct UItemCountSelectWidget_OnRemovePopup_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.OnCreatePopup
	 */
	struct UItemCountSelectWidget_OnCreatePopup_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.HandleRightButtonClicked
	 */
	struct UItemCountSelectWidget_HandleRightButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemCountSelectWidget.HandleLeftButtonClicked
	 */
	struct UItemCountSelectWidget_HandleLeftButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.DCItemDataComponent.OnLoadData_Sound
	 */
	struct UDCItemDataComponent_OnLoadData_Sound_Params
	{
	public:
		class UObject*                                             InLoadedObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemDataComponent.OnLoadData_Bundle
	 */
	struct UDCItemDataComponent_OnLoadData_Bundle_Params
	{
	public:
		class UObject*                                             InLoadedObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.DCItemDataComponent.OnLoadData_Art
	 */
	struct UDCItemDataComponent_OnLoadData_Art_Params
	{
	public:
		class UObject*                                             InLoadedObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemHolderActorBase.SetItemObject
	 */
	struct AItemHolderActorBase_SetItemObject_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemHolderActorBase.OnRep_ItemId
	 */
	struct AItemHolderActorBase_OnRep_ItemId_Params
	{
	public:
		struct FPrimaryAssetId                                     OldItemId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemHolderActorBase.OnRep_ArtDataItem
	 */
	struct AItemHolderActorBase_OnRep_ArtDataItem_Params
	{
	public:
		class UArtDataItem*                                        OldArtDataItem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemMoveValidatorComponent.ServerMoveItem
	 */
	struct UItemMoveValidatorComponent_ServerMoveItem_Params
	{
	public:
		struct FItemData                                           OldItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FItemData>                                   NewItemDataArray;                                        // 0x0090(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwner;                                                // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewOwner;                                                // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasDelay;                                               // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemMoveValidatorComponent.ClientShowMessage
	 */
	struct UItemMoveValidatorComponent_ClientShowMessage_Params
	{
	public:
		class FText                                                OutPutMessage;                                           // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemMoveValidatorComponent.ClientMoveItemEnd
	 */
	struct UItemMoveValidatorComponent_ClientMoveItemEnd_Params
	{
	public:
		bool                                                       bMoveSucceed;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4FP8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FItemData>                                   MovedItemDataArray;                                      // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemMoveValidatorComponent.CheckEnableMoveItem
	 */
	struct UItemMoveValidatorComponent_CheckEnableMoveItem_Params
	{
	public:
		struct FItemData                                           OldItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FItemData>                                   NewItemDataArray;                                        // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              OldOwner;                                                // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewOwner;                                                // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsgAll
	 */
	struct UItemRandomGenerateComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsg
	 */
	struct UItemRandomGenerateComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.TerminateBase
	 */
	struct UItemRandomGenerateComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.GenerateItems
	 */
	struct UItemRandomGenerateComponent_GenerateItems_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.DropItem
	 */
	struct UItemRandomGenerateComponent_DropItem_Params
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.DropAllItems
	 */
	struct UItemRandomGenerateComponent_DropAllItems_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.ClearAllItems
	 */
	struct UItemRandomGenerateComponent_ClearAllItems_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemRandomGenerateComponent.BroadcastMsgBlueprint
	 */
	struct UItemRandomGenerateComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemRichTextBlockDecorator.GetItemTextBlockStyle
	 */
	struct UItemRichTextBlockDecorator_GetItemTextBlockStyle_Params
	{
	public:
		struct FGameplayTag                                        InRarityType;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_10PC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTextBlockStyle                                     ReturnValue;                                             // 0x0010(0x0340)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemTooltipRequirementWidget.OnChangedRequirementStatus
	 */
	struct UItemTooltipRequirementWidget_OnChangedRequirementStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemTooltipWidget.SetItemData
	 */
	struct UItemTooltipWidget_SetItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemTooltipWidget.OnRefreshItemName
	 */
	struct UItemTooltipWidget_OnRefreshItemName_Params
	{	};

	/**
	 * Function DungeonCrawler.ItemTooltipWidget.OnItemData
	 */
	struct UItemTooltipWidget_OnItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FItemData                                           OldItemData;                                             // 0x0090(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ItemWeaponAnimInstanceBase.OnItemDataUpdated
	 */
	struct UItemWeaponAnimInstanceBase_OnItemDataUpdated_Params
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardClassIconWidget.OnClickedClassIconButton
	 */
	struct ULeaderBoardClassIconWidget_OnClickedClassIconButton_Params
	{	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordListWidget.OnRankData
	 */
	struct ULeaderBoardRankRecordListWidget_OnRankData_Params
	{
	public:
		struct FRankData                                           NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRankData                                           OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordMineWidget.OnRankRecordMineData
	 */
	struct ULeaderBoardRankRecordMineWidget_OnRankRecordMineData_Params
	{
	public:
		struct FRankRecord                                         NewValue;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRankRecord                                         OldValue;                                                // 0x0050(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordMineWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
	 */
	struct ULeaderBoardRankRecordMineWidget_OnFMsgWidgetStreamingModeNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetStreamingModeNotify                       InMsg;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordWidget.OnRankRecordData
	 */
	struct ULeaderBoardRankRecordWidget_OnRankRecordData_Params
	{
	public:
		struct FRankRecord                                         NewValue;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRankRecord                                         OldValue;                                                // 0x0050(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordWidget.OnMineRankRecordData
	 */
	struct ULeaderBoardRankRecordWidget_OnMineRankRecordData_Params
	{
	public:
		struct FRankRecord                                         MineValue;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       IsMine;                                                  // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LeaderBoardRankRecordWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
	 */
	struct ULeaderBoardRankRecordWidget_OnFMsgWidgetStreamingModeNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetStreamingModeNotify                       InMsg;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LobbyGroupMerchantWidget.OnBackButtonClicked
	 */
	struct ULobbyGroupMerchantWidget_OnBackButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnReadRulesButtonClicked
	 */
	struct ULobbyGroupTradeChannelWidget_OnReadRulesButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnLeaveChannelButtonClicked
	 */
	struct ULobbyGroupTradeChannelWidget_OnLeaveChannelButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LobbyGroupTradingWidget.OnReadRulesButtonClicked
	 */
	struct ULobbyGroupTradingWidget_OnReadRulesButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LobbyGroupTradingWidget.OnLeaveChannelButtonClicked
	 */
	struct ULobbyGroupTradingWidget_OnLeaveChannelButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LobbyTopMenuWidget.OnPlayPartyReadyStateChanged
	 */
	struct ULobbyTopMenuWidget_OnPlayPartyReadyStateChanged_Params
	{
	public:
		bool                                                       bMine;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReady;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LobbyTopMenuWidget.OnMatchingStateChanged
	 */
	struct ULobbyTopMenuWidget_OnMatchingStateChanged_Params
	{
	public:
		bool                                                       bMatching;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LobbyWidget.OnPopupSWidgetInvitePartyAnswerResponse
	 */
	struct ULobbyWidget_OnPopupSWidgetInvitePartyAnswerResponse_Params
	{
	public:
		EPopupResult                                               PopupResult;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WPD2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnAccountId;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LobbyWidget.OnPopupSWidgetInvitePartyAnswerRequest
	 */
	struct ULobbyWidget_OnPopupSWidgetInvitePartyAnswerRequest_Params
	{
	public:
		class UPopupDataBase*                                      PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FClientMsgInvitePartyNotifyBody                     InvitePartyBody;                                         // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LobbyWidget.OnLobbySystemMessage
	 */
	struct ULobbyWidget_OnLobbySystemMessage_Params
	{
	public:
		class FText                                                AnnounceText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LoginWidget.OnTextChangedPassWord
	 */
	struct ULoginWidget_OnTextChangedPassWord_Params
	{
	public:
		class FText                                                InPassWord;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LoginWidget.OnTextChangedLoginId
	 */
	struct ULoginWidget_OnTextChangedLoginId_Params
	{
	public:
		class FText                                                InLoginId;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LoginWidget.OnSelectionChanged
	 */
	struct ULoginWidget_OnSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LoginWidget.OnLoginButtonClicked
	 */
	struct ULoginWidget_OnLoginButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.LoginWidget.OnLogin
	 */
	struct ULoginWidget_OnLogin_Params
	{	};

	/**
	 * Function DungeonCrawler.LootComponent.ServerRemoveLootTarget
	 */
	struct ULootComponent_ServerRemoveLootTarget_Params
	{
	public:
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FItemData>                                   InContainingItems;                                       // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LootComponent.ServerClearLootingTargetContainingItems
	 */
	struct ULootComponent_ServerClearLootingTargetContainingItems_Params
	{	};

	/**
	 * Function DungeonCrawler.LootComponent.OnRep_LootTargetActor
	 */
	struct ULootComponent_OnRep_LootTargetActor_Params
	{
	public:
		class AActor*                                              OldLootTargetActor;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LootComponent.IsLootTargetPlayer
	 */
	struct ULootComponent_IsLootTargetPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.LootComponent.GetLootTargetActor
	 */
	struct ULootComponent_GetLootTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.UpdateMerchantRemainTime
	 */
	struct UMerchantDealTableWidget_UpdateMerchantRemainTime_Params
	{	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnSetMerchantScript
	 */
	struct UMerchantDealTableWidget_OnSetMerchantScript_Params
	{
	public:
		class FText                                                InScript;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnSetMerchantRemainTime
	 */
	struct UMerchantDealTableWidget_OnSetMerchantRemainTime_Params
	{
	public:
		struct FTimespan                                           RemainTime;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnSetMerchantPortrait
	 */
	struct UMerchantDealTableWidget_OnSetMerchantPortrait_Params
	{
	public:
		class UTexture2D*                                          Portrait;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnSetMerchantName
	 */
	struct UMerchantDealTableWidget_OnSetMerchantName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnSetMerchantFaction
	 */
	struct UMerchantDealTableWidget_OnSetMerchantFaction_Params
	{
	public:
		int32_t                                                    InFaction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantDealTableWidget.OnMerchantServiceActiveNotify
	 */
	struct UMerchantDealTableWidget_OnMerchantServiceActiveNotify_Params
	{
	public:
		EWidgetMerchantServiceType                                 ActiveService;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantItemWidget.SetActivateStockSellBackInfo
	 */
	struct UMerchantItemWidget_SetActivateStockSellBackInfo_Params
	{
	public:
		bool                                                       bSellTabOpen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantItemWidget.OnStockSellBackDataSet
	 */
	struct UMerchantItemWidget_OnStockSellBackDataSet_Params
	{
	public:
		struct FStockSellBackData                                  InStockSellBackData;                                     // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantItemWidget.OnStockCraftDataSet
	 */
	struct UMerchantItemWidget_OnStockCraftDataSet_Params
	{
	public:
		struct FStockCraftData                                     InStockCraftData;                                        // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantItemWidget.OnStockBuyDataSet
	 */
	struct UMerchantItemWidget_OnStockBuyDataSet_Params
	{
	public:
		struct FStockBuyData                                       InStockBuyData;                                          // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantItemWidget.OnSelected
	 */
	struct UMerchantItemWidget_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.UpdateMerchantRemainTime
	 */
	struct UMerchantListSlotWidget_UpdateMerchantRemainTime_Params
	{	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.OnSetMerchantRemainTime
	 */
	struct UMerchantListSlotWidget_OnSetMerchantRemainTime_Params
	{
	public:
		struct FTimespan                                           RemainTime;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.OnSetMerchantPortrait
	 */
	struct UMerchantListSlotWidget_OnSetMerchantPortrait_Params
	{
	public:
		class UTexture2D*                                          Portrait;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.OnSetMerchantName
	 */
	struct UMerchantListSlotWidget_OnSetMerchantName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.OnSetMerchantFaction
	 */
	struct UMerchantListSlotWidget_OnSetMerchantFaction_Params
	{
	public:
		int32_t                                                    InFaction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantListSlotWidget.OnClickedDeal
	 */
	struct UMerchantListSlotWidget_OnClickedDeal_Params
	{	};

	/**
	 * Function DungeonCrawler.MerchantListWidget.OnRemoveAllMerchantListSlotWidget
	 */
	struct UMerchantListWidget_OnRemoveAllMerchantListSlotWidget_Params
	{	};

	/**
	 * Function DungeonCrawler.MerchantListWidget.OnAddMerchantListSlotWidget
	 */
	struct UMerchantListWidget_OnAddMerchantListSlotWidget_Params
	{
	public:
		class UUserWidget*                                         AddedSlotWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantServiceTabWidget.OnClickedServiceTab
	 */
	struct UMerchantServiceTabWidget_OnClickedServiceTab_Params
	{	};

	/**
	 * Function DungeonCrawler.MerchantServiceTabWidget.OnChangeActiveState
	 */
	struct UMerchantServiceTabWidget_OnChangeActiveState_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MerchantServiceWidget.OnMerchantServiceActiveNotify
	 */
	struct UMerchantServiceWidget_OnMerchantServiceActiveNotify_Params
	{
	public:
		EWidgetMerchantServiceType                                 ActiveService;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MetaInventoryComponent.OnLobbyCharacterInfoUupdated
	 */
	struct UMetaInventoryComponent_OnLobbyCharacterInfoUupdated_Params
	{	};

	/**
	 * Function DungeonCrawler.MetaMerchantActor.OnSetMerchantInfoArray
	 */
	struct AMetaMerchantActor_OnSetMerchantInfoArray_Params
	{	};

	/**
	 * Function DungeonCrawler.StockBuyInventoryComponent.SetStockBuyDataArray
	 */
	struct UStockBuyInventoryComponent_SetStockBuyDataArray_Params
	{
	public:
		struct FMerchantInfo                                       InMerchantInfo;                                          // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.StockBuyInventoryComponent.RequestStockBuy
	 */
	struct UStockBuyInventoryComponent_RequestStockBuy_Params
	{
	public:
		struct FStockBuyData                                       InStockBuyData;                                          // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.StockCraftInventoryComponent.SetStockCraftDataArray
	 */
	struct UStockCraftInventoryComponent_SetStockCraftDataArray_Params
	{
	public:
		struct FMerchantInfo                                       InMerchantInfo;                                          // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.StockCraftInventoryComponent.RequestStockCraft
	 */
	struct UStockCraftInventoryComponent_RequestStockCraft_Params
	{
	public:
		struct FStockCraftData                                     InStockCraftData;                                        // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.StockSellBackInventoryComponent.SetStockSellBackItemArray
	 */
	struct UStockSellBackInventoryComponent_SetStockSellBackItemArray_Params
	{
	public:
		struct FMerchantInfo                                       InMerchantInfo;                                          // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.MetaStorageComponent.OnLobbyCharacterInfoUupdated
	 */
	struct UMetaStorageComponent_OnLobbyCharacterInfoUupdated_Params
	{	};

	/**
	 * Function DungeonCrawler.NickNameWidgetBase.SetNickName
	 */
	struct UNickNameWidgetBase_SetNickName_Params
	{
	public:
		struct FNickname                                           InNickName;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.NickNameWidgetBase.OnNickNameStr
	 */
	struct UNickNameWidgetBase_OnNickNameStr_Params
	{
	public:
		class FString                                              NewValue;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OldValue;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.OnlineSystemSteam.UnbindMsgAll
	 */
	struct UOnlineSystemSteam_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.OnlineSystemSteam.UnbindMsg
	 */
	struct UOnlineSystemSteam_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.OnlineSystemSteam.TerminateBase
	 */
	struct UOnlineSystemSteam_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.OnlineSystemSteam.BroadcastMsgBlueprint
	 */
	struct UOnlineSystemSteam_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PartyChatWidget.OnChatAccountData
	 */
	struct UPartyChatWidget_OnChatAccountData_Params
	{
	public:
		struct FChatAccountData                                    NewItemData;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChatAccountData                                    OldItemData;                                             // 0x0040(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PartySession.UnbindMsgAll
	 */
	struct UPartySession_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PartySession.UnbindMsg
	 */
	struct UPartySession_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PartySession.TerminateBase
	 */
	struct UPartySession_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.PartySession.BroadcastMsgBlueprint
	 */
	struct UPartySession_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PerkWidget.SetPerkData
	 */
	struct UPerkWidget_SetPerkData_Params
	{
	public:
		class FText                                                PerkName;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                PerkDesc;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PerkWidget.OnSetPerkData
	 */
	struct UPerkWidget_OnSetPerkData_Params
	{	};

	/**
	 * Function DungeonCrawler.PerkWidget.InitializePerkWidget
	 */
	struct UPerkWidget_InitializePerkWidget_Params
	{
	public:
		struct FPrimaryAssetId                                     InPerkId;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayerCharacterCaptureActor.SetStartRotateLocation
	 */
	struct APlayerCharacterCaptureActor_SetStartRotateLocation_Params
	{
	public:
		float                                                      InStartPosition;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotation
	 */
	struct APlayerCharacterCaptureActor_SetMeshRotation_Params
	{
	public:
		float                                                      InYaw;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayerCharacterCaptureActor.ResetMeshRotation
	 */
	struct APlayerCharacterCaptureActor_ResetMeshRotation_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayerCharacterCaptureActor.OnItemEquipped
	 */
	struct APlayerCharacterCaptureActor_OnItemEquipped_Params
	{
	public:
		class UAnimationAsset*                                     ItemStandIdle;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayerCharacterCaptureActor.GetCharacterMeshAnimInstance
	 */
	struct APlayerCharacterCaptureActor_GetCharacterMeshAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnUpdateLobbyCharacterData
	 */
	struct UPlayWidget_OnUpdateLobbyCharacterData_Params
	{
	public:
		struct FLobbyCharacterInfo                                 LobbyInfo;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnUpdateDungeonSelectBtn
	 */
	struct UPlayWidget_OnUpdateDungeonSelectBtn_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnStartButtonClicked
	 */
	struct UPlayWidget_OnStartButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnSoloRegionUpdate
	 */
	struct UPlayWidget_OnSoloRegionUpdate_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnRegionSelected
	 */
	struct UPlayWidget_OnRegionSelected_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnRegionDataSet
	 */
	struct UPlayWidget_OnRegionDataSet_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsPartyLeader;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyResponse
	 */
	struct UPlayWidget_OnPopupSWidgetInvitePartyResponse_Params
	{
	public:
		EPopupResult                                               PopupResult;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LR4S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnAccountId;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyRequest
	 */
	struct UPlayWidget_OnPopupSWidgetInvitePartyRequest_Params
	{
	public:
		class UPopupDataBase*                                      PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnAccountId;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfoData
	 */
	struct UPlayWidget_OnPlayPartyUserInfoData_Params
	{
	public:
		struct FPlayPartyUserInfoData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPlayPartyUserInfoData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfo
	 */
	struct UPlayWidget_OnPlayPartyUserInfo_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PlayPartyUserInfo;                                       // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPlayPartyReadyStateChanged
	 */
	struct UPlayWidget_OnPlayPartyReadyStateChanged_Params
	{
	public:
		bool                                                       bMine;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReady;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPartyReadyButtonClicked
	 */
	struct UPlayWidget_OnPartyReadyButtonClicked_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPartyLocationSet
	 */
	struct UPlayWidget_OnPartyLocationSet_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PartyUser;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MetaLocationIndex;                                       // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsReady;                                                 // 0x007C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPartyExitButtonClicked
	 */
	struct UPlayWidget_OnPartyExitButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnPartyCheckAndRegionButtonUpdate
	 */
	struct UPlayWidget_OnPartyCheckAndRegionButtonUpdate_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnMatchStart
	 */
	struct UPlayWidget_OnMatchStart_Params
	{
	public:
		bool                                                       InbCanCancel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZSE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InMatchCancelDelayTimeSec;                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnMatchCancel
	 */
	struct UPlayWidget_OnMatchCancel_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnInvitePartyButtonClicked
	 */
	struct UPlayWidget_OnInvitePartyButtonClicked_Params
	{
	public:
		EWidgetPartyUserLocate                                     UserLocate;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnDungeonSelectListPopupOpen
	 */
	struct UPlayWidget_OnDungeonSelectListPopupOpen_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_307V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    EntranceFeeGold;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnDungeonSelect
	 */
	struct UPlayWidget_OnDungeonSelect_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnClickedDungeonSelect
	 */
	struct UPlayWidget_OnClickedDungeonSelect_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnChangedMatchingState
	 */
	struct UPlayWidget_OnChangedMatchingState_Params
	{
	public:
		bool                                                       IsInMatching;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.PlayWidget.OnCancelButtonClicked
	 */
	struct UPlayWidget_OnCancelButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.PlayWidget.AutoTeamRegisterSingle
	 */
	struct UPlayWidget_AutoTeamRegisterSingle_Params
	{
	public:
		bool                                                       IsRegister;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.StopPierce
	 */
	struct AProjectileActor_StopPierce_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.SetHomingTargetComponent
	 */
	struct AProjectileActor_SetHomingTargetComponent_Params
	{
	public:
		class USceneComponent*                                     InHomingTargetComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.SetHomingMagnitude
	 */
	struct AProjectileActor_SetHomingMagnitude_Params
	{
	public:
		float                                                      InHomingMagnitude;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.SetAddEffectToTargetHit
	 */
	struct AProjectileActor_SetAddEffectToTargetHit_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             AddEffectList;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.SetAddEffectToGroundtHit
	 */
	struct AProjectileActor_SetAddEffectToGroundtHit_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             AddEffectList;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.ProjectileHit
	 */
	struct AProjectileActor_ProjectileHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bIsAttached;                                             // 0x00E8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AFJ[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ActorPrevTickTransform;                                  // 0x00F0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.PlayPierce
	 */
	struct AProjectileActor_PlayPierce_Params
	{
	public:
		float                                                      SetPierceCount;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SetObstaclePierce;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2XR3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SetObstaclePierceDecrease;                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.OnRep_ProjectileMovementComponentLocalVelocity
	 */
	struct AProjectileActor_OnRep_ProjectileMovementComponentLocalVelocity_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.OnRep_IsHomingProjectile
	 */
	struct AProjectileActor_OnRep_IsHomingProjectile_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.OnRep_HomingTargetComponent
	 */
	struct AProjectileActor_OnRep_HomingTargetComponent_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.OnRep_HomingMagnitude
	 */
	struct AProjectileActor_OnRep_HomingMagnitude_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.OnLifeTimeExpired
	 */
	struct AProjectileActor_OnLifeTimeExpired_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.LifeTimeExpired
	 */
	struct AProjectileActor_LifeTimeExpired_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.InitVelocity
	 */
	struct AProjectileActor_InitVelocity_Params
	{
	public:
		float                                                      FirePower;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.InitialSpeed
	 */
	struct AProjectileActor_InitialSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.InitArrivalVelocity
	 */
	struct AProjectileActor_InitArrivalVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.HandleTimelineUpdate
	 */
	struct AProjectileActor_HandleTimelineUpdate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.HandleTimelineFinished
	 */
	struct AProjectileActor_HandleTimelineFinished_Params
	{	};

	/**
	 * Function DungeonCrawler.ProjectileActor.GetAddEffectToTargetHit
	 */
	struct AProjectileActor_GetAddEffectToTargetHit_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.GetAddEffectToGroundHit
	 */
	struct AProjectileActor_GetAddEffectToGroundHit_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ProjectileActor.GameplayTagUpdated
	 */
	struct AProjectileActor_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleSubObject.UnbindMsgAll
	 */
	struct USampleSubObject_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleSubObject.UnbindMsg
	 */
	struct USampleSubObject_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleSubObject.TerminateBase
	 */
	struct USampleSubObject_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.SampleSubObject.InitializeSampleSubObject
	 */
	struct USampleSubObject_InitializeSampleSubObject_Params
	{	};

	/**
	 * Function DungeonCrawler.SampleSubObject.BroadcastMsgBlueprint
	 */
	struct USampleSubObject_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleSubObject.BeginSampleSubObject
	 */
	struct USampleSubObject_BeginSampleSubObject_Params
	{	};

	/**
	 * Function DungeonCrawler.SampleObject.UnbindMsgAll
	 */
	struct USampleObject_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleObject.UnbindMsg
	 */
	struct USampleObject_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleObject.TerminateBase
	 */
	struct USampleObject_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.SampleObject.InitializeSampleObject
	 */
	struct USampleObject_InitializeSampleObject_Params
	{	};

	/**
	 * Function DungeonCrawler.SampleObject.BroadcastMsgBlueprint
	 */
	struct USampleObject_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SampleObject.BeginSampleObject
	 */
	struct USampleObject_BeginSampleObject_Params
	{	};

	/**
	 * Function DungeonCrawler.ServerAccountSubsystem.UnbindMsgAll
	 */
	struct UServerAccountSubsystem_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ServerAccountSubsystem.UnbindMsg
	 */
	struct UServerAccountSubsystem_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.ServerAccountSubsystem.TerminateBase
	 */
	struct UServerAccountSubsystem_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.ServerAccountSubsystem.BroadcastMsgBlueprint
	 */
	struct UServerAccountSubsystem_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.SetSkillData
	 */
	struct ASkillActor_SetSkillData_Params
	{
	public:
		struct FSkillData                                          NewSkillData;                                            // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.RechargeSkill
	 */
	struct ASkillActor_RechargeSkill_Params
	{
	public:
		int32_t                                                    ChargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.OnRep_SkillData
	 */
	struct ASkillActor_OnRep_SkillData_Params
	{
	public:
		struct FSkillData                                          OldSkillData;                                            // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.GetSoundDataSkill
	 */
	struct ASkillActor_GetSoundDataSkill_Params
	{
	public:
		class USoundData*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.GetSkillData
	 */
	struct ASkillActor_GetSkillData_Params
	{
	public:
		struct FSkillData                                          ReturnValue;                                             // 0x0000(0x002C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.GetDesignDataSkill
	 */
	struct ASkillActor_GetDesignDataSkill_Params
	{
	public:
		struct FDesignDataSkill                                    ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillActor.GetArtDataSkill
	 */
	struct ASkillActor_GetArtDataSkill_Params
	{
	public:
		class UArtDataSkill*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.UpdateSkillCount
	 */
	struct USkillComponent_UpdateSkillCount_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.UnbindMsgAll
	 */
	struct USkillComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.UnbindMsg
	 */
	struct USkillComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.TerminateBase
	 */
	struct USkillComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.SkillComponent.OnRep_SkillDataList
	 */
	struct USkillComponent_OnRep_SkillDataList_Params
	{
	public:
		TArray<struct FSkillDataInfo>                              OldSkillDataList;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.OnRep_SkillActorList
	 */
	struct USkillComponent_OnRep_SkillActorList_Params
	{
	public:
		TArray<class ASkillActor*>                                 OldSkillActors;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.InitSkillData
	 */
	struct USkillComponent_InitSkillData_Params
	{	};

	/**
	 * Function DungeonCrawler.SkillComponent.HandleSkillInput
	 */
	struct USkillComponent_HandleSkillInput_Params
	{
	public:
		struct FGameplayTag                                        InputTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GetSkillDataByTriggerTag
	 */
	struct USkillComponent_GetSkillDataByTriggerTag_Params
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSkillData                                          ReturnValue;                                             // 0x0008(0x002C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GetSkillDataByIndex
	 */
	struct USkillComponent_GetSkillDataByIndex_Params
	{
	public:
		ESkillIndex                                                SkillIndex;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ZBO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSkillData                                          ReturnValue;                                             // 0x0004(0x002C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GetSkillAllCurrentSkillData
	 */
	struct USkillComponent_GetSkillAllCurrentSkillData_Params
	{
	public:
		TArray<struct FSkillData>                                  SkillDataList;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              MaxDurationList;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              RemainDurationList;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GetSkillActor
	 */
	struct USkillComponent_GetSkillActor_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASkillActor*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GetSkillActivatabilityByTriggerTag
	 */
	struct USkillComponent_GetSkillActivatabilityByTriggerTag_Params
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillActivatableType                                      ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.GameplayEffectStackChanged
	 */
	struct USkillComponent_GameplayEffectStackChanged_Params
	{
	public:
		struct FGameplayTag                                        EffectGameplayTag;                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         EffectHandle;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewStackCount;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousStackCount;                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.CheckSkillReduceCount
	 */
	struct USkillComponent_CheckSkillReduceCount_Params
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReduceCount;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.CalSkillCooldownRemainTime
	 */
	struct USkillComponent_CalSkillCooldownRemainTime_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RemainDuration;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDuration;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillComponent.BroadcastMsgBlueprint
	 */
	struct USkillComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillWidget.SetSkillData
	 */
	struct USkillWidget_SetSkillData_Params
	{
	public:
		class FText                                                SkillName;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                SkillDesc;                                               // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SkillWidget.OnSetSkillData
	 */
	struct USkillWidget_OnSetSkillData_Params
	{	};

	/**
	 * Function DungeonCrawler.SkillWidget.InitializeSkillWidget
	 */
	struct USkillWidget_InitializeSkillWidget_Params
	{
	public:
		struct FPrimaryAssetId                                     InSkillId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithTag
	 */
	struct USoundBlueprintLibrary_PlaySoundWithTag_Params
	{
	public:
		class UObject*                                             InSoundPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InSoundProvider;                                         // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithSwitch
	 */
	struct USoundBlueprintLibrary_PlaySoundWithSwitch_Params
	{
	public:
		class UObject*                                             InSoundPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InSoundProvider;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPhysicalSurface                                           Surface;                                                 // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CTFZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SwitchGroup;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SwitchState;                                             // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundOnPlayerController
	 */
	struct USoundBlueprintLibrary_PlaySoundOnPlayerController_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundBlueprintLibrary.PlaySound
	 */
	struct USoundBlueprintLibrary_PlaySound_Params
	{
	public:
		class UObject*                                             InSoundPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundBlueprintLibrary.IsSoundPlayable
	 */
	struct USoundBlueprintLibrary_IsSoundPlayable_Params
	{
	public:
		class UObject*                                             InSoundPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InSoundProvider;                                         // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InSoundEventTag;                                         // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetTagQuery
	 */
	struct USoundProvider_GetTagQuery_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   ReturnValue;                                             // 0x0008(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetTagQueries
	 */
	struct USoundProvider_GetTagQueries_Params
	{
	public:
		TMap<struct FGameplayTag, struct FGameplayTagQuery>        ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetSwitches
	 */
	struct USoundProvider_GetSwitches_Params
	{
	public:
		TMap<struct FGameplayTag, struct FDCSoundDataContainer>    ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetSwitch
	 */
	struct USoundProvider_GetSwitch_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPhysicalSurface                                           Surface;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZIT4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkSwitchValue*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetLastPrimaryAssetId
	 */
	struct USoundProvider_GetLastPrimaryAssetId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetEvents
	 */
	struct USoundProvider_GetEvents_Params
	{
	public:
		TMap<struct FGameplayTag, class UAkAudioEvent*>            ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SoundProvider.GetEvent
	 */
	struct USoundProvider_GetEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.UpdateSpellCount
	 */
	struct ASpellActor_UpdateSpellCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.SetSpellData
	 */
	struct ASpellActor_SetSpellData_Params
	{
	public:
		struct FSpellData                                          NewSpellData;                                            // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.RechargeSpell
	 */
	struct ASpellActor_RechargeSpell_Params
	{
	public:
		int32_t                                                    ChargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.OnRep_SpellData
	 */
	struct ASpellActor_OnRep_SpellData_Params
	{
	public:
		struct FSpellData                                          OldSpellData;                                            // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.GetSpellData
	 */
	struct ASpellActor_GetSpellData_Params
	{
	public:
		struct FSpellData                                          ReturnValue;                                             // 0x0000(0x002C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.GetSoundDataSpell
	 */
	struct ASpellActor_GetSoundDataSpell_Params
	{
	public:
		class USoundData*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.GetDesignDataSpell
	 */
	struct ASpellActor_GetDesignDataSpell_Params
	{
	public:
		struct FDesignDataSpell                                    ReturnValue;                                             // 0x0000(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellActor.GetArtDataSpell
	 */
	struct ASpellActor_GetArtDataSpell_Params
	{
	public:
		class UArtDataSpell*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.UpdateSpellCount
	 */
	struct USpellMemorizeComponent_UpdateSpellCount_Params
	{
	public:
		struct FGameplayTag                                        SpellTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.UnbindMsgAll
	 */
	struct USpellMemorizeComponent_UnbindMsgAll_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.UnbindMsg
	 */
	struct USpellMemorizeComponent_UnbindMsg_Params
	{
	public:
		class UScriptStruct*                                       InMsgType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.TryUseSpell
	 */
	struct USpellMemorizeComponent_TryUseSpell_Params
	{
	public:
		struct FGameplayTag                                        SpellTriggerTag;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.TerminateBase
	 */
	struct USpellMemorizeComponent_TerminateBase_Params
	{	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.ServerSetCurrentSpell
	 */
	struct USpellMemorizeComponent_ServerSetCurrentSpell_Params
	{
	public:
		struct FGameplayTag                                        SpellTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.OnRep_SpellActors
	 */
	struct USpellMemorizeComponent_OnRep_SpellActors_Params
	{
	public:
		TArray<class ASpellActor*>                                 OldASpellActors;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.InitSpellData
	 */
	struct USpellMemorizeComponent_InitSpellData_Params
	{
	public:
		struct FAccountData                                        InAccountData;                                           // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.GetSpellDatas
	 */
	struct USpellMemorizeComponent_GetSpellDatas_Params
	{
	public:
		TArray<struct FSpellData>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.GetCurrentSpellCastability
	 */
	struct USpellMemorizeComponent_GetCurrentSpellCastability_Params
	{
	public:
		ESpellCastabilityType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.GetCurrentSpellActor
	 */
	struct USpellMemorizeComponent_GetCurrentSpellActor_Params
	{
	public:
		class ASpellActor*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.SpellMemorizeComponent.BroadcastMsgBlueprint
	 */
	struct USpellMemorizeComponent_BroadcastMsgBlueprint_Params
	{
	public:
		int32_t                                                    InMsg;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TradeChannelButtonBase.OnChannelButtonClicked
	 */
	struct UTradeChannelButtonBase_OnChannelButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeChannelChatWidget.OnChatType
	 */
	struct UTradeChannelChatWidget_OnChatType_Params
	{
	public:
		EChatType                                                  NewItemData;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChatType                                                  OldItemData;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TradeChannelChatWidget.OnChatAccountData
	 */
	struct UTradeChannelChatWidget_OnChatAccountData_Params
	{
	public:
		struct FChatAccountData                                    NewItemData;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChatAccountData                                    OldItemData;                                             // 0x0040(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TradeChatWidget.OnChatAccountData
	 */
	struct UTradeChatWidget_OnChatAccountData_Params
	{
	public:
		struct FChatAccountData                                    NewItemData;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChatAccountData                                    OldItemData;                                             // 0x0040(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TradeMasterWidget.SendTradeSubscriptionWidgetBeginNotify
	 */
	struct UTradeMasterWidget_SendTradeSubscriptionWidgetBeginNotify_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeSubscriptionWidget.SendMsgWidgetTradeSubscriptionButtonClicked
	 */
	struct UTradeSubscriptionWidget_SendMsgWidgetTradeSubscriptionButtonClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeSubscriptionWidget.OnClikedButtonDone
	 */
	struct UTradeSubscriptionWidget_OnClikedButtonDone_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeSubscriptionWidget.CloseSelf
	 */
	struct UTradeSubscriptionWidget_CloseSelf_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeUserListEntryWidget.OnRightClicked
	 */
	struct UTradeUserListEntryWidget_OnRightClicked_Params
	{	};

	/**
	 * Function DungeonCrawler.TradeUserListWidget.OnTextChanged
	 */
	struct UTradeUserListWidget_OnTextChanged_Params
	{
	public:
		class FText                                                FindId;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DungeonCrawler.TradeUserListWidget.OnBlockUpdated
	 */
	struct UTradeUserListWidget_OnBlockUpdated_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
