#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
	 */
	enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
	{
		CancelAbilityImmediately = 0,
		RemoveAbilityOnEnd       = 1,
		DoNothing                = 2,
		MAX                      = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
	 */
	enum class EGameplayEffectAttributeCaptureSource : uint8_t
	{
		Source = 0,
		Target = 1,
		MAX    = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityActivationMode
	 */
	enum class EGameplayAbilityActivationMode : uint8_t
	{
		Authority    = 0,
		NonAuthority = 1,
		Predicting   = 2,
		Confirmed    = 3,
		MAX          = 4
	};

	/**
	 * Enum GameplayAbilities.EAbilityGenericReplicatedEvent
	 */
	enum class EAbilityGenericReplicatedEvent : uint8_t
	{
		GenericConfirm          = 0,
		GenericCancel           = 1,
		InputPressed            = 2,
		InputReleased           = 3,
		GenericSignalFromClient = 4,
		GenericSignalFromServer = 5,
		GameCustom1             = 6,
		GameCustom2             = 7,
		GameCustom3             = 8,
		GameCustom4             = 9,
		GameCustom5             = 10,
		MAX                     = 11,
		MAX01                   = 12
	};

	/**
	 * Enum GameplayAbilities.ETargetDataFilterSelf
	 */
	enum class ETargetDataFilterSelf : uint8_t
	{
		TDFS_Any      = 0,
		TDFS_NoSelf   = 1,
		TDFS_NoOthers = 2,
		TDFS_MAX      = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayTagEventType
	 */
	enum class EGameplayTagEventType : uint8_t
	{
		NewOrRemoved   = 0,
		AnyCountChange = 1,
		MAX            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayCueEvent
	 */
	enum class EGameplayCueEvent : uint8_t
	{
		OnActive    = 0,
		WhileActive = 1,
		Executed    = 2,
		Removed     = 3,
		MAX         = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingType
	 */
	enum class EGameplayEffectStackingType : uint8_t
	{
		None              = 0,
		AggregateBySource = 1,
		AggregateByTarget = 2,
		MAX               = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayModOp
	 */
	enum class EGameplayModOp : uint8_t
	{
		Additive       = 0,
		Multiplicitive = 1,
		Division       = 2,
		Override       = 3,
		Max            = 4,
		MAX            = 5
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
	 */
	enum class EGameplayAbilityTargetingLocationType : uint8_t
	{
		LiteralTransform = 0,
		ActorTransform   = 1,
		SocketTransform  = 2,
		MAX              = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayTargetingConfirmation
	 */
	enum class EGameplayTargetingConfirmation : uint8_t
	{
		Instant       = 0,
		UserConfirmed = 1,
		Custom        = 2,
		CustomMulti   = 3,
		MAX           = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTriggerSource
	 */
	enum class EGameplayAbilityTriggerSource : uint8_t
	{
		GameplayEvent   = 0,
		OwnedTagAdded   = 1,
		OwnedTagPresent = 2,
		MAX             = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
	 */
	enum class EGameplayAbilityReplicationPolicy : uint8_t
	{
		ReplicateNo  = 0,
		ReplicateYes = 1,
		MAX          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
	 */
	enum class EGameplayAbilityNetExecutionPolicy : uint8_t
	{
		LocalPredicted  = 0,
		LocalOnly       = 1,
		ServerInitiated = 2,
		ServerOnly      = 3,
		MAX             = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
	 */
	enum class EGameplayAbilityInstancingPolicy : uint8_t
	{
		NonInstanced          = 0,
		InstancedPerActor     = 1,
		InstancedPerExecution = 2,
		MAX                   = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
	 */
	enum class EGameplayEffectStackingPeriodPolicy : uint8_t
	{
		ResetOnSuccessfulApplication = 0,
		NeverReset                   = 1,
		MAX                          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
	 */
	enum class EGameplayEffectStackingDurationPolicy : uint8_t
	{
		RefreshOnSuccessfulApplication = 0,
		NeverRefresh                   = 1,
		MAX                            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectDurationType
	 */
	enum class EGameplayEffectDurationType : uint8_t
	{
		Instant     = 0,
		Infinite    = 1,
		HasDuration = 2,
		MAX         = 3
	};

	/**
	 * Enum GameplayAbilities.EAttributeBasedFloatCalculationType
	 */
	enum class EAttributeBasedFloatCalculationType : uint8_t
	{
		AttributeMagnitude      = 0,
		AttributeBaseValue      = 1,
		AttributeBonusMagnitude = 2,
		MAX                     = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
	 */
	enum class EGameplayEffectMagnitudeCalculation : uint8_t
	{
		ScalableFloat          = 0,
		AttributeBased         = 1,
		CustomCalculationClass = 2,
		SetByCaller            = 3,
		MAX                    = 4
	};

	/**
	 * Enum GameplayAbilities.EAbilityTaskNetSyncType
	 */
	enum class EAbilityTaskNetSyncType : uint8_t
	{
		BothWait       = 0,
		OnlyServerWait = 1,
		OnlyClientWait = 2,
		MAX            = 3
	};

	/**
	 * Enum GameplayAbilities.ETargetAbilitySelfSelection
	 */
	enum class ETargetAbilitySelfSelection : uint8_t
	{
		TASS_Permit  = 0,
		TASS_Forbid  = 1,
		TASS_Require = 2,
		TASS_MAX     = 3
	};

	/**
	 * Enum GameplayAbilities.EWaitAttributeChangeComparison
	 */
	enum class EWaitAttributeChangeComparison : uint8_t
	{
		None                 = 0,
		GreaterThan          = 1,
		LessThan             = 2,
		GreaterThanOrEqualTo = 3,
		LessThanOrEqualTo    = 4,
		NotEqualTo           = 5,
		ExactlyEqualTo       = 6,
		MAX                  = 7,
		MAX01                = 8
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInputBinds
	 */
	enum class EGameplayAbilityInputBinds : uint8_t
	{
		Ability1 = 0,
		Ability2 = 1,
		Ability3 = 2,
		Ability4 = 3,
		Ability5 = 4,
		Ability6 = 5,
		Ability7 = 6,
		Ability8 = 7,
		Ability9 = 8,
		MAX      = 9
	};

	/**
	 * Enum GameplayAbilities.EGameplayCuePayloadType
	 */
	enum class EGameplayCuePayloadType : uint8_t
	{
		EffectContext = 0,
		CueParameters = 1,
		FromSpec      = 2,
		MAX           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContextHandle
	 * Size -> 0x0020
	 */
	struct FGameplayEffectContextHandle
	{
	public:
		unsigned char                                              UnknownData_5T9J[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueParameters
	 * Size -> 0x0088
	 */
	struct FGameplayCueParameters
	{
	public:
		float                                                      NormalizedMagnitude;                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RawMagnitude;                                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0020) BlueprintVisible
		class FName                                                MatchedTagName;                                          // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        OriginalTag;                                             // 0x0030(0x0008) BlueprintVisible
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0038(0x0028) BlueprintVisible
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0060(0x0028) BlueprintVisible
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
	 * Size -> 0x0010
	 */
	struct FGameplayAbilityTargetDataHandle
	{
	public:
		unsigned char                                              UnknownData_4TC9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
	 * Size -> 0x0020
	 */
	struct FGameplayEffectSpecHandle
	{
	public:
		unsigned char                                              UnknownData_PBUV[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEventData
	 * Size -> 0x00A0
	 */
	struct FGameplayEventData
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible
		class AActor*                                              Instigator;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Target;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             OptionalObject;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             OptionalObject2;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayEffectContextHandle                        ContextHandle;                                           // 0x0028(0x0020) Edit, BlueprintVisible
		struct FGameplayTagContainer                               InstigatorTags;                                          // 0x0048(0x0028) Edit, BlueprintVisible
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0070(0x0028) Edit, BlueprintVisible
		float                                                      EventMagnitude;                                          // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NWRJ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilter
	 * Size -> 0x0028
	 */
	struct FGameplayTargetDataFilter
	{
	public:
		unsigned char                                              UnknownData_PFJF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SelfActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETargetDataFilterSelf                                      SelfFilter;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_C3T2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredActorClass;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash
		bool                                                       bReverseFilter;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_EE4K[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
	 * Size -> 0x0018
	 */
	struct FGameplayTargetDataFilterHandle
	{
	public:
		unsigned char                                              UnknownData_EILN[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAttribute
	 * Size -> 0x0008
	 */
	struct FGameplayAttribute
	{
	public:
		class UProperty*                                           Attribute;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
	 * Size -> 0x0004
	 */
	struct FActiveGameplayEffectHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagRequirements
	 * Size -> 0x0050
	 */
	struct FGameplayTagRequirements
	{
	public:
		struct FGameplayTagContainer                               RequireTags;                                             // 0x0000(0x0028) Edit, BlueprintVisible
		struct FGameplayTagContainer                               IgnoreTags;                                              // 0x0028(0x0028) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
	 * Size -> 0x0070
	 */
	struct FGameplayAbilityTargetingLocationInfo
	{
	public:
		unsigned char                                              UnknownData_FXAU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayAbilityTargetingLocationType                      LocationType;                                            // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_SGMI[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LiteralTransform;                                        // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class AActor*                                              SourceActor;                                             // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UMeshComponent*                                      SourceComponent;                                         // 0x0058(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UGameplayAbility*                                    SourceAbility;                                           // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                SourceSocketName;                                        // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.ScalableFloat
	 * Size -> 0x0020
	 */
	struct FScalableFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RQYN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurveTableRowHandle                                Curve;                                                   // 0x0008(0x0010) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_QW92[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
	 * Size -> 0x0010
	 */
	struct FGameplayEffectAttributeCaptureDefinition
	{
	public:
		struct FGameplayAttribute                                  AttributeToCapture;                                      // 0x0000(0x0008) Edit, DisableEditOnInstance
		EGameplayEffectAttributeCaptureSource                      AttributeSource;                                         // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSnapshot;                                               // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7W56[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeBasedFloat
	 * Size -> 0x00D8
	 */
	struct FAttributeBasedFloat
	{
	public:
		struct FScalableFloat                                      Coefficient;                                             // 0x0000(0x0020) Edit, DisableEditOnInstance
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0020(0x0020) Edit, DisableEditOnInstance
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0040(0x0020) Edit, DisableEditOnInstance
		struct FGameplayEffectAttributeCaptureDefinition           BackingAttribute;                                        // 0x0060(0x0010) Edit, DisableEditOnInstance
		struct FCurveTableRowHandle                                AttributeCurve;                                          // 0x0070(0x0010) Edit, DisableEditOnInstance
		EAttributeBasedFloatCalculationType                        AttributeCalculationType;                                // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MJFG[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SourceTagFilter;                                         // 0x0088(0x0028) Edit, DisableEditOnInstance
		struct FGameplayTagContainer                               TargetTagFilter;                                         // 0x00B0(0x0028) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
	 * Size -> 0x0068
	 */
	struct FCustomCalculationBasedFloat
	{
	public:
		class UClass*                                              CalculationClassMagnitude;                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FScalableFloat                                      Coefficient;                                             // 0x0008(0x0020) Edit, DisableEditOnInstance
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0028(0x0020) Edit, DisableEditOnInstance
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0048(0x0020) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.SetByCallerFloat
	 * Size -> 0x0008
	 */
	struct FSetByCallerFloat
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
	 * Size -> 0x0170
	 */
	struct FGameplayEffectModifierMagnitude
	{
	public:
		EGameplayEffectMagnitudeCalculation                        MagnitudeCalculationType;                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9WIL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      ScalableFloatMagnitude;                                  // 0x0008(0x0020) Edit, DisableEditOnInstance, Protected
		struct FAttributeBasedFloat                                AttributeBasedMagnitude;                                 // 0x0028(0x00D8) Edit, DisableEditOnInstance, Protected
		struct FCustomCalculationBasedFloat                        CustomMagnitude;                                         // 0x0100(0x0068) Edit, DisableEditOnInstance, Protected
		struct FSetByCallerFloat                                   SetByCallerMagnitude;                                    // 0x0168(0x0008) Edit, DisableEditOnInstance, Protected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierInfo
	 * Size -> 0x0240
	 */
	struct FGameplayModifierInfo
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0008) Edit, DisableEditOnInstance
		EGameplayModOp                                             ModifierOp;                                              // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1MX8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      Magnitude;                                               // 0x0010(0x0020)
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0030(0x0170) Edit, DisableEditOnInstance
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x01A0(0x0050) Edit, DisableEditOnInstance
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x01F0(0x0050) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
	 * Size -> 0x0228
	 */
	struct FGameplayEffectExecutionScopedModifierInfo
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           CapturedAttribute;                                       // 0x0000(0x0010) Edit, DisableEditOnInstance, EditConst
		EGameplayModOp                                             ModifierOp;                                              // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W8RB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0018(0x0170) Edit, DisableEditOnInstance
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0188(0x0050) Edit, DisableEditOnInstance
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x01D8(0x0050) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
	 * Size -> 0x0050
	 */
	struct FGameplayEffectExecutionDefinition
	{
	public:
		class UClass*                                              CalculationClass;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FGameplayTagContainer                               PassedInTags;                                            // 0x0008(0x0028) Edit, DisableEditOnInstance
		TArray<struct FGameplayEffectExecutionScopedModifierInfo>  CalculationModifiers;                                    // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      ConditionalGameplayEffectClasses;                        // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCue
	 * Size -> 0x0038
	 */
	struct FGameplayEffectCue
	{
	public:
		struct FGameplayAttribute                                  MagnitudeAttribute;                                      // 0x0000(0x0008) Edit, DisableEditOnInstance
		float                                                      MinLevel;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxLevel;                                                // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0010(0x0028) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.InheritedTagContainer
	 * Size -> 0x0078
	 */
	struct FInheritedTagContainer
	{
	public:
		struct FGameplayTagContainer                               CombinedTags;                                            // 0x0000(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst
		struct FGameplayTagContainer                               Added;                                                   // 0x0028(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance
		struct FGameplayTagContainer                               Removed;                                                 // 0x0050(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
	 * Size -> 0x0004
	 */
	struct FGameplayAbilitySpecHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
	 * Size -> 0x0028
	 */
	struct FGameplayAbilitySpecDef
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InputID;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		EGameplayEffectGrantedAbilityRemovePolicy                  RemovalPolicy;                                           // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_179A[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceObject;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		struct FGameplayAbilitySpecHandle                          AssignedHandle;                                          // 0x0020(0x0004)
		unsigned char                                              UnknownData_A0WB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.PredictionKey
	 * Size -> 0x0018
	 */
	struct FPredictionKey
	{
	public:
		int16_t                                                    Current;                                                 // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int16_t                                                    Base;                                                    // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X04X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPackageMap*                                         PredictiveConnection;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsStale;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bIsServerInitiated;                                      // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLS7[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
	 * Size -> 0x0020
	 */
	struct FGameplayAbilityActivationInfo
	{
	public:
		EGameplayAbilityActivationMode                             ActivationMode;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanBeEndedByOtherInstance;                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJI8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKeyWhenActivated;                              // 0x0008(0x0018)
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityTriggerData
	 * Size -> 0x000C
	 */
	struct FAbilityTriggerData
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008) Edit
		EGameplayAbilityTriggerSource                              TriggerSource;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OPN5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
	 * Size -> 0x0038
	 */
	struct FGameplayAbilityActorInfo
	{
	public:
		unsigned char                                              UnknownData_LMVQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               OwnerActor;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class AActor>                               AvatarActor;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class APlayerController>                    PlayerController;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UAbilitySystemComponent>              AbilitySystemComponent;                                  // 0x0020(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UAnimInstance>                        AnimInstance;                                            // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UMovementComponent>                   MovementComponent;                                       // 0x0030(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeDefaults
	 * Size -> 0x0010
	 */
	struct FAttributeDefaults
	{
	public:
		class UClass*                                              Attributes;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UDataTable*                                          DefaultStartingTable;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpec
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilitySpec : public FFastArraySerializerItem
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0008(0x0004)
		unsigned char                                              UnknownData_QFDJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayAbility*                                    Ability;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Level;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InputID;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             SourceObject;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InputPressed;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              ActiveCount;                                             // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		bool                                                       RemoveAfterActivation;                                   // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_RPVV[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0030(0x0020) RepSkip
		TArray<class UGameplayAbility*>                            NonReplicatedInstances;                                  // 0x0050(0x0010) ZeroConstructor, RepSkip
		TArray<class UGameplayAbility*>                            ReplicatedInstances;                                     // 0x0060(0x0010) ZeroConstructor
		struct FActiveGameplayEffectHandle                         GameplayEffectHandle;                                    // 0x0070(0x0004) RepSkip
		bool                                                       PendingRemove;                                           // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_5Y5S[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FGameplayAbilitySpecContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FGameplayAbilitySpec>                        Items;                                                   // 0x00A8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_JMIV[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityRepAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Position;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              NextSectionID;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IsStopped : 1;                                           // 0x0015(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              ForcePlayBit : 1;                                        // 0x0015(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_WOTN[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0018)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityLocalAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayBit;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0ZF3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0018)
		class UGameplayAbility*                                    AnimatingAbility;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
	 * Size -> 0x0010
	 */
	struct FGameplayEffectModifiedAttribute
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0008)
		float                                                      TotalMagnitude;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0AYH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
	 * Size -> 0x0028
	 */
	struct FGameplayEffectAttributeCaptureSpec
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           BackingDefinition;                                       // 0x0000(0x0010)
		unsigned char                                              UnknownData_KNEY[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
	 * Size -> 0x0028
	 */
	struct FGameplayEffectAttributeCaptureSpecContainer
	{
	public:
		TArray<struct FGameplayEffectAttributeCaptureSpec>         SourceAttributes;                                        // 0x0000(0x0010) ZeroConstructor
		TArray<struct FGameplayEffectAttributeCaptureSpec>         TargetAttributes;                                        // 0x0010(0x0010) ZeroConstructor
		bool                                                       bHasNonSnapshottedAttributes;                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WP8H[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.TagContainerAggregator
	 * Size -> 0x00A8
	 */
	struct FTagContainerAggregator
	{
	public:
		struct FGameplayTagContainer                               CapturedActorTags;                                       // 0x0000(0x0028)
		struct FGameplayTagContainer                               CapturedSpecTags;                                        // 0x0028(0x0028)
		struct FGameplayTagContainer                               ScopedTags;                                              // 0x0050(0x0028)
		unsigned char                                              UnknownData_XXJB[0x30];                                  // 0x0078(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ModifierSpec
	 * Size -> 0x0004
	 */
	struct FModifierSpec
	{
	public:
		float                                                      EvaluatedMagnitude;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpec
	 * Size -> 0x02A0
	 */
	struct FGameplayEffectSpec
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0008(0x0010) ZeroConstructor
		struct FGameplayEffectAttributeCaptureSpecContainer        CapturedRelevantAttributes;                              // 0x0018(0x0028) RepSkip
		unsigned char                                              UnknownData_GA7N[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Period;                                                  // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceToApplyToTarget;                                   // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAAU[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagContainerAggregator                             CapturedSourceTags;                                      // 0x0060(0x00A8) RepSkip
		struct FTagContainerAggregator                             CapturedTargetTags;                                      // 0x0108(0x00A8) RepSkip
		struct FGameplayTagContainer                               DynamicGrantedTags;                                      // 0x01B0(0x0028)
		struct FGameplayTagContainer                               DynamicAssetTags;                                        // 0x01D8(0x0028)
		TArray<struct FModifierSpec>                               Modifiers;                                               // 0x0200(0x0010) ZeroConstructor
		int32_t                                                    StackCount;                                              // 0x0210(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bCompletedSourceAttributeCapture : 1;                    // 0x0214(0x0001) BIT_FIELD RepSkip, NoDestructor
		unsigned char                                              bCompletedTargetAttributeCapture : 1;                    // 0x0214(0x0001) BIT_FIELD RepSkip, NoDestructor
		unsigned char                                              bDurationLocked : 1;                                     // 0x0214(0x0001) BIT_FIELD RepSkip, NoDestructor
		unsigned char                                              UnknownData_ESHD[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecDef>                     GrantedAbilitySpecs;                                     // 0x0218(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_9SO0[0x50];                                  // 0x0228(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0278(0x0020)
		float                                                      Level;                                                   // 0x0298(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V86K[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffect
	 * Size -> 0x02F8 (FullSize[0x0300] - InheritedSize[0x0008])
	 */
	struct FActiveGameplayEffect : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_1CRY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0010(0x02A0)
		struct FPredictionKey                                      PredictionKey;                                           // 0x02B0(0x0018)
		float                                                      StartServerWorldTime;                                    // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CachedStartServerWorldTime;                              // 0x02CC(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		float                                                      StartWorldTime;                                          // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInhibited;                                            // 0x02D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TY1F[0x2B];                                  // 0x02D5(0x002B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
	 * Size -> 0x02C0 (FullSize[0x0368] - InheritedSize[0x00A8])
	 */
	struct FActiveGameplayEffectsContainer : public FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_CBAV[0x20];                                  // 0x00A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffect>                       GameplayEffects_Internal;                                // 0x00C8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_3EP8[0x290];                                 // 0x00D8(0x0290) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCue
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FActiveGameplayCue : public FFastArraySerializerItem
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0008(0x0008)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0018)
		bool                                                       bPredictivelyRemoved;                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_HJNV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FActiveGameplayCueContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FActiveGameplayCue>                          GameplayCues;                                            // 0x00A8(0x0010) ZeroConstructor
		class UAbilitySystemComponent*                             Owner;                                                   // 0x00B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
	 * Size -> 0x0090
	 */
	struct FGameplayEffectSpecForRPC
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0008(0x0010) ZeroConstructor
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0018(0x0020)
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0038(0x0028)
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0060(0x0028)
		float                                                      Level;                                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36B1[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.WorldReticleParameters
	 * Size -> 0x000C
	 */
	struct FWorldReticleParameters
	{
	public:
		struct FVector                                             AOEScale;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
	 * Size -> 0x0010
	 */
	struct FGameplayAbilityBindInfo
	{
	public:
		EGameplayAbilityInputBinds                                 Command;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NFH9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameplayAbilityClass;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCuePendingExecute
	 * Size -> 0x0148
	 */
	struct FGameplayCuePendingExecute
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)
		EGameplayCuePayloadType                                    PayloadType;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_44A3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OwningComponent;                                         // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayEffectSpecForRPC                           FromSpec;                                                // 0x0030(0x0090)
		struct FGameplayCueParameters                              CueParameters;                                           // 0x00C0(0x0088)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueNotifyData
	 * Size -> 0x0028
	 */
	struct FGameplayCueNotifyData
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) Edit
		struct FStringAssetReference                               GameplayCueNotifyObj;                                    // 0x0008(0x0010) Edit, ZeroConstructor
		class UClass*                                              LoadedGameplayCueClass;                                  // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y8A2[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
	 * Size -> 0x0088
	 */
	struct FGameplayEffectCustomExecutionParameters
	{
	public:
		unsigned char                                              UnknownData_SUE2[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
	 * Size -> 0x0018
	 */
	struct FGameplayModifierEvaluatedData
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0008)
		EGameplayModOp                                             ModifierOp;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6V0U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Magnitude;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0010(0x0004)
		bool                                                       IsValid;                                                 // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKF3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
	 * Size -> 0x0018
	 */
	struct FGameplayEffectCustomExecutionOutput
	{
	public:
		TArray<struct FGameplayModifierEvaluatedData>              OutputModifiers;                                         // 0x0000(0x0010) ZeroConstructor
		unsigned char                                              bTriggerConditionalGameplayEffects : 1;                  // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bHandledStackCountManually : 1;                          // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bHandledGameplayCuesManually : 1;                        // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_HS9S[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagReponsePair
	 * Size -> 0x0010
	 */
	struct FGameplayTagReponsePair
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit
		class UClass*                                              ResponseGameplayEffect;                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
	 * Size -> 0x0020
	 */
	struct FGameplayTagResponseTableEntry
	{
	public:
		struct FGameplayTagReponsePair                             Positive;                                                // 0x0000(0x0010) Edit
		struct FGameplayTagReponsePair                             Negative;                                                // 0x0010(0x0010) Edit
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeMetaData
	 * Size -> 0x0028
	 */
	struct FAttributeMetaData : public FTableRowBase
	{
	public:
		float                                                      BaseValue;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinValue;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxValue;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8WTO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DerivedAttributeInfo;                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       bCanStack;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSYM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GlobalCurveDataOverride
	 * Size -> 0x0010
	 */
	struct FGlobalCurveDataOverride
	{
	public:
		unsigned char                                              UnknownData_81XW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContext
	 * Size -> 0x0060
	 */
	struct FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_QOG8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper
		TWeakObjectPtr<class UAbilitySystemComponent>              InstigatorAbilitySystemComponent;                        // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper
		TArray<TWeakObjectPtr<class AActor>>                       Actors;                                                  // 0x0028(0x0010) ZeroConstructor, Protected, UObjectWrapper
		unsigned char                                              UnknownData_4KQL[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldOrigin;                                             // 0x0050(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bHasWorldOrigin;                                         // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_OGLO[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData
	 * Size -> 0x0008
	 */
	struct FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_V6IO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0080) ContainsInstancedReference
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_4E9P[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<TWeakObjectPtr<class AActor>>                       TargetActorArray;                                        // 0x0080(0x0010) Edit, ZeroConstructor, UObjectWrapper
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_EGSM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference
		struct FGameplayAbilityTargetingLocationInfo               TargetLocation;                                          // 0x0080(0x0070) Edit, BlueprintVisible, ContainsInstancedReference
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
	 * Size -> 0x0008
	 */
	struct FGameplayAbilitySpecHandleAndPredictionKey
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)
		int32_t                                                    PredictionKeyAtCreation;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
	 * Size -> 0x0050
	 */
	struct FActiveGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_OWBS[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectQuery
	 * Size -> 0x00D0
	 */
	struct FGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_WNJ7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CustomMatchDelegate_BP;                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor
		struct FGameplayTagQuery                                   OwningTagQuery;                                          // 0x0018(0x0048) Edit, BlueprintVisible
		struct FGameplayTagQuery                                   EffectTagQuery;                                          // 0x0060(0x0048) Edit, BlueprintVisible
		struct FGameplayAttribute                                  ModifyingAttribute;                                      // 0x00A8(0x0008) Edit, BlueprintVisible
		class UObject*                                             EffectSource;                                            // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameplayEffect*                                     EffectDefinition;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQXQ[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
