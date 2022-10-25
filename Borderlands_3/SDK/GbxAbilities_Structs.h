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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxAbilities.EAbilityResourceDelegateType
	 */
	enum class EAbilityResourceDelegateType : uint8_t
	{
		None                         = 0,
		OnResourceNowDepleted        = 1,
		OnResourceNowNotDepleted     = 2,
		OnResourceNowFilled          = 3,
		OnResourceNowNotFilled       = 4,
		OnResourceNowRegenerating    = 5,
		OnResourceNowNotRegenerating = 6,
		OnResourceNowDepleting       = 7,
		OnResourceNowNotDepleting    = 8,
		OnResourceNowIdle            = 9,
		MAX                          = 10
	};

	/**
	 * Enum GbxAbilities.EGbxAbilityState
	 */
	enum class EGbxAbilityState : uint8_t
	{
		Unactivated = 0,
		Deactivated = 1,
		Paused      = 2,
		Active      = 3,
		MAX         = 4
	};

	/**
	 * Enum GbxAbilities.EGbxAbilityDurationType
	 */
	enum class EGbxAbilityDurationType : uint8_t
	{
		Timed      = 0,
		Indefinite = 1,
		Infinite   = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxAbilities.GbxAbilityEffect
	 * Size -> 0x0020
	 */
	struct FGbxAbilityEffect
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxAbilityEffectTargetResolutionData*>       TargetResolutionStrategies;                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityEffectInstanceTarget
	 * Size -> 0x0030
	 */
	struct FGbxAbilityEffectInstanceTarget
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStatusEffectManagerComponent*                       TargetStatusEffectManagerComponent;                      // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStatusEffectInstanceReference                      StatusEffectInstanceReference;                           // 0x0010(0x0018) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9OO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityEffectInstance
	 * Size -> 0x0070
	 */
	struct FGbxAbilityEffectInstance
	{
	public:
		class UGbxAbility*                                         Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStatusEffectSpec                                   StatusEffectSpec;                                        // 0x0008(0x0038) NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGbxAbilityEffectInstanceTarget>             Targets;                                                 // 0x0040(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxAbilityEffectTargetResolutionData*>       TargetResolutionStrategies;                              // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KH3[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilitySpec
	 * Size -> 0x0010
	 */
	struct FGbxAbilitySpec
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxAbilityDurationType                                    DurationType;                                            // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CH1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationInitializerData;                                 // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityManagerComponentDeferredOperation
	 * Size -> 0x0028
	 */
	struct FGbxAbilityManagerComponentDeferredOperation
	{
	public:
		unsigned char                                              UnknownData_K8BW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilitySpec                                     AddSpec;                                                 // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVRP[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RemoveSpec;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityManagerComponentListLock
	 * Size -> 0x0020
	 */
	struct FGbxAbilityManagerComponentListLock
	{
	public:
		class UGbxAbilityManagerComponent*                         Owner;                                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGbxAbilityManagerComponentDeferredOperation> DeferredOps;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FY04[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceController
	 * Size -> 0x0018
	 */
	struct FGbxAbilityResourceController
	{
	public:
		unsigned char                                              UnknownData_5WV8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAbility*                                         Owner;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1FRI[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceController_ResourcePoolDelegate
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FGbxAbilityResourceController_ResourcePoolDelegate : public FGbxAbilityResourceController
	{
	public:
		unsigned char                                              UnknownData_WE33[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceSpec
	 * Size -> 0x0010
	 */
	struct FGbxAbilityResourceSpec
	{
	public:
		class UGbxAbility*                                         AbilityContext;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWhenActive;                                             // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWhenPaused;                                             // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJFA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ResourcePoolDelegate
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate : public FGbxAbilityResourceSpec
	{
	public:
		class UGameResourcePoolManagerComponent*                   ResourcePoolComponent;                                   // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameResourcePoolData*                               ResourcePoolData;                                        // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAbilityResourceDelegateType                               DelegateType;                                            // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76A4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDelegateProperty*                                   DelegateEventProperty;                                   // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceController_ConditionalDamageModifier
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FGbxAbilityResourceController_ConditionalDamageModifier : public FGbxAbilityResourceController
	{
	public:
		unsigned char                                              UnknownData_GHHH[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ConditionalDamageModifier
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier : public FGbxAbilityResourceSpec
	{
	public:
		class UDamageBaseComponent*                                DamageComponent;                                         // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConditionalDamageModifier*                          DamageModifier;                                          // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ContextOverride;                                         // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceController_ScriptDelegate
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FGbxAbilityResourceController_ScriptDelegate : public FGbxAbilityResourceController
	{
	public:
		unsigned char                                              UnknownData_YNC6[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ScriptDelegate
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FGbxAbilityResourceSpec_ScriptDelegate : public FGbxAbilityResourceSpec
	{
	public:
		class UObject*                                             TargetContext;                                           // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMulticastDelegateProperty*                          TargetProperty;                                          // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDelegateProperty*                                   DelegateEventProperty;                                   // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
