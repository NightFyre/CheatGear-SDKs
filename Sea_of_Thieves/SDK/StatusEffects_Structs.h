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
	 * Enum StatusEffects.EStatusComparisonMode
	 */
	enum class EStatusComparisonMode : uint8_t
	{
		Ordered   = 0,
		Unordered = 1,
		Partial   = 2,
		Any       = 3,
		MAX       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StatusEffects.StatusDescriptor
	 * Size -> 0x0004
	 */
	struct FStatusDescriptor
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.Status
	 * Size -> 0x0018
	 */
	struct FStatus
	{
	public:
		TArray<class UClass*>                                      Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper
		struct FStatusDescriptor                                   Descriptor;                                              // 0x0010(0x0004) Edit, BlueprintVisible
		unsigned char                                              UnknownData_LV96[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatusEffects.DebugMenuStatusDefinition
	 * Size -> 0x0020
	 */
	struct FDebugMenuStatusDefinition
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatus                                             Status;                                                  // 0x0008(0x0018) Edit
	};

	/**
	 * ScriptStruct StatusEffects.FeatureToggledStatusResponseList
	 * Size -> 0x0018
	 */
	struct FFeatureToggledStatusResponseList
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStatusResponseAsset*>                        ResponseAssets;                                          // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct StatusEffects.ActiveStatusEffect
	 * Size -> 0x0050
	 */
	struct FActiveStatusEffect
	{
	public:
		TArray<class UClass*>                                      SourceStatus;                                            // 0x0000(0x0010) ZeroConstructor, UObjectWrapper
		struct FStatusDescriptor                                   Descriptor;                                              // 0x0010(0x0004)
		unsigned char                                              UnknownData_Z74N[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusResponse*>                             ResponseTemplates;                                       // 0x0018(0x0010) ZeroConstructor
		TArray<class UStatusResponse*>                             InstancedResponses;                                      // 0x0028(0x0010) ZeroConstructor, RepSkip
		bool                                                       ResponsesAreActive;                                      // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P9DL[0x17];                                  // 0x0039(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatusEffects.EventAppliedStatusToTargets
	 * Size -> 0x0028
	 */
	struct FEventAppliedStatusToTargets
	{
	public:
		TArray<class UClass*>                                      StatusApplied;                                           // 0x0000(0x0010) ZeroConstructor, UObjectWrapper
		TArray<class AActor*>                                      Targets;                                                 // 0x0010(0x0010) ZeroConstructor
		class AActor*                                              StatusSource;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.DelayedStatusEffect
	 * Size -> 0x0020
	 */
	struct FDelayedStatusEffect
	{
	public:
		struct FStatus                                             StatusEffect;                                            // 0x0000(0x0018) Edit
		float                                                      InEffectTime;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ZXJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatusEffects.StatusEffectPersistenceKey
	 * Size -> 0x0018
	 */
	struct FStatusEffectPersistenceKey
	{
	public:
		struct FStatus                                             AppliedStatuses;                                         // 0x0000(0x0018)
	};

	/**
	 * ScriptStruct StatusEffects.ApplyStatusEvent
	 * Size -> 0x0018
	 */
	struct FApplyStatusEvent
	{
	public:
		struct FStatus                                             StatusToApply;                                           // 0x0000(0x0018)
	};

	/**
	 * ScriptStruct StatusEffects.BuffedTargetData
	 * Size -> 0x0018
	 */
	struct FBuffedTargetData
	{
	public:
		TWeakObjectPtr<class AActor>                               ActorBuffed;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              StatusEffectRecipient[0x10];                             // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty StatusEffects.BuffedTargetData.StatusEffectRecipient
	};

	/**
	 * ScriptStruct StatusEffects.StatusDeactivatedEvent
	 * Size -> 0x0018
	 */
	struct FStatusDeactivatedEvent
	{
	public:
		struct FGuid                                               Id;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                StatusName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.StatusActivatedEvent
	 * Size -> 0x0018
	 */
	struct FStatusActivatedEvent
	{
	public:
		struct FGuid                                               Id;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                StatusName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusMaterialEffectEnded
	 * Size -> 0x0014
	 */
	struct FEventStatusMaterialEffectEnded
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CanShowMaterialParam;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutAcceleration;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusMaterialEffectStarted
	 * Size -> 0x0030
	 */
	struct FEventStatusMaterialEffectStarted
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CanShowMaterialParam;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TintParamName;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TintColor;                                               // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetEffectStrength;                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInAcceleration;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusScreenEffectEnded
	 * Size -> 0x000C
	 */
	struct FEventStatusScreenEffectEnded
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutAcceleration;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectEnded
	 * Size -> 0x0008
	 */
	struct FEventStatusScreenSpaceParticleEffectEnded
	{
	public:
		class UObject*                                             ParticleSystem;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectStarted
	 * Size -> 0x0008
	 */
	struct FEventStatusScreenSpaceParticleEffectStarted
	{
	public:
		class UObject*                                             ParticleSystem;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventStatusScreenEffectStarted
	 * Size -> 0x0028
	 */
	struct FEventStatusScreenEffectStarted
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TintParamName;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TintColor;                                               // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetEffectStrength;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInAcceleration;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StatusEffects.EventExitedSurfaceMaterialStatusZone
	 * Size -> 0x0001
	 */
	struct FEventExitedSurfaceMaterialStatusZone
	{
	public:
		unsigned char                                              UnknownData_NN7N[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatusEffects.EventEnteredSurfaceMaterialStatusZone
	 * Size -> 0x0010
	 */
	struct FEventEnteredSurfaceMaterialStatusZone
	{
	public:
		unsigned char                                              EnteredZone[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty StatusEffects.EventEnteredSurfaceMaterialStatusZone.EnteredZone
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
