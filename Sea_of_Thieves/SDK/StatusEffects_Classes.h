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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class StatusEffects.StatusBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UStatusBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_11UT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusResponse
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UStatusResponse : public UObject
	{
	public:
		unsigned char                                              UnknownData_VID1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActivateableSurfaceMaterialStatusZoneInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.AppliedStatusToSelfStatCondition
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAppliedStatusToSelfStatCondition : public UTargetedStatCondition
	{
	public:
		TArray<class UClass*>                                      Status;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		EStatusComparisonMode                                      ComparisonMode;                                          // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DHOH[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.BuffReceiverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBuffReceiverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.BuffReceiverComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UBuffReceiverComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OGMG[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CanReceiveBuff;                                          // 0x00D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2MRC[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.DebugMenuStatusDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UDebugMenuStatusDataAsset : public UDataAsset
	{
	public:
		TArray<struct FDebugMenuStatusDefinition>                  StatusDefinitions;                                       // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<float>                                              Durations;                                               // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.DebugStatusTicketHolder
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class ADebugStatusTicketHolder : public AActor
	{
	public:
		class AActor*                                              StatusRecipient;                                         // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectCancellationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectCancellationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectRecipientInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectRecipientInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectResponseConfigurationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectResponseConfigurationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectSuspensionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectSuspensionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusResponseAsset
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UStatusResponseAsset : public UDataAsset
	{
	public:
		class FText                                                HighFrequencyTriggerStatusHelper;                        // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit, EditConst
		unsigned char                                              UnknownData_BP61[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class UClass*>                                      TriggerStatus;                                           // 0x0060(0x0010) Edit, ZeroConstructor, UObjectWrapper
		TArray<class UStatusResponse*>                             Responses;                                               // 0x0070(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusRecipientResponseList
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UStatusRecipientResponseList : public UDataAsset
	{
	public:
		TArray<class UStatusResponseAsset*>                        ResponseAssets;                                          // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FFeatureToggledStatusResponseList>           FeatureToggledResponseLists;                             // 0x0038(0x0010) Edit, ZeroConstructor
		TArray<class UStatusResponseAsset*>                        FinalResponseAssets;                                     // 0x0048(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.LightWeightStatusEffectManagerComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class ULightWeightStatusEffectManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4FF1[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusRecipientResponseList*                        RecipientResponseList;                                   // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FActiveStatusEffect>                         ActiveEffects;                                           // 0x00F0(0x0010) Net, ZeroConstructor, RepNotify

	public:
		void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
		void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.MaterialStatusSusceptibilityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMaterialStatusSusceptibilityInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.SurfaceMaterialStatusZoneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USurfaceMaterialStatusZoneInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.MaterialStatusSusceptibilityComponent
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class UMaterialStatusSusceptibilityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_942V[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   CurrentSurfaceMaterial;                                  // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CurrentMaterialStatusZone[0x10];                         // 0x00D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty StatusEffects.MaterialStatusSusceptibilityComponent.CurrentMaterialStatusZone
		unsigned char                                              UnknownData_SZ2U[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.SphericalStatusEffectZone
	 * Size -> 0x00C0 (FullSize[0x0488] - InheritedSize[0x03C8])
	 */
	class ASphericalStatusEffectZone : public AActor
	{
	public:
		unsigned char                                              UnknownData_6D3H[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorActivationComponent*                           ActorActivationComponent;                                // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    SphereComponent;                                         // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectVolumeComponent*                        StatusEffectVolumeComponent;                             // 0x03E0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LAJ0[0xA0];                                  // 0x03E8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusApplicationDesc
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UStatusApplicationDesc : public UObject
	{
	public:
		struct FEventAppliedStatusToTargets                        ApplicationEvent;                                        // 0x0028(0x0028)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusApplicationMonitorComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UStatusApplicationMonitorComponent : public UActorComponent
	{
	public:
		class UClass*                                              StatusApplicationTrigger;                                // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectHelperFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectHelperFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status);
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectTicketDispenserInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectTicketDispenserInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectManagerComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UStatusEffectManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2CL9[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusRecipientResponseList*                        RecipientResponseList;                                   // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FActiveStatusEffect>                         ActiveEffects;                                           // 0x00F8(0x0010) Net, ZeroConstructor, RepNotify

	public:
		void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
		void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectOverlapZone
	 * Size -> 0x0020 (FullSize[0x04C0] - InheritedSize[0x04A0])
	 */
	class AStatusEffectOverlapZone : public ASimpleOverlapZone
	{
	public:
		TArray<struct FDelayedStatusEffect>                        StatusesToApplyOnOverlap;                                // 0x04A0(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_N4VH[0x10];                                  // 0x04B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectPersistenceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatusEffectPersistenceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectPersistenceComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UStatusEffectPersistenceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YV8K[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectsSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UStatusEffectsSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               DebugMenuStatusDefinitionsDataAsset;                     // 0x0038(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusEffectVolumeComponent
	 * Size -> 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
	 */
	class UStatusEffectVolumeComponent : public USceneComponent
	{
	public:
		bool                                                       UseOverlapEventsFromParentComponent;                     // 0x02E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MVUC[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatus>                                     StatusEffectsToMaintain;                                 // 0x02E8(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_T186[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnaffectActor(class AActor* Actor);
		void OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void AffectActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.SetCanReceiveBuffStatusResponse
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USetCanReceiveBuffStatusResponse : public UStatusResponse
	{
	public:
		bool                                                       LockBuffReceiver;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RevertOnDeactivate;                                      // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D2Z9[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatusEffects.StatusResponseNull
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseNull : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
