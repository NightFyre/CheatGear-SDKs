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
	 * Function GameplayAbilities.AbilityAsync.EndAction
	 */
	struct UAbilityAsync_EndAction_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	 */
	struct UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2T15[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityAsync_WaitAttributeChanged*                  ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	 */
	struct UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	 */
	struct UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     SourceFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0058(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffect;                                 // 0x0099(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OQKP[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityAsync_WaitGameplayEffectApplied*             ReturnValue;                                             // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	 */
	struct UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0018(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	 */
	struct UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyMatchExact;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7IO1[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityAsync_WaitGameplayEvent*                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	 */
	struct UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	 */
	struct UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HF4W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityAsync_WaitGameplayTagAdded*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	 */
	struct UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_24QZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityAsync_WaitGameplayTagRemoved*                ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    HitResult;                                               // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	 */
	struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	 */
	struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StackCount;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7YUU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	 */
	struct UAbilitySystemBlueprintLibrary_SetDuration_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZBJS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	 */
	struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
	 */
	struct UAbilitySystemBlueprintLibrary_RemoveLooseGameplayTags_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bShouldReplicate;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  AttributeA;                                              // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeB;                                              // 0x0038(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAbilitySpecHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          A;                                                       // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          B;                                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
	 */
	struct UAbilitySystemBlueprintLibrary_NotEqual_ActiveGameplayEffectHandle_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
	{
	public:
		class UGameplayEffect*                                     InGameplayEffect;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InInstigator;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLevel;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KQTA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	 */
	struct UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params
	{
	public:
		float                                                      NormalizedMagnitude;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawMagnitude;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        MatchedTagName;                                          // 0x0020(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        OriginalTag;                                             // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0030(0x0020)  (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0050(0x0020)  (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0070(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x0088(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              EffectCauser;                                            // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             SourceObject;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AbilityLevel;                                            // 0x00C4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     TargetAttachComponent;                                   // 0x00C8(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplicateLocationWhenUsingMinimalRepProxy;              // 0x00D0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_75Y8[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              ReturnValue;                                             // 0x00D8(0x00D8)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	 */
	struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
	{
	public:
		struct FGameplayTargetDataFilter                           Filter;                                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              FilterActor;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	 */
	struct UAbilitySystemBlueprintLibrary_IsValid_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	 */
	struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	 */
	struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_00LQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HIBV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OO8H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00D8(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	 */
	struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0010(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	 */
	struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OD8S[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x00E0(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x00D8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    HitResult;                                               // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJO8[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          ReturnValue;                                             // 0x0030(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x00D8(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayEffectUIData_Params
	{
	public:
		class UClass*                                              EffectClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DataType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayEffectUIData*                               ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayEffectFromActiveEffectHandle_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayEffect*                                     ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x00E0(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x00F8(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x00E0(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayAbilityFromSpecHandle_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          AbilitySpecHandle;                                       // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsInstance;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_44SY[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameplayAbility*                                    ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1J6P[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3DRJ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SLUX[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GVJG[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	 */
	struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	 */
	struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayEffectSpecHandle>                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZ23[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00D8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x00D8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SRYI[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	 */
	struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
	{
	public:
		unsigned char                                              UnknownData_2DGU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EGameplayCueEvent                                          EventType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K079[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0018(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetDataHandle;                                        // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     ActorFilterClass;                                        // 0x0028(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0038(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	 */
	struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0040(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0060(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BaseValue;                                               // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0084(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BZ8T[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	 */
	struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0040(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0060(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QO76[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0084(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  AttributeA;                                              // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeB;                                              // 0x0038(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAbilitySpecHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          A;                                                       // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          B;                                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
	 */
	struct UAbilitySystemBlueprintLibrary_EqualEqual_ActiveGameplayEffectHandle_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x0018(0x00E8)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bReset;                                                  // 0x0100(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	 */
	struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LEIW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	 */
	struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x00D8(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagReqs;                                           // 0x0118(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0158(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params
	{
	public:
		class AActor*                                              InNewInstigator;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           GameplayEffectSpecHandle_Clone;                          // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	 */
	struct UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      NormalizedMagnitude;                                     // 0x00D8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawMagnitude;                                            // 0x00DC(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x00E0(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        MatchedTagName;                                          // 0x00F8(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        OriginalTag;                                             // 0x0100(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0108(0x0020)  (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0128(0x0020)  (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0148(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x0160(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x0178(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              EffectCauser;                                            // 0x0180(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             SourceObject;                                            // 0x0188(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0190(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0198(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AbilityLevel;                                            // 0x019C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     TargetAttachComponent;                                   // 0x01A0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplicateLocationWhenUsingMinimalRepProxy;              // 0x01A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	 */
	struct UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        DataTag;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Magnitude;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8B7S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	 */
	struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                DataName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Magnitude;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VW5A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	 */
	struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetHandle;                                            // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    HandleToAdd;                                             // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0050(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
	 */
	struct UAbilitySystemBlueprintLibrary_AddLooseGameplayTags_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bShouldReplicate;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	 */
	struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           LinkedGameplayEffectSpec;                                // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	 */
	struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              LinkedGameplayEffect;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	 */
	struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               NewGameplayTags;                                         // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	 */
	struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        NewGameplayTag;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	 */
	struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               NewGameplayTags;                                         // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	 */
	struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        NewGameplayTag;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
	{
	public:
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetingLocationInfo               TargetLocation;                                          // 0x00A0(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0140(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x00E8(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
	{
	public:
		TArray<class AActor*>                                      ActorArray;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       OneTargetPerHandle;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4RO8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	 */
	struct UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitudes_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<struct FGameplayTag, float>                           NewSetByCallerValues;                                    // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	 */
	struct UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitude_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SetByCallerTag;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	 */
	struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
	{
	public:
		class UClass*                                              InAbilityToActivate;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	 */
	struct UAbilitySystemComponent_TryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	 */
	struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	 */
	struct UAbilitySystemComponent_TargetConfirm_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	 */
	struct UAbilitySystemComponent_TargetCancel_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	 */
	struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
	{
	public:
		bool                                                       NewInhibit;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	 */
	struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
	{
	public:
		struct FGameplayEffectQuery                                Query;                                                   // 0x0000(0x0150)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    NewLevel;                                                // 0x0150(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	 */
	struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewLevel;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	 */
	struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InputPressed;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VG0W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0020(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	 */
	struct UAbilitySystemComponent_ServerTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InputPressed;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_659K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_34GY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OQGD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReplicatedTargetDataHandle;                              // 0x0020(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ApplicationTag;                                          // 0x0048(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0050(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TFV5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              VectorPayload;                                           // 0x0038(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0EDO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	 */
	struct UAbilitySystemComponent_ServerSetInputReleased_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	 */
	struct UAbilitySystemComponent_ServerSetInputPressed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	 */
	struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	 */
	struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	 */
	struct UAbilitySystemComponent_ServerEndAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToEnd;                                            // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AA0M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0028(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClientPosition;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NextSectionName;                                         // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	 */
	struct UAbilitySystemComponent_ServerCancelAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToCancel;                                         // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BUV4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	 */
	struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
	{
	public:
		struct FGameplayAbilities_FServerAbilityRPCBatch           BatchInfo;                                               // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	 */
	struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             InstigatorAbilitySystemComponent;                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	 */
	struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	 */
	struct UAbilitySystemComponent_ReleaseInputID_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.PressInputID
	 */
	struct UAbilitySystemComponent_PressInputID_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	 */
	struct UAbilitySystemComponent_OnSpawnedAttributesEndPlayed_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	 */
	struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	 */
	struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	 */
	struct UAbilitySystemComponent_OnRep_OwningActor_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	 */
	struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	 */
	struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	 */
	struct UAbilitySystemComponent_OnOwnerActorDestroyed_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	 */
	struct UAbilitySystemComponent_OnAvatarActorDestroyed_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0038(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0038(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0038(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0020(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0078(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0020(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0078(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0020(0x00D8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	 */
	struct UAbilitySystemComponent_MakeOutgoingSpec_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NT70[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	 */
	struct UAbilitySystemComponent_MakeEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	 */
	struct UAbilitySystemComponent_K2_InitStats_Params
	{
	public:
		class UClass*                                              Attributes;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          DataTable;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	 */
	struct UAbilitySystemComponent_K2_GiveAbilityAndActivateOnce_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputID;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	 */
	struct UAbilitySystemComponent_K2_GiveAbility_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputID;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	 */
	struct UAbilitySystemComponent_IsGameplayCueActive_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.InputConfirm
	 */
	struct UAbilitySystemComponent_InputConfirm_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.InputCancel
	 */
	struct UAbilitySystemComponent_InputCancel_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	 */
	struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	 */
	struct UAbilitySystemComponent_GetGameplayTagCount_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	 */
	struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	 */
	struct UAbilitySystemComponent_GetGameplayEffectCount_Params
	{
	public:
		class UClass*                                              SourceGameplayEffect;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             OptionalInstigatorFilterComponent;                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnforceOnGoingCheck;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J0F6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	 */
	struct UAbilitySystemComponent_GetGameplayAttributeValue_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFound;                                                  // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IHVD[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	 */
	struct UAbilitySystemComponent_GetAttributeSet_Params
	{
	public:
		class UClass*                                              AttributeSetClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAttributeSet*                                       ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	 */
	struct UAbilitySystemComponent_GetAllAttributes_Params
	{
	public:
		TArray<struct FGameplayAttribute>                          OutAttributes;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	 */
	struct UAbilitySystemComponent_GetAllAbilities_Params
	{
	public:
		TArray<struct FGameplayAbilitySpecHandle>                  OutAbilityHandles;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	 */
	struct UAbilitySystemComponent_GetActiveEffectsWithAllTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	 */
	struct UAbilitySystemComponent_GetActiveEffects_Params
	{
	public:
		struct FGameplayEffectQuery                                Query;                                                   // 0x0000(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0150(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	 */
	struct UAbilitySystemComponent_FindAllAbilitiesWithTags_Params
	{
	public:
		TArray<struct FGameplayAbilitySpecHandle>                  OutAbilityHandles;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               Tags;                                                    // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	 */
	struct UAbilitySystemComponent_FindAllAbilitiesWithInputID_Params
	{
	public:
		TArray<struct FGameplayAbilitySpecHandle>                  OutAbilityHandles;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    InputID;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	 */
	struct UAbilitySystemComponent_FindAllAbilitiesMatchingQuery_Params
	{
	public:
		TArray<struct FGameplayAbilitySpecHandle>                  OutAbilityHandles;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0010(0x0048)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	 */
	struct UAbilitySystemComponent_ClientTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	 */
	struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WDD5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	 */
	struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    GameFlags;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	 */
	struct UAbilitySystemComponent_ClientEndAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToEnd;                                            // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1BYW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	 */
	struct UAbilitySystemComponent_ClientCancelAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToCancel;                                         // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D6TN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	 */
	struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O2KX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0020(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	 */
	struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0OC8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	 */
	struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int16_t                                                    PredictionKey;                                           // 0x0004(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	 */
	struct UAbilitySystemComponent_ClearAllAbilitiesWithInputID_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	 */
	struct UAbilitySystemComponent_ClearAllAbilities_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClearAbility
	 */
	struct UAbilitySystemComponent_ClearAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_103A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RN9B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	 */
	struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	 */
	struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	 */
	struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	 */
	struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
	 */
	struct UAbilitySystemGlobals_ServerEndPlayerAbility_Params
	{
	public:
		class FString                                              AbilityNameMatch;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
	 */
	struct UAbilitySystemGlobals_ServerCancelPlayerAbility_Params
	{
	public:
		class FString                                              AbilityNameMatch;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
	 */
	struct UAbilitySystemGlobals_ServerActivatePlayerAbility_Params
	{
	public:
		class FString                                              AbilityNameMatch;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
	 */
	struct UAbilitySystemGlobals_ListPlayerAbilities_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	 */
	struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldDirection;                                          // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAdditive;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z9DM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0968[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0048(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnableGravity;                                          // 0x0064(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5714[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionConstantForce*           ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinimumLandedTriggerTime;                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFinishOnLanded;                                         // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M822[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0040(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VI8K[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_ApplyRootMotionJumpForce*               ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params
	{
	public:
		class AActor*                                              OriginalTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewTarget;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetDataHandle;                                        // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    TargetDataIndex;                                         // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TargetActorIndex;                                        // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocationOffset;                                    // 0x0040(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionMoveToActorTargetOffsetType                     OffsetAlignment;                                         // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B9MD[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TargetLerpSpeedHorizontal;                               // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TargetLerpSpeedVertical;                                 // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNewMovementMode;                                     // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              MovementMode;                                            // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9YA8[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0080(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UR2C[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0090(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x00A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDisableDestinationReachedInterrupt;                     // 0x00AC(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JYHN[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionMoveToActorForce*        ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocationOffset;                                    // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionMoveToActorTargetOffsetType                     OffsetAlignment;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNOS[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TargetLerpSpeedHorizontal;                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TargetLerpSpeedVertical;                                 // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNewMovementMode;                                     // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              MovementMode;                                            // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x004A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GLCG[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V2BJ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0068(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDisableDestinationReachedInterrupt;                     // 0x0084(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HZJD[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionMoveToActorForce*        ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	 */
	struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNewMovementMode;                                     // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              MovementMode;                                            // 0x002D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x002E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9PNG[0x1];                                   // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BJOQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0040(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V6AA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionMoveToForce*             ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	 */
	struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              LocationActor;                                           // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPush;                                                 // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAdditive;                                             // 0x003D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNoZForce;                                               // 0x003E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGXX[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         StrengthDistanceFalloff;                                 // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseFixedWorldDirection;                                 // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZNIY[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            FixedWorldDirection;                                     // 0x0058(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VPB6[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0078(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P7W2[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionRadialForce*             ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	 */
	struct UAbilityTask_MoveToLocation_MoveToLocation_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KXME[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         OptionalInterpolationCurve;                              // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveVector*                                        OptionalVectorInterpolationCurve;                        // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_MoveToLocation*                         ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	 */
	struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAbilityTaskNetSyncType                                    SyncType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_101U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_NetworkSyncPoint*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	 */
	struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	 */
	struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LB6E[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTimeSeconds;                                        // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_PlayMontageAndWait*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	 */
	struct UAbilityTask_Repeat_RepeatAction_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeBetweenActions;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalActionCount;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_Repeat*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	 */
	struct UAbilityTask_SpawnActor_SpawnActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_SpawnActor*                             ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	 */
	struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	 */
	struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	 */
	struct UAbilityTask_StartAbilityState_StartAbilityState_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StateName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEndCurrentState;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2Q1S[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_StartAbilityState*                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	 */
	struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XA8D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_VisualizeTargeting*                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	 */
	struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JK3S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_VisualizeTargeting*                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	 */
	struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	 */
	struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	 */
	struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TagRequirements;                                         // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HJBJ[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityActivate*                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	 */
	struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1CBF[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityActivate*                    ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	 */
	struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTag;                                              // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OJ0B[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityActivate*                    ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	 */
	struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	 */
	struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XUI9[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityCommit*                      ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	 */
	struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTage;                                             // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KW85[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityCommit*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	 */
	struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	 */
	struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  InAttribute;                                             // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InWithTag;                                               // 0x0040(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InWithoutTag;                                            // 0x0048(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             InComparisonType;                                        // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T19V[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InComparisonValue;                                       // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MUV3[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitAttributeChange*                    ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	 */
	struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithSrcTag;                                              // 0x0040(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutSrcTag;                                           // 0x0048(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TDCC[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitAttributeChange*                    ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	 */
	struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeNumerator;                                      // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeDenominator;                                    // 0x0040(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             ComparisonType;                                          // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NVKB[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ComparisonValue;                                         // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTriggerOnce;                                            // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K5VM[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitAttributeChangeRatioThreshold*      ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	 */
	struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             ComparisonType;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K9ZY[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ComparisonValue;                                         // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTriggerOnce;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NKZU[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitAttributeChangeThreshold*           ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	 */
	struct UAbilityTask_WaitCancel_WaitCancel_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitCancel*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	 */
	struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	 */
	struct UAbilityTask_WaitCancel_OnCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	 */
	struct UAbilityTask_WaitConfirm_WaitConfirm_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitConfirm*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	 */
	struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
	{
	public:
		class UGameplayAbility*                                    InAbility;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	 */
	struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitConfirmCancel*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	 */
	struct UAbilityTask_WaitDelay_WaitDelay_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_66H7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitDelay*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
	{
	public:
		class UAbilitySystemComponent*                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x02A0(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     SourceFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   SourceTagQuery;                                          // 0x0018(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   TargetTagQuery;                                          // 0x0060(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RDPU[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffect;                                 // 0x00B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27AR[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Self*         ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     SourceFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0058(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VY8B[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffect;                                 // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DOP2[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Self*         ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     SourceFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   SourceTagQuery;                                          // 0x0018(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   TargetTagQuery;                                          // 0x0060(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6RTA[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffect;                                 // 0x00B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MIL5[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Target*       ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     TargetFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0058(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FEPB[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffects;                                // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R1A8[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Target*       ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	 */
	struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0048(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalExternalTarget;                                  // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PPQV[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectBlockedImmunity*      ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	 */
	struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitGameplayEffectRemoved*              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	 */
	struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
	{
	public:
		struct FGameplayEffectRemovalInfo                          InGameplayEffectRemovalInfo;                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	 */
	struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitGameplayEffectStackChange*          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	 */
	struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldCount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	 */
	struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalExternalTarget;                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyMatchExact;                                          // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KWXB[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEvent*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	 */
	struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	 */
	struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CS23[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayTagAdded*                   ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	 */
	struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4OY1[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayTagRemoved*                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	 */
	struct UAbilityTask_WaitInputPress_WaitInputPress_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestAlreadyPressed;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CWBF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitInputPress*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	 */
	struct UAbilityTask_WaitInputPress_OnPressCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	 */
	struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestAlreadyReleased;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8TK6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitInputRelease*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	 */
	struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	 */
	struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	 */
	struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              NewMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WCV7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitMovementModeChange*                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	 */
	struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitOverlap*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	 */
	struct UAbilityTask_WaitOverlap_OnHitCallback_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0030(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	 */
	struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9LL9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitTargetData*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	 */
	struct UAbilityTask_WaitTargetData_WaitTargetData_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TN7E[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Class;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitTargetData*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	 */
	struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	 */
	struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	 */
	struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinimumMagnitude;                                        // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_90HG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitVelocityChange*                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	 */
	struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
	{
	public:
		bool                                                       bShouldBlockAbilities;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	 */
	struct UGameplayAbility_SetCanBeCanceled_Params
	{
	public:
		bool                                                       bCanBeCanceled;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	 */
	struct UGameplayAbility_SendGameplayEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	 */
	struct UGameplayAbility_RemoveGrantedByEffect_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageStop
	 */
	struct UGameplayAbility_MontageStop_Params
	{
	public:
		float                                                      OverrideBlendOutTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	 */
	struct UGameplayAbility_MontageSetNextSectionName_Params
	{
	public:
		class FName                                                FromSectionName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToSectionName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	 */
	struct UGameplayAbility_MontageJumpToSection_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	 */
	struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C1WZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetingLocationInfo               ReturnValue;                                             // 0x0010(0x00A0)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	 */
	struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
	{
	public:
		struct FGameplayAbilityTargetingLocationInfo               ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	 */
	struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BCSL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	 */
	struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0048(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	 */
	struct UGameplayAbility_K2_RemoveGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	 */
	struct UGameplayAbility_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_HasAuthority
	 */
	struct UGameplayAbility_K2_HasAuthority_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	 */
	struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	 */
	struct UGameplayAbility_K2_ExecuteGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	 */
	struct UGameplayAbility_K2_EndAbilityLocally_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_EndAbility
	 */
	struct UGameplayAbility_K2_EndAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	 */
	struct UGameplayAbility_K2_CommitExecute_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	 */
	struct UGameplayAbility_K2_CommitAbilityCost_Params
	{
	public:
		bool                                                       BroadcastCommitEvent;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	 */
	struct UGameplayAbility_K2_CommitAbilityCooldown_Params
	{
	public:
		bool                                                       BroadcastCommitEvent;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceCooldown;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	 */
	struct UGameplayAbility_K2_CommitAbility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	 */
	struct UGameplayAbility_K2_CheckAbilityCost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	 */
	struct UGameplayAbility_K2_CheckAbilityCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CancelAbility
	 */
	struct UGameplayAbility_K2_CancelAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	 */
	struct UGameplayAbility_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0048(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QAF5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0050(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           EffectSpecHandle;                                        // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           EffectSpecHandle;                                        // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	 */
	struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameter;                                    // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bRemoveOnAbilityEnd;                                     // 0x00E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	 */
	struct UGameplayAbility_K2_AddGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bRemoveOnAbilityEnd;                                     // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	 */
	struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	 */
	struct UGameplayAbility_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.IsLocallyControlled
	 */
	struct UGameplayAbility_IsLocallyControlled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	 */
	struct UGameplayAbility_InvalidateClientPredictionKey_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
	 */
	struct UGameplayAbility_GetSourceObject_BP_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A2HV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	 */
	struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	 */
	struct UGameplayAbility_GetOwningActorFromActorInfo_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	 */
	struct UGameplayAbility_GetGrantedByEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	 */
	struct UGameplayAbility_GetCurrentSourceObject_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	 */
	struct UGameplayAbility_GetCurrentMontage_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	 */
	struct UGameplayAbility_GetCooldownTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	 */
	struct UGameplayAbility_GetContextFromOwner_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    OptionalTargetData;                                      // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	 */
	struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetActorInfo
	 */
	struct UGameplayAbility_GetActorInfo_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	 */
	struct UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params
	{
	public:
		class UAbilitySystemComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	 */
	struct UGameplayAbility_GetAbilityLevel_BP_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DWRG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	 */
	struct UGameplayAbility_GetAbilityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	 */
	struct UGameplayAbility_EndTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.EndAbilityState
	 */
	struct UGameplayAbility_EndAbilityState_Params
	{
	public:
		class FName                                                OptionalStateNameToEnd;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	 */
	struct UGameplayAbility_ConfirmTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEndTask;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	 */
	struct UGameplayAbility_CancelTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	 */
	struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	 */
	struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
	{
	public:
		struct FGameplayTagContainer                               WithGrantedTags;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	 */
	struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
	{
	public:
		struct FGameplayTagContainer                               WithAssetTags;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	 */
	struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              GameplayEffectClass;                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	 */
	struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	 */
	struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	 */
	struct AGameplayAbilityTargetActor_CancelTargeting_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	 */
	struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	 */
	struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	 */
	struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	 */
	struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	 */
	struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	 */
	struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
	{
	public:
		bool                                                       bFaceIn2D;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
	 */
	struct UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
	 */
	struct UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              ReturnValue;                                             // 0x00E8(0x00D8)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
	 */
	struct UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
	 */
	struct UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	 */
	struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	 */
	struct UGameplayCueInterface_BlueprintCustomHandler_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9078[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	 */
	struct AGameplayCueNotify_Actor_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	 */
	struct AGameplayCueNotify_Actor_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	 */
	struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	 */
	struct AGameplayCueNotify_Actor_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	 */
	struct AGameplayCueNotify_Actor_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	 */
	struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LH95[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	 */
	struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	 */
	struct UGameplayCueNotify_Static_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	 */
	struct UGameplayCueNotify_Static_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	 */
	struct UGameplayCueNotify_Static_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	 */
	struct UGameplayCueNotify_Static_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	 */
	struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CCCG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	 */
	struct UGameplayCueNotify_Burst_OnBurst_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	 */
	struct AGameplayCueNotify_BurstLatent_OnBurst_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	 */
	struct AGameplayCueNotify_Looping_OnRemoval_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	 */
	struct AGameplayCueNotify_Looping_OnRecurring_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	 */
	struct AGameplayCueNotify_Looping_OnLoopingStart_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	 */
	struct AGameplayCueNotify_Looping_OnApplication_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	 */
	struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0008(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             ASC;                                                     // 0x02A0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	 */
	struct UGameplayEffectExecutionCalculation_Execute_Params
	{
	public:
		struct FGameplayEffectCustomExecutionParameters            ExecutionParams;                                         // 0x0000(0x00F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectCustomExecutionOutput                OutExecutionOutput;                                      // 0x00F8(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	 */
	struct UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0298(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x02D0(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TargetTags;                                              // 0x02F0(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0310(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	 */
	struct UGameplayModMagnitudeCalculation_GetTargetSpecTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	 */
	struct UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	 */
	struct UGameplayModMagnitudeCalculation_GetTargetActorTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	 */
	struct UGameplayModMagnitudeCalculation_GetSourceSpecTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	 */
	struct UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	 */
	struct UGameplayModMagnitudeCalculation_GetSourceActorTags_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0298(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	 */
	struct UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0298(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02A0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	 */
	struct UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                MagnitudeName;                                           // 0x0298(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02A0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	 */
	struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0298(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	 */
	struct UGameplayTagReponseTable_TagResponseEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4B9R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    idx;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	 */
	struct UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Params
	{
	public:
		class FScriptDelegate                                      InGameplayCueTrackHandler;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
