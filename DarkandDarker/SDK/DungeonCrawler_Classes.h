#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class DungeonCrawler.AccountLink
	 * Size -> 0x0328 (FullSize[0x0350] - InheritedSize[0x0028])
	 */
	class UAccountLink : public UObject
	{
	public:
		unsigned char                                              UnknownData_PZO7[0x328];                                 // 0x0028(0x0328) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AccountLinkAll
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UAccountLinkAll : public UObject
	{
	public:
		unsigned char                                              UnknownData_GYU0[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AccountSession
	 * Size -> 0x01D0 (FullSize[0x01F8] - InheritedSize[0x0028])
	 */
	class UAccountSession : public UObject
	{
	public:
		unsigned char                                              UnknownData_58BP[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DDKH[0x170];                                 // 0x0088(0x0170) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDataAssetBase
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDCDataAssetBase : public UPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   AssetType;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ActorStatusUIData
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UActorStatusUIData : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataPlayerCharacter
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UArtDataPlayerCharacter : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          PlayerCharacterIconTexture;                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerCharacterImageTexture;                             // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerCharacterManIllustImageTexture;                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerCharacterWomanIllustImageTexture;                  // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Portrait;                                                // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Illustration;                                            // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataMonster
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataMonster : public UDCDataAssetBase
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataAoe
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataAoe : public UDCDataAssetBase
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataProps
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UArtDataProps : public UDCDataAssetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataItem
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UArtDataItem : public UDCDataAssetBase
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACH5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ItemIconTexture;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       ItemSkeletalMesh;                                        // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemMaterialInfo>                           ItemSkeletalMeshMaterialInfoArray;                       // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ItemStaticMesh;                                          // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemMaterialInfo>                           ItemStaticMeshMaterialInfoArray;                         // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataAnimatedItem
	 * Size -> 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
	 */
	class UArtDataAnimatedItem : public UArtDataItem
	{
	public:
		struct FAnimationSet                                       AnimationSet;                                            // 0x0078(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FAnimationSet>            ConditionalAnimationSet;                                 // 0x00B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                EquipmentSocket;                                         // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SheathSocket;                                            // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataWeapon
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UArtDataWeapon : public UArtDataAnimatedItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataArmor
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UArtDataArmor : public UArtDataItem
	{
	public:
		TArray<EDCMorphTarget>                                     MorphTargets;                                            // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataUtility
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UArtDataUtility : public UArtDataAnimatedItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataAccessory
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UArtDataAccessory : public UArtDataItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataMisc
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UArtDataMisc : public UArtDataItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataProjectile
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataProjectile : public UDCDataAssetBase
	{
	public:
		float                                                      DestroyTime;                                             // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ERB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataSkill
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UArtDataSkill : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          SkillIconTexture;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastStart;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastReady;                                               // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastFire;                                                // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      ChannelingStart;                                         // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataSpell
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UArtDataSpell : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          SpellIconTexture;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastStart;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastReady;                                               // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      CastFire;                                                // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      ChannelingStart;                                         // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataPerk
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataPerk : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          PerkIconTexture;                                         // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataMerchant
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataMerchant : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          MerchantIconTexture;                                     // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ArtDataEmote
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UArtDataEmote : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          EmoteIconTexture;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskAttributeChanged
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAsyncTaskAttributeChanged : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnAttributeChanged;                                      // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D1FS[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskAttributeChanged* STATIC_ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FGameplayAttribute> Attributes);
		class UAsyncTaskAttributeChanged* STATIC_ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute);
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskCooldownChanged
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAsyncTaskCooldownChanged : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnCooldownBegin;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCooldownEnd;                                           // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F1DN[0x28];                                  // 0x0058(0x0028) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskCooldownChanged* STATIC_ListenForCooldownChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& CooldownTags, bool UseServerCooldown);
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskEffectInhibitionChanged
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAsyncTaskEffectInhibitionChanged : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnGameplayEffectInhibitionChange;                        // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LE8Z[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskEffectInhibitionChanged* STATIC_ListenForGameplayInhibitionChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag);
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskEffectStackChanged
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnGameplayEffectStackChange;                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TST5[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskEffectStackChanged* STATIC_ListenForGameplayEffectStackChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag);
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskWaitGAActivated
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UAsyncTaskWaitGAActivated : public UAbilityAsync
	{
	public:
		unsigned char                                              UnknownData_11YH[0xA0];                                  // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActivate;                                              // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROLA[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskWaitGAActivated* STATIC_WaitForAbilityActivateWithTagRequirements(class AActor* TargetActor, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
		class UAsyncTaskWaitGAActivated* STATIC_WaitForAbilityActivate_Query(class AActor* TargetActor, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
		class UAsyncTaskWaitGAActivated* STATIC_WaitForAbilityActivate(class AActor* TargetActor, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
		void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskWaitGAEnded
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UAsyncTaskWaitGAEnded : public UAbilityAsync
	{
	public:
		unsigned char                                              UnknownData_PHD6[0xA0];                                  // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAbilityEndedDelegate;                                  // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73YY[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskWaitGAEnded* STATIC_WaitForAbilityEndWithTagRequirements(class AActor* TargetActor, const struct FGameplayTagRequirements& TagRequirements, bool TriggerOnce);
		class UAsyncTaskWaitGAEnded* STATIC_WaitForAbilityEnd_Query(class AActor* TargetActor, const struct FGameplayTagQuery& Query, bool TriggerOnce);
		class UAsyncTaskWaitGAEnded* STATIC_WaitForAbilityEnd(class AActor* TargetActor, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool TriggerOnce);
		void OnAbilityEnded(const struct FAbilityEndedData& AbilityEndedData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AsyncTaskWaitGameplayEvent
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UAsyncTaskWaitGameplayEvent : public UAbilityAsync
	{
	public:
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R115[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskWaitGameplayEvent* STATIC_WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
		void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.AttackInputManagerComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UAttackInputManagerComponent : public UActorComponent
	{
	public:
		class UAsyncTaskWaitGameplayEvent*                         AsyncGameplayEventWaitTask;                              // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAsyncTaskWaitGAActivated*                           AsyncGAActivateTask;                                     // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAsyncTaskWaitGAEnded*                               AsyncGAEndTask;                                          // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, struct FGameplayTag>             CurrentTriggerMap;                                       // 0x00C8(0x0050) Protected, NativeAccessSpecifierProtected

	public:
		void SetAttackEnabled(bool bIsAttackEnabled);
		void OnAbilityEnded(const struct FAbilityEndedData& AbilityEndedData);
		void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
		void HandleAttackInput(const struct FGameplayTag& InputTag);
		struct FGameplayTag GetCurrentTriggerTag(const struct FGameplayTag& TriggerTag);
		void EventReceived(const struct FGameplayEventData& EventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTDecorator_DCGameBlackboard
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	class UBTDecorator_DCGameBlackboard : public UBTDecorator_Blackboard
	{
	public:
		unsigned char                                              UnknownData_77KS[0x60];                                  // 0x00C0(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTDecorator_DCGameCheckGameState
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	class UBTDecorator_DCGameCheckGameState : public UBTDecorator_DCGameBlackboard
	{
	public:
		EGameStateType                                             PrevGameStateType;                                       // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZCPN[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTD_CheckGameplayTagsOnActorAbortObservers
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UBTD_CheckGameplayTagsOnActorAbortObservers : public UBTDecorator_CheckGameplayTagsOnActor
	{
	public:
		unsigned char                                              UnknownData_78TO[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTD_RandomCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTD_RandomCooldown : public UBTDecorator
	{
	public:
		float                                                      MinCoolDownTime;                                         // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCoolDownTime;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitCoolDownTime;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RLV[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTService_DCGameBase
	 * Size -> 0x0060 (FullSize[0x00D0] - InheritedSize[0x0070])
	 */
	class UBTService_DCGameBase : public UBTService
	{
	public:
		unsigned char                                              UnknownData_O095[0x60];                                  // 0x0070(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameBase
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class UBTTask_DCGameBase : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_GCXT[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBTNodeResult                                              Result;                                                  // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_069Z[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntervalCountdown                                  TickInterval;                                            // 0x00CC(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BVTW[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameAnnounce
	 * Size -> 0x0098 (FullSize[0x0178] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameAnnounce : public UBTTask_DCGameBase
	{
	public:
		struct FGameAnnounceInfo                                   GameAnnounceInfo;                                        // 0x00E0(0x0098) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameAnnounceArray
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameAnnounceArray : public UBTTask_DCGameBase
	{
	public:
		TArray<struct FGameAnnounceInfo>                           GameAnnounceInfoArray;                                   // 0x00E0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IOXP[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameCheckGameStart
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameCheckGameStart : public UBTTask_DCGameBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameExecuteGameResult
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameExecuteGameResult : public UBTTask_DCGameBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameExitAllPlayer
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameExitAllPlayer : public UBTTask_DCGameBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameFloorRule
	 * Size -> 0x0060 (FullSize[0x0140] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameFloorRule : public UBTTask_DCGameBase
	{
	public:
		class UDCFloorRuleDataAsset*                               RuleData;                                                // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarmupDuration;                                          // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5BUG[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADeathSwarmBase*                                     DeathSwarm;                                              // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDCFloorRuleManager                                 FloorRuleManager;                                        // 0x00F8(0x0038) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PAQC[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameServerTravel
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameServerTravel : public UBTTask_DCGameBase
	{
	public:
		class FString                                              ServerTravelURL;                                         // 0x00E0(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ServerTravelFloor;                                       // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PEOH[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTTask_DCGameState
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UBTTask_DCGameState : public UBTTask_DCGameBase
	{
	public:
		EGameStateType                                             GameState;                                               // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4JL8[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTT_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UBTT_BlueprintBase : public UBTTask_BlueprintBase
	{
	public:
		void OnTaskFinished(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult TaskResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.BTT_CustomRunBehavior
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UBTT_CustomRunBehavior : public UBTTask_RunBehavior
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreateAttributeWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCharacterCreateAttributeWidgetData : public UObject
	{
	public:
		struct FGameplayEffectDescData                             AttrributeEffectDescData;                                // 0x0028(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRGL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCWidgetBase
	 * Size -> 0x0060 (FullSize[0x02F0] - InheritedSize[0x0290])
	 */
	class UDCWidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_6W79[0x58];                                  // 0x0290(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x02E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgOwner(class UScriptStruct* InMsgType);
		void UnbindMsgAllOwner();
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		bool IsSpectating();
		void GetOwningBaseInterfaceBlueprint();
		void BroadcastMsgBlueprint(int32_t InMsg);
		void BindMsgOwner(class UScriptStruct* InMsgType, class UBindMsgNode* InMsgDynamicDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreateAttributeWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UCharacterCreateAttributeWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9Z30[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreateClassItemWidgetData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCharacterCreateClassItemWidgetData : public UObject
	{
	public:
		EDCCharacterClass                                          CharacterClass;                                          // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCGender                                                  Gender;                                                  // 0x0029(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelected;                                               // 0x002A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOY0[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreateClassItemWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UCharacterCreateClassItemWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_RNV2[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x02F8(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          Icon;                                                    // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          Portrait;                                                // 0x0318(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelected;                                               // 0x0320(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BHO2[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreatePerkItemWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UCharacterCreatePerkItemWidget : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterCreateWidget
	 * Size -> 0x0070 (FullSize[0x0360] - InheritedSize[0x02F0])
	 */
	class UCharacterCreateWidget : public UDCWidgetBase
	{
	public:
		EDCCharacterClass                                          SelectedCharacterClass;                                  // 0x02F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDCGender                                                  SelectedGender;                                          // 0x02F1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CYQX[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SelectedCharacterClassName;                              // 0x02F8(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                SelectedCharacterClassDialog;                            // 0x0310(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                SelectedCharacterClassInfo;                              // 0x0328(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          SelectedCharacterIllustration;                           // 0x0340(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           ClassSelectTileView;                                     // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           ClassAttributeTileView;                                  // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    NickNameTextBox;                                         // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnTextChangedNickName(const class FText& InNickName);
		void OnGenderClicked(EDCGender Gender);
		void HandleExitButtonClicked();
		void HandleConfirmButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDataComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UDCDataComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2KUH[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     AssetId;                                                 // 0x00C8(0x0010) Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCDataAssetBase*                                    DataAsset;                                               // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnRep_AssetId(const struct FPrimaryAssetId& PrevAssetId);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterDataComponent
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UDCCharacterDataComponent : public UDCDataComponent
	{
	public:
		unsigned char                                              UnknownData_MWR2[0x20];                                  // 0x00E0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterPartsComponent
	 * Size -> 0x00F8 (FullSize[0x01A8] - InheritedSize[0x00B0])
	 */
	class UDCCharacterPartsComponent : public UActorComponent
	{
	public:
		class UDCCharacterPartsArtData*                            Data;                                                    // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, class USkeletalMeshComponent*>   BodyParts;                                               // 0x00B8(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, class USkeletalMeshComponent*>   ArmorParts;                                              // 0x0108(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, struct FDesignDataItem>          ArmorItems;                                              // 0x0158(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectCharacterListWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCharacterSelectCharacterListWidgetData : public UObject
	{
	public:
		struct FCharacterSlotData                                  CharacterSlotData;                                       // 0x0028(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectCharListWidget
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UCharacterSelectCharListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VA0N[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UListView*                                           CharacterSlotListView;                                   // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentPageIndex;                                        // 0x0300(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxCharacterCount;                                       // 0x0304(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxPageIndex;                                            // 0x0308(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KNTE[0x14];                                  // 0x030C(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnSelectedCharacterId(const class FString& CharacterId);
		void OnPageNumber(int32_t CurrentPage, int32_t MaxPage);
		void OnListRightButtonClicked();
		void OnListLeftButtonClicked();
		void OnCharacterSlotListViewItemClicked(class UObject* Obj);
		void OnCharacterSlotData(const struct FCharacterSlotData& NewValue, const struct FCharacterSlotData& OldValue);
		void HandleCharacterDeleteClicked();
		void HandleCharacterCreateClicked();
		class UCharacterSelectCharacterSlotWidgetData* GetSelectedCharacterWidgetData();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectCharacterSlotWidgetData
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UCharacterSelectCharacterSlotWidgetData : public UObject
	{
	public:
		struct FCharacterSlot                                      CharacterSlot;                                           // 0x0028(0x0090) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectCharSlotWidget
	 * Size -> 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
	 */
	class UCharacterSelectCharSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_4VC8[0x98];                                  // 0x02F0(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnFMsgWidgetStreamingModeNotifyBlueprint(const struct FMsgWidgetStreamingModeNotify& InMsg);
		void OnCharacterSlot(const struct FCharacterSlot& NewValue, const struct FCharacterSlot& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectGroupWidgetBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UCharacterSelectGroupWidgetBase : public UDCWidgetBase
	{
	public:
		EWidgetCharacterSelectGroupType                            WidgetCharacterSelectGroupType;                          // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X5FW[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWidgetCharacterSelectGroupType>                    NonCoexistWidgetCharacterSelectGroupTypeArray;           // 0x02F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z4Z1[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterSelectWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UCharacterSelectWidget : public UDCWidgetBase
	{
	public:
		class UCharacterSelectCharListWidget*                      CharacterSelectCharListWidget;                           // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void HandleOptionButtonClicked();
		void HandleLobbyButtonClicked();
		void HandleExitButtonClicked();
		void HandleCreditsButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterStatusDetailWidget
	 * Size -> 0x0610 (FullSize[0x0900] - InheritedSize[0x02F0])
	 */
	class UCharacterStatusDetailWidget : public UDCWidgetBase
	{
	public:
		struct FCharacterStatusDetailWidgetData                    WidgetData;                                              // 0x02F0(0x0498) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0788(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RIWO[0x130];                                 // 0x0790(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LinkedAccountId;                                         // 0x08C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x08D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveTable*                                         CurveTablePhysicalPower;                                 // 0x08E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveTable*                                         CurveTableArmorRating;                                   // 0x08E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveTable*                                         CurveTableMagicalPower;                                  // 0x08F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveTable*                                         CurveTableMagicResistance;                               // 0x08F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCastingSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSecondaryWeaponImpactPower(float NewValue, float OldValue);
		void OnSecondaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnRegularInteractionSpeedBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnRegularInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnProjectileReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPrimaryWeaponImpactPower(float NewValue, float OldValue);
		void OnPrimaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void OnPrestigeItemDrop(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalHealBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageWeaponSecondary(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageWeaponPrimary(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageTrue(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageModPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeedWithModifier(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeedMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeedBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeedAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalHealBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageTrue(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnItemEquipSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnImpactPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHeadshotReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnDebuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnBuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnArmorPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnActionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CharacterStatusWidget
	 * Size -> 0x01B0 (FullSize[0x04A0] - InheritedSize[0x02F0])
	 */
	class UCharacterStatusWidget : public UDCWidgetBase
	{
	public:
		struct FCharacterStatusWidgetData                          WidgetData;                                              // 0x02F0(0x0180) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0470(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_47FH[0x8];                                   // 0x0478(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LinkedAccountId;                                         // 0x0480(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0490(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimitAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectivenessAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacityAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthBase(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealthAdd(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ChatEditWidgetBase
	 * Size -> 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
	 */
	class UChatEditWidgetBase : public UDCWidgetBase
	{
	public:
		class URichTextBlock*                                      RichTextBlock;                                           // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEditableText*                                     EditableText;                                            // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFP6[0x68];                                  // 0x0300(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnTextCommitted(const class FText& InText, ETextCommit InCommitMethod);
		void OnTextChanged(const class FText& InText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ChatSetWidgetBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UChatSetWidgetBase : public UDCWidgetBase
	{
	public:
		class UListView*                                           ChatListView;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChatEditWidgetBase*                                 ChatEditWidget;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2DDV[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetChatKeyboardFocus();
		void OnChatEditFocus(bool InbFocus);
		void OnChatDataCommitted(const struct FChatData& InChatData);
		void OnChatDataChanged(const class FText& InText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ChatWidgetData
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UChatWidgetData : public UObject
	{
	public:
		EChatWidgetType                                            ChatWidgetType;                                          // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0N7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateTime;                                                // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0058(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              PartyId;                                                 // 0x0078(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChatDataPiece>                              ChatDataPieceArray;                                      // 0x0088(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EContextOptionType>                                 ContextOptionArray;                                      // 0x0098(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ChatWidgetBase
	 * Size -> 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
	 */
	class UChatWidgetBase : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_GDIC[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChatWidgetData*                                     ChatWidgetData;                                          // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3H1D[0x78];                                  // 0x0308(0x0078) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		void OnChatRecordData(const struct FChatRecord& NewValue, const struct FChatRecord& OldValue);
		class FString FilterStreamingMode(const class FString& OriginalStr);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassGroupWidgetBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UClassGroupWidgetBase : public UDCWidgetBase
	{
	public:
		EWidgetClassGroupType                                      WidgetClassGroupType;                                    // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EIUW[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWidgetClassGroupType>                              NonCoexistWidgetWidgetClassGroupTypeArray;               // 0x02F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9V12[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassIconGroupWidget
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UClassIconGroupWidget : public UDCWidgetBase
	{
	public:
		class UCommonTileView*                                     ClassIconCommonTileView;                                 // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             ClassIconSelectedDelegate;                               // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassIconWidgetData
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UClassIconWidgetData : public UObject
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharacterClassId;                                        // 0x002C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GK0Q[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDesignDataPlayerCharacter                          DesignDataPlayerCharacter;                               // 0x0040(0x00C8) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassIconWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UClassIconWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_P92T[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnClickedClassIconButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PerkListWidgetBase
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class UPerkListWidgetBase : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LinkedAccountId;                                         // 0x02F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0308(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassPerkListWidgetBase
	 * Size -> 0x0048 (FullSize[0x0360] - InheritedSize[0x0318])
	 */
	class UClassPerkListWidgetBase : public UPerkListWidgetBase
	{
	public:
		TArray<class UPerkWidget*>                                 PerkWidgetArray;                                         // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C099[0x4];                                   // 0x0328(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x032C(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M3CR[0x24];                                  // 0x033C(0x0024) MISSED OFFSET (PADDING)

	public:
		void SetSelectedSlotIndex(int32_t InSlotIndex);
		void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg);
		void OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg);
		void OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint(const struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify& InMsg);
		struct FPrimaryAssetId GetSelectedSlotPerkId();
		int32_t GetSelectedSlotIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectAttributeItemWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UClassSelectAttributeItemWidgetData : public UObject
	{
	public:
		struct FGameplayEffectDescData                             AttrributeEffectDescData;                                // 0x0028(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWED[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectAttributeItemWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UClassSelectAttributeItemWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NMBC[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectItemWidgetData
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UClassSelectItemWidgetData : public UObject
	{
	public:
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDesignDataPlayerCharacter                          DesignDataPlayerCharacter;                               // 0x0038(0x00C8) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bSelected;                                               // 0x0100(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVLV[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectItemWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UClassSelectItemWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XTA6[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectPerkItemWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UClassSelectPerkItemWidgetData : public UObject
	{
	public:
		class FString                                              PerkId;                                                  // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectPerkItemWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UClassSelectPerkItemWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_BYH0[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSelectWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UClassSelectWidget : public UDCWidgetBase
	{
	public:
		class UTileView*                                           ClassSelectTileView;                                     // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           ClassAttributeTileView;                                  // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UListView*                                           ClassPerkTileView;                                       // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ClassSelectButton;                                       // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C4Y9[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccountLink*                                        AccountLink;                                             // 0x0320(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPlayerCharacterId(const struct FPrimaryAssetId& NewValue, const struct FPrimaryAssetId& OldValue);
		void OnClassSelectButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SkillListWidgetBase
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class USkillListWidgetBase : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LinkedAccountId;                                         // 0x02F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0308(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSkillListWidgetBase
	 * Size -> 0x0038 (FullSize[0x0350] - InheritedSize[0x0318])
	 */
	class UClassSkillListWidgetBase : public USkillListWidgetBase
	{
	public:
		TArray<class USkillWidget*>                                SkillWidgetArray;                                        // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P22P[0x4];                                   // 0x0328(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x032C(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     MaxSkillSlotCountConstant;                               // 0x033C(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9WT6[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSelectedSlotIndex(int32_t InSlotIndex);
		void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg);
		void OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg);
		void OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint(const struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify& InMsg);
		struct FPrimaryAssetId GetSelectedSlotSkillId();
		int32_t GetSelectedSlotIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellSlotWidgetBase
	 * Size -> 0x0100 (FullSize[0x03F0] - InheritedSize[0x02F0])
	 */
	class USpellSlotWidgetBase : public UDCWidgetBase
	{
	public:
		struct FSpellData                                          SpellData;                                               // 0x02F0(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZF0[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDesignDataSpell                                    DesignDataSpell;                                         // 0x0320(0x00B0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FText>                                        DescTextArray;                                           // 0x03D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UArtDataSpell*                                       ArtData;                                                 // 0x03E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x03E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G79J[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSpellData(const struct FSpellData& InSpellData, const struct FDesignDataSpell& InDesignDataSpell);
		void Reset();
		void OnSpellDataChanged(const struct FSpellData& InSpellData, const struct FDesignDataSpell& InDesignDataSpell);
		void OnSetSpellArtData(class UArtDataSpell* InArtSpellData);
		void OnReset();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellCapacitySlotWidget
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class USpellCapacitySlotWidget : public USpellSlotWidgetBase
	{
	public:
		int32_t                                                    SequenceIndex;                                           // 0x03F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60IF[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSpellCapacitySlotWidget
	 * Size -> 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
	 */
	class UClassSpellCapacitySlotWidget : public USpellCapacitySlotWidget
	{
	public:
		class FText                                                SequenceText;                                            // 0x03F8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellCapacityWidgetBase
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class USpellCapacityWidgetBase : public UDCWidgetBase
	{
	public:
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_2;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_3;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_4;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_5;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_6;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_7;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_8;                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_9;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_10;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellCapacitySlotWidget*                            SpellCapacitySlot_11;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class USpellCapacitySlotWidget*>                    SpellCapacitySlots;                                      // 0x0340(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      SpellCurrentCapacity;                                    // 0x0350(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpellMaxCapacity;                                        // 0x0354(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnSpellCapacityChanged(float InSpellCurrentCapacity, float InSpellMaxCapacity);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSpellCapacityWidget
	 * Size -> 0x00B8 (FullSize[0x0410] - InheritedSize[0x0358])
	 */
	class UClassSpellCapacityWidget : public USpellCapacityWidgetBase
	{
	public:
		class UImage*                                              CapacityGauge_2;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_3;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_4;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_5;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_6;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_7;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_8;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_9;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_10;                                        // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CapacityGauge_11;                                        // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UImage*>                                      CapacityGauges;                                          // 0x03A8(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_2;                                        // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_3;                                        // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_4;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_5;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_6;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_7;                                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_8;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_9;                                        // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpacer*                                             CapacitySpacer_10;                                       // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class USpacer*>                                     CapacitySpacers;                                         // 0x0400(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void OnSpellListChanged(TArray<struct FSpellData> InSpellDataArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSpellEquippedWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UClassSpellEquippedWidget : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameGroupWidgetBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameGroupWidgetBase : public UDCWidgetBase
	{
	public:
		bool                                                       bShowCursor;                                             // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x02F1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BJWM[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWidgetGameGroupType>                               NonCoexistWidgetGameGroupTypeArray;                      // 0x02F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7NJ4[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellListWidgetBase
	 * Size -> 0x0040 (FullSize[0x0350] - InheritedSize[0x0310])
	 */
	class USpellListWidgetBase : public UGameGroupWidgetBase
	{
	public:
		class USpellSlotWidgetBase*                                SpellSlot_2;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellSlotWidgetBase*                                SpellSlot_3;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellSlotWidgetBase*                                SpellSlot_4;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellSlotWidgetBase*                                SpellSlot_5;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpellSlotWidgetBase*                                SpellSlot_6;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class USpellSlotWidgetBase*>                        SpellSlots;                                              // 0x0338(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		EWidgetSpellSlotsType                                      WidgetSlotType;                                          // 0x0348(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SLUG[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSpellListWidget
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UClassSpellListWidget : public USpellListWidgetBase
	{
	public:
		void OnShowEquippableSlot();
		void OnHideEquippableSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassSpellSkillListWidgetBase
	 * Size -> 0x0030 (FullSize[0x0348] - InheritedSize[0x0318])
	 */
	class UClassSpellSkillListWidgetBase : public USkillListWidgetBase
	{
	public:
		TArray<class USkillWidget*>                                SkillWidgetArray;                                        // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x0328(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     MaxSkillSlotCountConstant;                               // 0x0338(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg);
		void OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassTabMenuWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UClassTabMenuWidget : public UDCWidgetBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             ShowSpellTabClasses;                                     // 0x02F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void OnLobbyCharacterInfoUpdated_BP(const struct FPrimaryAssetId& CharacterClassId);
		void OnLobbyCharacterInfoUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentPerkandSkillItemWidgetData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UClassUnEquipmentPerkandSkillItemWidgetData : public UObject
	{
	public:
		struct FPrimaryAssetId                                     ID;                                                      // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Selected;                                                // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPBX[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UClassUnEquipmentPerkandSkillListWidget : public UDCWidgetBase
	{
	public:
		class UTileView*                                           PerkTileView;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           SkillTileView;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FPrimaryAssetId GetSelectedSkillId();
		struct FPrimaryAssetId GetSelectedPerkId();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentSpellItemWidgetData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UClassUnEquipmentSpellItemWidgetData : public UObject
	{
	public:
		struct FPrimaryAssetId                                     ID;                                                      // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Selected;                                                // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RKO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentSpellListWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UClassUnEquipmentSpellListWidget : public UDCWidgetBase
	{
	public:
		class UListView*                                           SpellListView;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentSpellTierItemWidgetData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UClassUnEquipmentSpellTierItemWidgetData : public UObject
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5YJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             SpellIds;                                                // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClassUnEquipmentSpellTierListWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UClassUnEquipmentSpellTierListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_M11P[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TierNumber;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          CostNumber;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           SpellTileView;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SubSystemReplyMsg
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USubSystemReplyMsg : public UObject
	{
	public:
		unsigned char                                              UnknownData_P1ID[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CreateAt;                                                // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTJO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClientAccountSubsystem
	 * Size -> 0x0410 (FullSize[0x0440] - InheritedSize[0x0030])
	 */
	class UClientAccountSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_T478[0x270];                                 // 0x0030(0x0270) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int16_t, class USubSystemReplyMsg*>                   ResponseLambdaPointerMap;                                // 0x02A0(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AALP[0x20];                                  // 0x02F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTcpSocket*                                          TcpSocketObject;                                         // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QCEW[0x128];                                 // 0x0318(0x0128) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClientPartySubsystem
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UClientPartySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_YHD8[0x190];                                 // 0x0030(0x0190) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ClientShopSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UClientShopSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_84W8[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommemorativePlaqueTextWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UCommemorativePlaqueTextWidget : public UDCWidgetBase
	{
	public:
		void UpdateCommenorativePlaqueText(TArray<class FText> InText, const struct FVector& Location);
		void SnedWidgetToggleMsg();
		void SetCommemorativePlaqueText(const struct FPrimaryAssetId& ScriptId, const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCommonButtonBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCCommonButtonBase : public UDCWidgetBase
	{
	public:
		class UButton*                                             Btn_Common;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCommonButtonClick;                                     // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ClickSound;                                              // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetButtonText(const class FText& InButtonText);
		void PlayClickSound();
		void OnCommonButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonButtonLWidget
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UCommonButtonLWidget : public UDCCommonButtonBase
	{
	public:
		class UTextBlock*                                          Text_Title_Able;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Text_Title_Disable;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     Switcher_OnOff;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSwitchOn(bool bSetOn);
		void SetDisableTitleText(const class FText& InText);
		void SetAbleTitleText(const class FText& InText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonButtonMWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCommonButtonMWidget : public UDCCommonButtonBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonButtonPopupWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCommonButtonPopupWidget : public UDCCommonButtonBase
	{
	public:
		class UTextBlock*                                          Txt_BtnNormal;                                           // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Txt_BtnOn;                                               // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetOnText(const class FString& TextTitleOn);
		void SetNormalText(const class FString& TextTitleNormal);
		void SetAllText(const class FString& TextTitle);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonButtonSWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCommonButtonSWidget : public UDCCommonButtonBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonButtonXLWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCommonButtonXLWidget : public UDCCommonButtonBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PopupDataBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPopupDataBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_I596[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonPopupBase
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UCommonPopupBase : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonPopupManageWidget
	 * Size -> 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
	 */
	class UCommonPopupManageWidget : public UDCWidgetBase
	{
	public:
		class UCanvasPanel*                                        PopupCanvas;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              DefaultPopupWidgetClass;                                 // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int32_t, struct FMsgPopup>                            ReplyPointerMap;                                         // 0x0300(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JO2U[0x18];                                  // 0x0350(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PopupDataSWidget
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UPopupDataSWidget : public UPopupDataBase
	{
	public:
		EPopupButtonType                                           PopupButtonType;                                         // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAQ2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DescMessage;                                             // 0x0038(0x0018) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CommonPopupSWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UCommonPopupSWidget : public UCommonPopupBase
	{
	public:
		class UCommonButtonPopupWidget*                            Btn_Two_Left;                                            // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            Btn_Two_Right;                                           // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            Btn_Single;                                              // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPopupDataSWidget*                                   PopupDataSWidget;                                        // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnRemovePopup();
		void OnCreatePopup(const struct FPopupSWidgetData& PopupSWidgetData);
		void HandleSingleButtonClicked();
		void HandleRightButtonClicked();
		void HandleLeftButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContainerInventoryGroupWidget
	 * Size -> 0x00B8 (FullSize[0x03A8] - InheritedSize[0x02F0])
	 */
	class UContainerInventoryGroupWidget : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LinkedAccountId;                                         // 0x02F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0308(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<TWeakObjectPtr<class UInventoryComponent>>          InventoryArray;                                          // 0x0318(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W0QJ[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelWidget*                                        ContainerInventoryParent;                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ItemCountSelectWidgetClass[0x28];                        // 0x0348(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class UContainerInventoryWidget*>                   ContainerInventoryWidgetArray;                           // 0x0370(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              ContainerInventoryWidgetClass;                           // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ReadOnlyContainerInventoryWidgetClass;                   // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetInventoryGroupType                                  InventoryGroupType;                                      // 0x0390(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DET7[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryCountChanged;                                 // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ResetContainerInventoryWidgets();
		void OnPopItemSelectWidget(const struct FItemData& ItemData, const struct FVector2D& DropScreenPos, class AActor* OldOwnerActor);
		void OnItemDropDetected(const struct FItemData& ItemData, const struct FVector2D& DropScreenPos, class AActor* OldOwnerActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContainerInventoryWidget
	 * Size -> 0x0108 (FullSize[0x03F8] - InheritedSize[0x02F0])
	 */
	class UContainerInventoryWidget : public UDCWidgetBase
	{
	public:
		class UGridPanel*                                          ContainerSlotGridPanel;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            ContainerItemOvelay;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ContainerSlotWidgetClass;                                // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ContainerSlotSize;                                       // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIBR[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FContainerSlotArrayData>              ContainerSlotWidgetMap;                                  // 0x0310(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UInventoryComponent>                  InvenotryComponent;                                      // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ItemWidgetClass;                                         // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0378(0x0010) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<int64_t, class UItemWidget*>                          ItemWidgetMap;                                           // 0x0388(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    ContainerRowCount;                                       // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ContainerColumnCount;                                    // 0x03DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DragDetectedContainerSlotId;                             // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OPK7[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UContainerSlotWidget*>                        OverlapContainerSlots;                                   // 0x03E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void UpdateItemCanBeSet(const struct FItemData& InItemData, int32_t SlotId);
		void OnRemoveItem(const struct FItemData& InItemData);
		void OnMoveItem(const struct FItemData& OldItemData, const struct FItemData& NewItemData);
		void OnItemWidgetDropOrLeave();
		void OnItemDragDetected(const struct FItemData& ItemData, const struct FVector2D& DragScreenPos);
		class UItemWidget* OnAddItem(const struct FItemData& InItemData);
		void InitializeContainerInventoryWidget(class UInventoryComponent* InInventoryComponent, class UAccountLink* InAccountLink);
		int32_t GetSlotIdByScreenPosition(const struct FVector2D& ScreenPos);
		bool CanSetItemAt(const struct FItemData& ItemData, int32_t SlotId);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContainerSlotWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UContainerSlotWidget : public UDCWidgetBase
	{
	public:
		struct FLinearColor                                        ItemSetColor;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidSlotColor;                                        // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidSlotColor;                                          // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasItem;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3NG4[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnSetNewItem(bool bFullfilledAll);
		void OnRemoveItem();
		void OnOverlapItemWidget(bool bCanSetItem);
		void OnLeaveItemWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContextMenuHolderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UContextMenuHolderInterface : public UInterface
	{
	public:
		void OnRightClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContextMenuWidgetBase
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UContextMenuWidgetBase : public UDCWidgetBase
	{
	public:
		class UListView*                                           ListView_ContextOptions;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            Overlay_ContextMenu;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetPosition;                                            // 0x0300(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MN2R[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetContextMenuWidgetPosition();
		void RequestCloseMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContextOptionListEntryWidgetData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UContextOptionListEntryWidgetData : public UObject
	{
	public:
		EContextOptionType                                         ContextOption;                                           // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3RJ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ContextOptionListEntryWidgetBase
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UContextOptionListEntryWidgetBase : public UDCCommonButtonBase
	{
	public:
		unsigned char                                              UnknownData_MZC2[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSelect();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemWidget
	 * Size -> 0x00C0 (FullSize[0x03B0] - InheritedSize[0x02F0])
	 */
	class UItemWidget : public UDCWidgetBase
	{
	public:
		class UImage*                                              ItemIconImage;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USizeBox*                                            ItemIconSizeBox;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               ItemOwnedActor;                                          // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WidgetOriginalSize;                                      // 0x0308(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MG0Z[0x14];                                  // 0x030C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemWidgetData                                     WidgetData;                                              // 0x0320(0x0090) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void SetItemOwnerActor(class AActor* InItemOwnedActor);
		void SetItemIcon(class UTexture2D* ItemIconTexture, const struct FItemInventorySize& ItemInventorySize);
		void SetItemData(const struct FItemData& NewItemData);
		void OnSetItemRequirementsFulfilledStatus(bool bFufilled, const struct FPrimaryAssetId& PlayerCharacterId, class UDCAttributeSet* AttributeSet, TArray<struct FPrimaryAssetId> PerkIdArray);
		void OnItemData(const struct FItemData& NewItemData, const struct FItemData& OldItemData);
		class UImage* GetItemIconImage();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ControllableItemWidget
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class UControllableItemWidget : public UItemWidget
	{
	public:
		void QuickMoveItem();
		struct FEventReply OnRightMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, bool bInventoryDropButtonPressed, bool bInventorySplitButtonPressed);
		struct FEventReply OnLeftMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnLeftMouseButtonDoubleClick();
		void DropOneItem();
		void DropAllItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCrashReport
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDCCrashReport : public UObject
	{
	public:
		unsigned char                                              UnknownData_8AOP[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCActorBase
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class ADCActorBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_MZXJ[0x58];                                  // 0x0278(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x02D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void ReceivePreInitializeComponents();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAbilityActorBase
	 * Size -> 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
	 */
	class ADCAbilityActorBase : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_V5UK[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInteractableActorBase
	 * Size -> 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
	 */
	class ADCInteractableActorBase : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_M8QX[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractableTargetComponent*                        InteractableTargetComponent;                             // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
		void InteractStarted(class AActor* Interacter, const struct FGameplayTag& EventTag);
		void InteractLost(class AActor* Interacter);
		void InteractFound(class AActor* Interacter, class UPrimitiveComponent* InteractPart);
		void InteractFailed(class AActor* Interacter, const struct FGameplayTag& EventTag);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAbilityInteractableActorBase
	 * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
	 */
	class ADCAbilityInteractableActorBase : public ADCInteractableActorBase
	{
	public:
		unsigned char                                              UnknownData_GCM7[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAbilitySystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCAbilitySystemBlueprintLibrary : public UAbilitySystemBlueprintLibrary
	{
	public:
		bool STATIC_SetMovementStateGameplayTag(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		bool STATIC_SetModeGameplayTag(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		bool STATIC_SetAnimationStateGameplayTag(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		void STATIC_SendGameplayEventToActorOverride(class AActor* Actor, const struct FGameplayTag& EventTag, TArray<struct FDCGameplayEffectData> InOverrideGameplayEffectDataArray);
		void STATIC_RemoveLooseGameplayTagAll(class AActor* InActor, const struct FGameplayTag& GameplayTag);
		bool STATIC_RemoveGameplayTag(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		void STATIC_RemoveGameplayCueLocal(class AActor* InActor, const struct FGameplayTag& GameplayCueTag);
		void STATIC_RemoveGameplayCue(class AActor* InActor, const struct FGameplayTag& GameplayCueTag);
		struct FGameplayTag STATIC_ParseOptionGameplayTag(const class FString& InOptionStr, const class FString& InOptionKey);
		bool STATIC_MatchesQuery(class AActor* InActor, const struct FGameplayTagQuery& InTagQuery);
		bool STATIC_IsMatchingAbilityActivated(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		TArray<struct FGameplayAbilitySpecHandle> STATIC_GiveAbilities(class UObject* SourceObject, class AActor* InActor, TArray<struct FDCGameplayAbilityData> InGameplayAbilityDataArray);
		void STATIC_GetSocketLocationBySocketName(const class FName& SocketName, class UObject* Object, class AActor* AvatarActor, struct FVector* OutSocketLocation);
		float STATIC_GetSetByCallerValueInContainerSpecArray(const struct FGameplayTag& InEventTag, const struct FGameplayTag& InSetByCallerDataTag, TArray<struct FDCGameplayEffectContainerSpec> InEffectHandle);
		float STATIC_GetSetByCallerValueInContainer(const struct FGameplayTag& InEventTag, const struct FGameplayTag& InSetByCallerDataTag, TArray<struct FDCGameplayEffectContainer> InEffectContainer);
		void STATIC_GetOwnedGameplayTags(class AActor* InActor, struct FGameplayTagContainer* TagContainer);
		int32_t STATIC_GetMatchingAbilityActivatedCount(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		void STATIC_GetItemDataFromDesignData(const struct FDesignDataItem& InDesignDataItem, struct FItemData* OutItemData);
		struct FGameplayTagContainer STATIC_GetGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle);
		float STATIC_GetGameplayEffectSetByCallerValue(const struct FGameplayTag& InSetByCallerTag, int32_t InSetByCallerValue);
		void STATIC_GetGameplayEffectDescDataItem(const struct FDesignDataItem& InDesignDataItem, const struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, const struct FItemDataGameplayEffect& InItemDataGameplayEffect, TArray<struct FGameplayEffectDescData>* OutGameplayEffectDescDataArray);
		void STATIC_GetGameplayEffectDescData(const struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, TArray<struct FGameplayEffectDescData>* OutGameplayEffectDescDataArray);
		void STATIC_GetGameplayEffectData(const struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct FDCGameplayEffectData* OutGameplayEffectData);
		void STATIC_GetEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayEffectSpec* OutEffectSpec);
		class FName STATIC_GetCurrentMontageSectionName(class AActor* InActor);
		class FText STATIC_GetAttributeDisplayName(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute);
		float STATIC_GetActorAttributeValue(class AActor* InActor, const struct FGameplayAttribute& InAttribute);
		class USkeletalMeshComponent* STATIC_FindSocketOwningMeshComponent(const class FName& SocketName, class UObject* Object, class AActor* AvatarActor);
		void STATIC_ExecuteGameplayCueLocal(class AActor* InActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void STATIC_ExecuteGameplayCue(class AActor* InActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void STATIC_EffectContextSetSoundDataPrimaryAssetId(const struct FGameplayEffectContextHandle& EffectContext, const struct FPrimaryAssetId& PrimaryAssetId);
		struct FPrimaryAssetId STATIC_EffectContextGetSoundDataPrimaryAssetId(const struct FGameplayEffectContextHandle& EffectContext);
		class USoundData* STATIC_EffectContextGetSoundData(const struct FGameplayEffectContextHandle& EffectContext);
		void STATIC_DCEffectContextSetSoundDataPrimaryAssetId(const struct FDCGameplayEffectContext& EffectContext, const struct FPrimaryAssetId& PrimaryAssetId);
		void STATIC_DCEffectContextSetOrigin(const struct FDCGameplayEffectContext& EffectContext, const struct FVector& Origin);
		bool STATIC_DCEffectContextHasHitResult(const struct FDCGameplayEffectContext& EffectContext);
		class UObject* STATIC_DCEffectContextGetSourceObject(const struct FDCGameplayEffectContext& EffectContext);
		struct FPrimaryAssetId STATIC_DCEffectContextGetSoundDataPrimaryAssetId(const struct FDCGameplayEffectContext& EffectContext);
		class AActor* STATIC_DCEffectContextGetOriginalInstigatorActor(const struct FDCGameplayEffectContext& EffectContext);
		struct FVector STATIC_DCEffectContextGetOrigin(const struct FDCGameplayEffectContext& EffectContext);
		class AActor* STATIC_DCEffectContextGetInstigatorActor(const struct FDCGameplayEffectContext& EffectContext);
		struct FHitResult STATIC_DCEffectContextGetHitResult(const struct FDCGameplayEffectContext& EffectContext);
		class AActor* STATIC_DCEffectContextGetEffectCauser(const struct FDCGameplayEffectContext& EffectContext);
		void STATIC_DCEffectContextAddHitResult(const struct FDCGameplayEffectContext& EffectContext, const struct FHitResult& HitResult, bool bReset);
		void STATIC_ClearAllAbilities(class AActor* InActor);
		void STATIC_CancelAllAbilities(class AActor* InActor);
		TArray<struct FActiveGameplayEffectHandle> STATIC_ApplyPremadeSpecArray(class AActor* InActor, const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData);
		TArray<struct FActiveGameplayEffectHandle> STATIC_ApplyGameplayEffects(class AActor* InActor, TArray<struct FDCGameplayEffectData> InGameplayEffectDataArray, class AActor* InSourceActor);
		TArray<struct FActiveGameplayEffectHandle> STATIC_ApplyGameplayEffectByIds(class AActor* InActor, TArray<struct FPrimaryAssetId> InGameplayEffectIdArray, class AActor* InSourceActor);
		struct FActiveGameplayEffectHandle STATIC_ApplyGameplayEffect(class AActor* InActor, const struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, class AActor* InSourceActor);
		TArray<struct FActiveGameplayEffectHandle> STATIC_ApplyEffectContainerSpec(const struct FDCGameplayEffectContainerSpec& ContainerSpec);
		void STATIC_AimSphereWithActorViewPoint(class AActor* InActor, float Radius, TArray<struct FHitResult>* OutHitResults, ECollisionChannel TraceChannel, float MaxRange);
		void STATIC_AimLineWithActorViewPointToPoint(class AActor* InActor, const struct FVector& TraceEnd, TArray<struct FHitResult>* OutHitResults, ECollisionChannel TraceChannel);
		void STATIC_AimLineWithActorViewPoint(class AActor* InActor, TArray<struct FHitResult>* OutHitResults, ECollisionChannel TraceChannel, float MaxRange);
		void STATIC_AddLooseGameplayTag(class AActor* InActor, const struct FGameplayTag& GameplayTag);
		bool STATIC_AddGameplayTag(class AActor* InActor, const struct FGameplayTag& InGameplayTag);
		void STATIC_AddGameplayCueLocal(class AActor* InActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void STATIC_AddGameplayCue(class AActor* InActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAbilitySystemComponent
	 * Size -> 0x05D8 (FullSize[0x1980] - InheritedSize[0x13A8])
	 */
	class UDCAbilitySystemComponent : public UAbilitySystemComponent
	{
	public:
		unsigned char                                              UnknownData_1ASR[0xA8];                                  // 0x13A8(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActorDieData                                       ActorDieData;                                            // 0x1450(0x01A8) Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0KIZ[0x70];                                  // 0x15F8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactEnduranceExhaustedData                       ImpactEnduranceExhaustedData;                            // 0x1668(0x01A8) Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7V5O[0xE0];                                  // 0x1810(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDCGameplayAbilityHandleData>                AbilityHandleDataArray;                                  // 0x18F0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G1E9[0x50];                                  // 0x1900(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayAbilityRelationshipData*                    AbilityTagRelationship;                                  // 0x1950(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTagMessageRelationshipData*                 GameplayTagMessageRelationshipData;                      // 0x1958(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayCueRelationshipData*                        GameplayCueRelationship;                                 // 0x1960(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayCueRelationshipData*                        OverrideGameplayCueRelationship;                         // 0x1968(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FDCGameplayEffectContainerSpec>              PremadeContainerSpecArray;                               // 0x1970(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag);
		void PlayMontageOnSourceObject(class UGameplayAbility* InAnimatingAbility, const struct FGameplayAbilityActivationInfo& ActivationInfo, class UAnimMontage* NewAnimMontage, float InPlayRate, const class FName& StartSectionName, float StartTimeSeconds);
		void OnRep_ImpactEnduranceExhaustedData(const struct FImpactEnduranceExhaustedData& InOldImpactEnduranceExhaustedData);
		void OnRep_ActorDieData(const struct FActorDieData& InOldActorDieData);
		void OnRep_AbilityHandleDataArray(TArray<struct FDCGameplayAbilityHandleData> InOldAbilityHandleDataArray);
		void OnImpactEnduranceExhaustedData(const struct FImpactEnduranceExhaustedData& InImpactEnduranceExhaustedData);
		void OnActorDieData(const struct FActorDieData& InActorDieData);
		TArray<struct FDCGameplayEffectContainerSpec> GetContainerSpecArray();
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void BroadcastMsgBlueprint(int32_t InMsg);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAbilitySystemGlobals
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UDCAbilitySystemGlobals : public UAbilitySystemGlobals
	{
	public:
		class UClass*                                              GameplayEffectClassMMC;                                  // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClassMMCSimple;                            // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClassInfiniteTagOnly;                      // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClassDurationTagOnly;                      // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClassItemProperty;                         // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCActorReferenceCounterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCActorReferenceCounterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCActorStatusComponent
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UDCActorStatusComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_D1GI[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAsyncTaskEffectStackChanged*                        EffectStackAsyncTask;                                    // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAsyncTaskEffectInhibitionChanged*                   EffectInhibitAsyncTask;                                  // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FActorStatusData>                            ActorStatusDatas;                                        // 0x0118(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnRep_ActorStatusDatas(TArray<struct FActorStatusData> OldActorStatusDatas);
		void GameplayEffectStackChanged(const struct FGameplayTag& EffectGameplayTag, const struct FActiveGameplayEffectHandle& EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount);
		void GameplayEffectInhibitChanged(const struct FGameplayTag& EffectGameplayTag, const struct FActiveGameplayEffectHandle& EffectHandle, bool bIsInhibited);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAIPerceptionComponent
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UDCAIPerceptionComponent : public UAIPerceptionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAkAcousticPortal
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class ADCAkAcousticPortal : public AAkAcousticPortal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAkComponent
	 * Size -> 0x01C0 (FullSize[0x0660] - InheritedSize[0x04A0])
	 */
	class UDCAkComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_GRO8[0x58];                                  // 0x04A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, struct FAkAudioVolumeInfo>                  CurrentVolumeIdMap;                                      // 0x04F8(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		uint32_t                                                   CurrentVolumeId;                                         // 0x0548(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2VNF[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, class UAkAudioEvent*>            AkEvents;                                                // 0x0550(0x0050) NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, struct FDCSoundDataContainer>    AkSwitches;                                              // 0x05A0(0x0050) NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, struct FGameplayTagQuery>        SoundPlayableCondition;                                  // 0x05F0(0x0050) NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     SoundDataId;                                             // 0x0640(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FXLI[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void SetSoundSwitch(const struct FGameplayTag& Tag, EPhysicalSurface SurfaceType, const class FString& SwitchGroup, const class FString& SwitchState);
		void PostSoundEvent(const struct FGameplayTag& Tag);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAkSpatialAudioVolume
	 * Size -> 0x00A8 (FullSize[0x0370] - InheritedSize[0x02C8])
	 */
	class ADCAkSpatialAudioVolume : public AAkSpatialAudioVolume
	{
	public:
		unsigned char                                              UnknownData_PYBX[0x58];                                  // 0x02C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0320(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Priority;                                                // 0x0328(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O01P[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkEventBeginOverlap;                                     // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkStateValue*                                       AkStateValueBeginOverlap;                                // 0x0338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkRtpc*                                             RtpcBeginOverlap;                                        // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RtpcValueBeginOverlap;                                   // 0x0348(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LGP3[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkEventEndOverlap;                                       // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkStateValue*                                       AkStateValueEndOverlap;                                  // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0360(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FQO4[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnTargetPlayerPawnExitVolume();
		void OnTargetPlayerPawnEnterVolume();
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimInstanceBase
	 * Size -> 0x00B8 (FullSize[0x0400] - InheritedSize[0x0348])
	 */
	class UDCAnimInstanceBase : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6XY2[0x8];                                   // 0x0348(0x0008) Fix Super Size
		unsigned char                                              UnknownData_OS2J[0x50];                                  // 0x0350(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NativeVelocity;                                          // 0x03A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             NativeRelativeHorizontalVelocity;                        // 0x03B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NativeSpeed;                                             // 0x03D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NativeHorizontalSpeed;                                   // 0x03D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NativeDirectionAngle;                                    // 0x03D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsMontagePlaying;                                       // 0x03DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SA4O[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        IdleAnimSequenceGameplayTag;                             // 0x03E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        PendingIdleAnimSequenceGameplayTag;                      // 0x03E8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bNoSkeletonUpdateIdle;                                   // 0x03F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_24EO[0xF];                                   // 0x03F1(0x000F) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		class AActor* GetOriginActor();
		void EventMontageStarted(class UAnimMontage* InMontage);
		void EventAllMontageInstancesEnded();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_SendGameplayEventTagToSelf
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCAnimNotify_SendGameplayEventTagToSelf : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0038(0x0008) Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_MontageJumpToSectionOnSourceObject
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCAnimNotify_MontageJumpToSectionOnSourceObject : public UAnimNotify
	{
	public:
		class FName                                                SectionName;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_PreReduceAmmoCountOnSourceObject
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCAnimNotify_PreReduceAmmoCountOnSourceObject : public UAnimNotify
	{
	public:
		int32_t                                                    ReduceCount;                                             // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94VN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_SoundEvent
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCAnimNotify_SoundEvent : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0038(0x0008) Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_UnHideEquippedWeapons
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UDCAnimNotify_UnHideEquippedWeapons : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAnimNotify_SendGameplayEventTagsToSelf
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UDCAnimNotify_SendGameplayEventTagsToSelf : public UAnimNotifyState
	{
	public:
		struct FGameplayTag                                        BeginEventTag;                                           // 0x0030(0x0008) Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EndEventTag;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0040(0x0008) Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAoeAIControllerBase
	 * Size -> 0x0060 (FullSize[0x0400] - InheritedSize[0x03A0])
	 */
	class ADCAoeAIControllerBase : public AAIController
	{
	public:
		unsigned char                                              UnknownData_HLBU[0x58];                                  // 0x03A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAoeBase
	 * Size -> 0x0168 (FullSize[0x0760] - InheritedSize[0x05F8])
	 */
	class ADCAoeBase : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_W8GJ[0x8];                                   // 0x05F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_5YRF[0x60];                                  // 0x0600(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0660(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UX0E[0xD8];                                  // 0x0668(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDesignDataAssetAoe*                                 DesignDataAssetAoe;                                      // 0x0740(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDestroyedWhenOwnerDie;                                 // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ApplyContinuosDamage;                                    // 0x0749(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HP9H[0x6];                                   // 0x074A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class ADCCharacterBase>>             TargetArray;                                             // 0x0750(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void RemoveEndOverlapActor(class ADCCharacterBase* CharacterBase);
		void OnSetAI();
		void BroadcastMsgBlueprint(int32_t InMsg);
		void AddBeginOverlapActor(class ADCCharacterBase* CharacterBase);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAoeSystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCAoeSystemBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class ADCAoeBase* STATIC_SpawnAoe(class ADCCharacterBase** DCCharacterBase, class UClass* AoeClass, const struct FVector& Location, class UDCGameplayAbilityBase* DCGameplayAbilityBase, const struct FGameplayEventData& EventData, bool* bSuccessfully);
		class ADCCharacterBase* STATIC_SortTargetsByDistanceAndPickTarget(class ADCAoeBase** DCAoeBase, TArray<class ADCCharacterBase*>* TargetArray, EAoeFilterSortingType AoeFilterSortingType, int32_t Index);
		bool STATIC_SortTargetsByDistance(class ADCAoeBase** DCAoeBase, TArray<class ADCCharacterBase*>* TargetArray, EAoeFilterSortingType AoeFilterSortingType);
		class ADCCharacterBase* STATIC_PickTarget(TArray<class ADCCharacterBase*>* TargetArray, int32_t Index);
		class ADCCharacterBase* STATIC_PickRandomTarget(TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_GetTargetArray(class ADCAoeBase** DCAoeBase, TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_FilterUnTagedTargets(TArray<class ADCCharacterBase*>* TargetArray, const struct FGameplayTag& GameplayTag);
		bool STATIC_FilterTargetsWithinDistance(class ADCAoeBase** DCAoeBase, TArray<class ADCCharacterBase*>* TargetArray, float Distance);
		bool STATIC_FilterTargetsOverDistance(class ADCAoeBase** DCAoeBase, TArray<class ADCCharacterBase*>* TargetArray, float Distance);
		bool STATIC_FilterTagedTargets(TArray<class ADCCharacterBase*>* TargetArray, const struct FGameplayTag& GameplayTag);
		void STATIC_FilterPlayerCharacterTargets(TArray<class ADCCharacterBase*>* TargetArray);
		void STATIC_FilterMonsterTargets(TArray<class ADCCharacterBase*>* TargetArray);
		void STATIC_DespawnAoeWithinDistance(class ADCCharacterBase** DCCharacterBase, const struct FVector& Location, float Distance);
		void STATIC_DespawnAoeByPrimaryAssetIdWithinDistance(class ADCCharacterBase** DCCharacterBase, const struct FPrimaryAssetId& PrimaryAssetId, const struct FVector& Location, float Distance);
		void STATIC_DespawnAoeByPrimaryAssetId(class ADCCharacterBase** DCCharacterBase, const struct FPrimaryAssetId& PrimaryAssetId);
		void STATIC_DespawnAoeAll(class ADCCharacterBase* DCCharacterBase);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAssetManager
	 * Size -> 0x00A0 (FullSize[0x0588] - InheritedSize[0x04E8])
	 */
	class UDCAssetManager : public UAssetManager
	{
	public:
		TMap<struct FPrimaryAssetId, struct FLoadPrimaryAssetData> LoadPrimaryAssetDataMap;                                 // 0x04E8(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetType, struct FLoadPrimaryAssetType> LoadPrimaryAssetTypeMap;                                 // 0x0538(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationStrength
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationStrength : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_0PBN[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationAgility
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationAgility : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_FKZU[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationWill
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationWill : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_SJGG[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationKnowledge
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationKnowledge : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_YK3M[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationResourcefulness
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationResourcefulness : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_JTW1[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationMaxHealth
	 * Size -> 0x00C0 (FullSize[0x0100] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationMaxHealth : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_C0YA[0xC0];                                  // 0x0040(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationItemArmorRating
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationItemArmorRating : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_4M2S[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationSpellCapacity
	 * Size -> 0x00C0 (FullSize[0x0100] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationSpellCapacity : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_NKWM[0xC0];                                  // 0x0040(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationMoveSpeed
	 * Size -> 0x0180 (FullSize[0x01C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationMoveSpeed : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_KU82[0x180];                                 // 0x0040(0x0180) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationRegularInteractionSpeedBase
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationRegularInteractionSpeedBase : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_B8M0[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationUtilityEffectiveness
	 * Size -> 0x00C0 (FullSize[0x0100] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationUtilityEffectiveness : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_SX3U[0xC0];                                  // 0x0040(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationWeightLimit
	 * Size -> 0x00C0 (FullSize[0x0100] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationWeightLimit : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_T3B8[0xC0];                                  // 0x0040(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationPerkBerSerker
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationPerkBerSerker : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_Y2TH[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeModMagnitudeCalculationSkillVictoryStrike
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UDCAttributeModMagnitudeCalculationSkillVictoryStrike : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_E5J8[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAttributeSet
	 * Size -> 0x0630 (FullSize[0x0660] - InheritedSize[0x0030])
	 */
	class UDCAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              Strength;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StrengthBase;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StrengthMod;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Agility;                                                 // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              AgilityBase;                                             // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              AgilityMod;                                              // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Will;                                                    // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WillBase;                                                // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WillMod;                                                 // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Knowledge;                                               // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              KnowledgeBase;                                           // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              KnowledgeMod;                                            // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Resourcefulness;                                         // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ResourcefulnessBase;                                     // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ResourcefulnessMod;                                      // 0x0110(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageWeaponPrimary;                             // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageWeaponSecondary;                           // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageBase;                                      // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalPower;                                           // 0x0150(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageMod;                                       // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageAdd;                                       // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageTrue;                                      // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalBackstabPower;                                   // 0x0190(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalRangedHeadshotPower;                             // 0x01A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ArmorPenetration;                                        // 0x01B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ArmorRating;                                             // 0x01C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ItemArmorRating;                                         // 0x01D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ItemArmorRatingMod;                                      // 0x01E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReduction;                                       // 0x01F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReductionMod;                                    // 0x0200(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalAbsoluteReduction;                               // 0x0210(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageWeaponPrimary;                              // 0x0220(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageWeaponSecondary;                            // 0x0230(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageBase;                                       // 0x0240(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalPower;                                            // 0x0250(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageMod;                                        // 0x0260(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageAdd;                                        // 0x0270(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageTrue;                                       // 0x0280(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicPenetration;                                        // 0x0290(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalFireDamageBase;                                   // 0x02A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalFireDamageMod;                                    // 0x02B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalFireDamageAdd;                                    // 0x02C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalArcaneDamageBase;                                 // 0x02D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalArcaneDamageMod;                                  // 0x02E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalArcaneDamageAdd;                                  // 0x02F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicResistance;                                         // 0x0300(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReduction;                                        // 0x0310(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReductionMod;                                     // 0x0320(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalAbsoluteReduction;                                // 0x0330(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              HeadshotReductionMod;                                    // 0x0340(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ProjectileReductionMod;                                  // 0x0350(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ImpactPower;                                             // 0x0360(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ImpactResistance;                                        // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ImpactEndurance;                                         // 0x0380(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxImpactEndurance;                                      // 0x0390(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AL7P[0x8];                                   // 0x03A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAttributeData                              PhysicalHealBase;                                        // 0x03A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalHealBase;                                         // 0x03B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Health;                                                  // 0x03C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealth;                                               // 0x03D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DTJ[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAttributeData                              MaxHealthBase;                                           // 0x03F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealthMod;                                            // 0x0400(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealthAdd;                                            // 0x0410(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalShield;                                          // 0x0420(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxPhysicalShield;                                       // 0x0430(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalShield;                                           // 0x0440(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxMagicalShield;                                        // 0x0450(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              TotalShield;                                             // 0x0460(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxTotalShield;                                          // 0x0470(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellPayload;                                            // 0x0480(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacity;                                           // 0x0490(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityBase;                                       // 0x04A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityMod;                                        // 0x04B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityAdd;                                        // 0x04C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeed;                                               // 0x04D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedBase;                                           // 0x04E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedMod;                                            // 0x04F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedAdd;                                            // 0x0500(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedArmorPenalty;                                   // 0x0510(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedArmorPenaltyMod;                                // 0x0520(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedWithModifier;                                   // 0x0530(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ActionSpeed;                                             // 0x0540(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCastingSpeed;                                       // 0x0550(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ItemEquipSpeed;                                          // 0x0560(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RegularInteractionSpeedBase;                             // 0x0570(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RegularInteractionSpeed;                                 // 0x0580(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalInteractionSpeed;                                 // 0x0590(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BuffDurationMod;                                         // 0x05A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              DebuffDurationMod;                                       // 0x05B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectiveness;                                    // 0x05C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessBase;                                // 0x05D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessMod;                                 // 0x05E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessAdd;                                 // 0x05F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Weight;                                                  // 0x0600(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimit;                                             // 0x0610(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitBase;                                         // 0x0620(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitMod;                                          // 0x0630(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitAdd;                                          // 0x0640(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PrestigeItemDrop;                                        // 0x0650(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic

	public:
		void OnRep_WillMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_WillBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_Will(const struct FGameplayAttributeData& OldValue);
		void OnRep_WeightLimitMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_WeightLimitBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_WeightLimitAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_WeightLimit(const struct FGameplayAttributeData& OldValue);
		void OnRep_Weight(const struct FGameplayAttributeData& OldValue);
		void OnRep_UtilityEffectivenessMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_UtilityEffectivenessBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_UtilityEffectivenessAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_UtilityEffectiveness(const struct FGameplayAttributeData& OldValue);
		void OnRep_TotalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_StrengthMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_StrengthBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_Strength(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellPayload(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellCastingSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellCapacityMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellCapacityBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellCapacityAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpellCapacity(const struct FGameplayAttributeData& OldValue);
		void OnRep_ResourcefulnessMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_ResourcefulnessBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_Resourcefulness(const struct FGameplayAttributeData& OldValue);
		void OnRep_RegularInteractionSpeedBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_RegularInteractionSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_ProjectileReductionMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_PrestigeItemDrop(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalReductionMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalRangedHeadshotPower(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalPower(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalHealBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageWeaponSecondary(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageWeaponPrimary(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageTrue(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalBackstabPower(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalAbsoluteReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedWithModifier(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedArmorPenaltyMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedArmorPenalty(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeedAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxTotalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxPhysicalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxMagicalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxImpactEndurance(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxHealthMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxHealthBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxHealthAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxHealth(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicPenetration(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalReductionMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalPower(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalInteractionSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalHealBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalFireDamageMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalFireDamageBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalFireDamageAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageWeaponSecondary(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageWeaponPrimary(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageTrue(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalDamageAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalArcaneDamageMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalArcaneDamageBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalArcaneDamageAdd(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalAbsoluteReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_KnowledgeMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_KnowledgeBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_Knowledge(const struct FGameplayAttributeData& OldValue);
		void OnRep_ItemEquipSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_ItemArmorRatingMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_ItemArmorRating(const struct FGameplayAttributeData& OldValue);
		void OnRep_ImpactResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_ImpactPower(const struct FGameplayAttributeData& OldValue);
		void OnRep_ImpactEndurance(const struct FGameplayAttributeData& OldValue);
		void OnRep_Health(const struct FGameplayAttributeData& OldValue);
		void OnRep_HeadshotReductionMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_DebuffDurationMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_BuffDurationMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmorRating(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmorPenetration(const struct FGameplayAttributeData& OldValue);
		void OnRep_AgilityMod(const struct FGameplayAttributeData& OldValue);
		void OnRep_AgilityBase(const struct FGameplayAttributeData& OldValue);
		void OnRep_Agility(const struct FGameplayAttributeData& OldValue);
		void OnRep_ActionSpeed(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_DashToLocation
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UDCAT_DashToLocation : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VAU[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDCAT_DashToLocation* STATIC_DashToLocation(class UGameplayAbility* OwningAbility, const struct FVector& DestLocation, float AllowedDistance, float Speed, bool Teleport);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_InteractionSkillCheck
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UDCAT_InteractionSkillCheck : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPerfectSucceed;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSucceed;                                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKQV[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (PADDING)

	public:
		class UDCAT_InteractionSkillCheck* STATIC_InteractionSkillCheck(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, float Duration, float SucceedSectionStartTime, float SucceedSectionEndTime, float PerfectSucceedSectionStartTime, float PerfectSucceedSectionEndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_MoveWithInputVectorCurve
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UDCAT_MoveWithInputVectorCurve : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD7H[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        VelocityVector;                                          // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimeline                                           VelocityTimeline;                                        // 0x00B8(0x0098) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		class UDCAT_MoveWithInputVectorCurve* STATIC_MoveWithInputVectorCurve(class UGameplayAbility* OwningAbility, const struct FVector& DestLocation, class UCurveVector* InVelocityVector, float DistanceTolerance, bool bShouldTeleportWhenFinished);
		void HandleTimelineUpdate(const struct FVector& InVector);
		void HandleTimelineFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_OverlapActorsInRadius
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UDCAT_OverlapActorsInRadius : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTargetActorOverlapBegin;                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnTargetActorOverlapEnd;                                 // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2MU7[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		class UDCAT_OverlapActorsInRadius* STATIC_OverlapActorsInRadius(class UGameplayAbility* OwningAbility, float Radius, const class FName& CollisionProfileName, class UClass* OverlapTargetClass);
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_PlayMontageAndWaitForEvent
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UDCAT_PlayMontageAndWaitForEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00D8(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x00FC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartTimeSeconds;                                        // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x010C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X4UI[0x33];                                  // 0x010D(0x0033) MISSED OFFSET (PADDING)

	public:
		class UDCAT_PlayMontageAndWaitForEvent* STATIC_PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_RotateToActor
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UDCAT_RotateToActor : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_4JI5[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		class UDCAT_RotateToActor* STATIC_RotateToActor(class UGameplayAbility* OwningAbility, class AActor* Actor, EHitBoxType HitBox, float Speed, bool WithoutPitch);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_ServerWaitClientTargetData
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UDCAT_ServerWaitClientTargetData : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_719A[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UDCAT_ServerWaitClientTargetData* STATIC_ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, bool TriggerOnce);
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_SpawnProjectile
	 * Size -> 0x0090 (FullSize[0x0110] - InheritedSize[0x0080])
	 */
	class UDCAT_SpawnProjectile : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N0T[0x80];                                  // 0x0090(0x0080) MISSED OFFSET (PADDING)

	public:
		class UDCAT_SpawnProjectile* STATIC_SpawnProjectile(class UGameplayAbility* OwningAbility, class UClass* SpawnClass, const struct FTransform& SpawnTransform, float FirePower);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_TargetActorRadius
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UDCAT_TargetActorRadius : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTargetActorOverlap;                                    // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPOP[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_TargetActorRadius* STATIC_TargetActorRadius(class UGameplayAbility* OwningAbility, float Radius, ECollisionChannel CollisionChannel, class UClass* TargetingClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitAimDirChangedFromLoc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitAimDirChangedFromLoc : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnDirectionChanged;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VHR[0x30];                                  // 0x0090(0x0030) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitAimDirChangedFromLoc* STATIC_WaitAimDirectionChangedFromLocation(class UGameplayAbility* OwningAbility, const struct FVector& InitialAimTargetLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitAimDirectionChanged
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitAimDirectionChanged : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnDirectionChanged;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M5O[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitAimDirectionChanged* STATIC_WaitAimDirectionChanged(class UGameplayAbility* OwningAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitAttributeChangeByExecution
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitAttributeChangeByExecution : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M44P[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x00A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UDCAT_WaitAttributeChangeByExecution* STATIC_WaitForAttributesChange(class UGameplayAbility* OwningAbility, TArray<struct FGameplayAttribute> Attributes, bool TriggerOnce, class AActor* OptionalExternalOwner);
		class UDCAT_WaitAttributeChangeByExecution* STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, bool TriggerOnce, class AActor* OptionalExternalOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitDelayPausable
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitDelayPausable : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGAG[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitDelayPausable* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Duration);
		void ResumeTimer();
		void PauseTimer();
		float GetElapsedTime();
		void AddTimerElapsedTimeRatio(float AdditionalRatio);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitDelayRestartable
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitDelayRestartable : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8GAA[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitDelayRestartable* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);
		void RestartTimer();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitDistChangeFromActor
	 * Size -> 0x0090 (FullSize[0x0110] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitDistChangeFromActor : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnDistanceChange;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMOF[0x80];                                  // 0x0090(0x0080) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitDistChangeFromActor* STATIC_WaitDistanceChange(class UGameplayAbility* OwningAbility, class AActor* TargetActor, float MaximumDistance, ECollisionChannel CollisionChannel);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitDistChangeFromLocation
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitDistChangeFromLocation : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnDistanceChange;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N77[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitDistChangeFromLocation* STATIC_WaitDistanceChange(class UGameplayAbility* OwningAbility, const struct FVector& TargetLocation, float MaximumDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitDistChangeFromView
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitDistChangeFromView : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnDistanceChange;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     InteractionAdditionalSphereRadiusConstant;               // 0x0090(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZXW[0xA0];                                  // 0x00A0(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitDistChangeFromView* STATIC_WaitDistanceChange(class UGameplayAbility* OwningAbility, class AActor* TargetActor, const struct FVector& TargetLocation, float MaximumDistance, float CollisionRadius, ECollisionChannel CollisionChannel);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitForCharacterUnCrouch
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitForCharacterUnCrouch : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnUnCrouch;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCharacterMovementComponent*                         CachedMovementComponent;                                 // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UDCAT_WaitForCharacterUnCrouch* STATIC_WaitForCharacterUnCrouch(class UGameplayAbility* OwningAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitForGameplayEvents
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitForGameplayEvents : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               EventTags;                                               // 0x0090(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3CI[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitForGameplayEvents* STATIC_WaitForGameplayEvents(class UGameplayAbility* OwningAbility, const struct FGameplayTagContainer& InEventTags);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitForInputAction
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitForInputAction : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             InputActionTriggered;                                    // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InputActionStarted;                                      // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InputActionCompleted;                                    // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UInputAction*                                        InputAction;                                             // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X59L[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitForInputAction* STATIC_WaitForInputAction(class UGameplayAbility* OwningAbility, class UInputAction* InInputAction, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd
	 * Size -> 0x00E0 (FullSize[0x0160] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitGameplayAbilityActivateOrEnd : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_YPH0[0xA0];                                  // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAbilityActivated;                                      // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAbilityEnded;                                          // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x0140(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X1TJ[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitGameplayAbilityActivateOrEnd* STATIC_WaitForAbilityActivateOrEndWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, class AActor* InOptionalExternalTarget, bool TriggerOnce);
		class UDCAT_WaitGameplayAbilityActivateOrEnd* STATIC_WaitForAbilityActivateOrEnd_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, class AActor* InOptionalExternalTarget, bool TriggerOnce);
		class UDCAT_WaitGameplayAbilityActivateOrEnd* STATIC_WaitForAbilityActivateOrEnd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, class AActor* InOptionalExternalTarget, bool TriggerOnce);
		void OnAbilityEnd(const struct FAbilityEndedData& AbilityEndedData);
		void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitGameplayEffectAdd
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitGameplayEffectAdd : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OLF[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitGameplayEffectAdd* STATIC_WaitGameplayEffectAdded(class UGameplayAbility* OwningAbility, bool TriggerOnce);
		void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitGenericGameplayTagEvent
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitGenericGameplayTagEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             Added;                                                   // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Removed;                                                 // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BL3[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x00A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3FY0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitGenericGameplayTagEvent* STATIC_WaitGenericGameplayTagEvent(class UGameplayAbility* OwningAbility, class AActor* InOptionalExternalTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitInteractableTarget
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitInteractableTarget : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             FoundNewInteractableTarget;                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LostInteractableTarget;                                  // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ADCGATA_LineTraceInteractable*                       InteractableTargetActor;                                 // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UDCAT_WaitInteractableTarget* STATIC_WaitInteractableTarget(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class ADCGATA_LineTraceInteractable* InTargetActor);
		void StopTargeting();
		void StartTargeting();
		void ResetTargeting();
		void OnLostInteractableTarget(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnFoundNewInteractableTarget(const struct FGameplayAbilityTargetDataHandle& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitSocketBlockedStateChange
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitSocketBlockedStateChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             SocketSightBlocked;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SocketSightUnblocked;                                    // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ADCGATA_AimTraceToSocket*                            AimTraceActor;                                           // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UDCAT_WaitSocketBlockedStateChange* STATIC_WaitSocketBlockedStateChange(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class ADCGATA_AimTraceToSocket* InTargetActor);
		void StopTargeting();
		void StartTargeting();
		void ResetTargeting();
		void OnSocketSightUnblocked(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnSocketSightBlocked(const struct FGameplayAbilityTargetDataHandle& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitTargetData
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UDCAT_WaitTargetData : public UAbilityTask_WaitTargetData
	{
	public:
		class UDCAT_WaitTargetData* STATIC_DCWaitTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* InTargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitTargetGameplayTagEvent
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitTargetGameplayTagEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             Added;                                                   // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCountChanged;                                          // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Removed;                                                 // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QA0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZKD0[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitTargetGameplayTagEvent* STATIC_WaitTargetGameplayTagEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& InTargetTag, class AActor* InOptionalExternalTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCAT_WaitVelocityChange
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UDCAT_WaitVelocityChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnVelocityChange;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMovementComponent*                                  CachedMovementComponent;                                 // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I924[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		class UDCAT_WaitVelocityChange* STATIC_WaitVelocityChange(class UGameplayAbility* OwningAbility, float MinimumMagnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCBagSlotWidget
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UDCBagSlotWidget : public UUserWidget
	{
	public:
		bool                                                       bOccupied;                                               // 0x0290(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanEquip;                                               // 0x0291(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDCItemDropPreview                                         ItemDropPreview;                                         // 0x0292(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L92N[0x5];                                   // 0x0293(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USizeBox*                                            SlotSizeBox;                                             // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCControlWidgetBase
	 * Size -> 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
	 */
	class UDCControlWidgetBase : public UUserWidget
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOnButtonDown;                                           // 0x0291(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_36K0[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerEvent                                       PrevMouseEvent;                                          // 0x0298(0x0090) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemWidgetBase
	 * Size -> 0x0130 (FullSize[0x0458] - InheritedSize[0x0328])
	 */
	class UDCItemWidgetBase : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_PKR2[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCItemInfo                                         ItemInfo;                                                // 0x0340(0x0108) Transient, Protected, NativeAccessSpecifierProtected
		class UDCItemDataAsset*                                    DataAsset;                                               // 0x0448(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSet;                                                    // 0x0450(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_87AP[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsSet();
		bool IsReadOnly();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemCommonWidget
	 * Size -> 0x0028 (FullSize[0x0480] - InheritedSize[0x0458])
	 */
	class UDCItemCommonWidget : public UDCItemWidgetBase
	{
	public:
		class UImage*                                              ItemImage;                                               // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x0460(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MFX7[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemTooltipWidgetClass;                                  // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ItemDragVisualWidgetClass;                               // 0x0470(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDragging;                                             // 0x0478(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSelected;                                             // 0x0479(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7MU4[0x6];                                   // 0x047A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnDragDropFinished(class UDragDropOperation* Operation);
		class UDCItemTooltipWidget* GetTooltipWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCBagItemWidget
	 * Size -> 0x0008 (FullSize[0x0488] - InheritedSize[0x0480])
	 */
	class UDCBagItemWidget : public UDCItemCommonWidget
	{
	public:
		class USizeBox*                                            ItemSizeBox;                                             // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsGold();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInventoryWidgetBase
	 * Size -> 0x0058 (FullSize[0x02E8] - InheritedSize[0x0290])
	 */
	class UDCInventoryWidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_91S3[0x30];                                  // 0x0290(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bReadOnly;                                               // 0x02C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZVAP[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDCInventoryWidgetBase*>                      ChildInventoryWidgets;                                   // 0x02C8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UDCItemWidgetBase*>                           ChildItemWidgets;                                        // 0x02D8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		bool SetReadOnly(bool bState);
		void OnWidgetVisibilityChanged(ESlateVisibility Invisibility);
		void OnItemDrop(const struct FDCItemId& ItemId, int32_t Count, EDCInventoryId Src, EDCInventoryId Dst, int32_t Index);
		void OnItemClick(const struct FDCItemId& ItemId, EDCInventoryId From, const struct FPointerEvent& Event);
		bool IsReadOnly();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCBagWidget
	 * Size -> 0x0108 (FullSize[0x03F0] - InheritedSize[0x02E8])
	 */
	class UDCBagWidget : public UDCInventoryWidgetBase
	{
	public:
		class UClass*                                              SlotWidgetClass;                                         // 0x02E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemWidgetClass;                                         // 0x02F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SplitWidgetClass;                                        // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputAction*                                        SplitInputAction;                                        // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCBoxInventory*                                     Inventory;                                               // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        SlotRowsVerticalBox;                                     // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        ItemAreaCanvas;                                          // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FDCItemId, class UDCBagItemWidget*>            ItemWidgets;                                             // 0x0320(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MVF4[0x78];                                  // 0x0370(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCInputNumberWidget*                                SplitWidget;                                             // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnItemsUpdated();
		void OnDropInternal(int32_t Count, const struct FDCItemId& ItemId, EDCInventoryId From, int32_t Index);
		int32_t GetGoldAmount();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCBoxInventory
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UDCBoxInventory : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZWQA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDCInventoryId                                             InventoryId;                                             // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U5RE[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           InventoryBoxSize;                                        // 0x0034(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FKKZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDCItemId>                                   Slots;                                                   // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<struct FDCItemId, struct FDCItemInfo>                 ItemInfos;                                               // 0x0050(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YTT9[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterAnimInstanceBase
	 * Size -> 0x0068 (FullSize[0x0468] - InheritedSize[0x0400])
	 */
	class UDCCharacterAnimInstanceBase : public UDCAnimInstanceBase
	{
	public:
		float                                                      NativeYaw;                                               // 0x0400(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NativePitch;                                             // 0x0404(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFlying;                                               // 0x0408(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFalling;                                              // 0x0409(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCrouching;                                            // 0x040A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDead;                                                 // 0x040B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SSBV[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitDirection;                                            // 0x0410(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldTransitionToHit;                                  // 0x0428(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldTransitionToHitReactionFlipFlop;                  // 0x0429(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNN8[0x2];                                   // 0x042A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HitReactionStateMachineName;                             // 0x042C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HitReactionStateName;                                    // 0x0434(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HitReactionFlipFlopStateName;                            // 0x043C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7Z0P[0x24];                                  // 0x0444(0x0024) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterBase
	 * Size -> 0x0250 (FullSize[0x0848] - InheritedSize[0x05F8])
	 */
	class ADCCharacterBase : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_FEI8[0x8];                                   // 0x05F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_NXI3[0x70];                                  // 0x0600(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0670(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RVN4[0x18];                                  // 0x0678(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KW5K[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGenericTeamId                                      GenericTeamId;                                           // 0x06A0(0x0001) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MXO[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAttackInputManagerComponent*                        AttackInputManager;                                      // 0x06A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkillComponent*                                     SkillComponent;                                          // 0x06B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ZIT[0x38];                                  // 0x06B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x06F0(0x0010) Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0700(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0708(0x0070) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsFirstPersonPerspective;                               // 0x0778(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDead;                                                 // 0x0779(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TIQ[0x6];                                   // 0x077A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class ADCAoeBase>>                   AoeArray;                                                // 0x0780(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FNickname                                           NickNameCached;                                          // 0x0790(0x0020) Net, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2UX[0x10];                                  // 0x07B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RemoteViewYaw;                                           // 0x07C0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O1J7[0x67];                                  // 0x07C1(0x0067) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               AimRotationLockTags;                                     // 0x0828(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TogglePerspective();
		void TerminateBase();
		void SetIsDead(bool IsDead);
		void SetGenericTeamId(const struct FGenericTeamId& TeamID);
		void ServerSetRemoteViewYaw(unsigned char InRemoteViewYaw);
		void RemoveAllLocalStateTags();
		void ReceivePreInitializeComponents();
		void OnUpdateTeammateState(bool bIsTeammateWithLocalPlayer);
		void OnSetPerspective(class APlayerController* InPlayerController, bool bInIsFirstPersonPerspective);
		void OnRep_AccountId(const class FString& InOldAccountId);
		void OnQuickSlotClicked(EEquipmentQuickSlotType SlotType);
		void OnGameState(const struct FGameStateData& InGameStateData);
		void OnFMsgGASActorDieNotifyBlueprint(const struct FMsgGASActorDieNotify& InMsg);
		bool IsSameTeam(const class FString& PartyId);
		bool IsInFirstPersonPerspective();
		bool IsDead();
		void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
		void InteractLost(class AActor* Interacter);
		void InteractFound(class AActor* Interacter, class UPrimitiveComponent* InteractPart);
		class FString GetPartyId();
		struct FNickname GetNickNameCached();
		bool GetHitBoxLocation(EHitBoxType HitBoxType, struct FVector* Location);
		struct FGenericTeamId GetGenericTeamId();
		struct FVector GetCapsuleTopLocation();
		struct FVector GetCapsuleBottomLocation();
		class UCameraComponent* GetCameraComponent();
		class FString GetAccountId();
		void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterLobbyCapture
	 * Size -> 0x01E8 (FullSize[0x07E0] - InheritedSize[0x05F8])
	 */
	class ADCCharacterLobbyCapture : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_6JX3[0x8];                                   // 0x05F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_919T[0x58];                                  // 0x0600(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0658(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              PartHead;                                                // 0x0660(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartHelmet;                                              // 0x0668(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartGloves;                                              // 0x0670(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartChest;                                               // 0x0678(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartPants;                                               // 0x0680(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartBoots;                                               // 0x0688(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     DefaultIdleAnimation;                                    // 0x0690(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0698(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCPerkDataComponent*                                PerkDataComponent;                                       // 0x06A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     ItemStandIdleAnimation;                                  // 0x06A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EWidgetPartyUserLocate                                     PartyUserLocate;                                         // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GGXW[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCCharacterDataComponent*                           DataComponent;                                           // 0x06B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCharacterPartsComponent*                          PartsComponent;                                          // 0x06C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FNN3[0x98];                                  // 0x06C8(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccountLink*                                        AccountLink;                                             // 0x0760(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             OwnedPerkIdArray;                                        // 0x0768(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<int64_t, class AActor*>                               ContainingActorMap;                                      // 0x0778(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9QU9[0x18];                                  // 0x07C8(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnVisibleCharacterRenderRight(bool IsHidden);
		void OnVisibleCharacterRenderLeft(bool IsHidden);
		void OnItemEquipped(class UAnimationAsset* ItemStandIdle, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterMovementComponent
	 * Size -> 0x0018 (FullSize[0x0F10] - InheritedSize[0x0EF8])
	 */
	class UDCCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_LYK5[0x8];                                   // 0x0EF8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_6B1P[0x8];                                   // 0x0F00(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCannotMoveGameplayTagData*                          CannotMoveGameplayTagData;                               // 0x0F08(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterPartsArtData
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UDCCharacterPartsArtData : public UDCDataAssetBase
	{
	public:
		TMap<struct FGameplayTag, class USkeletalMesh*>            BodyParts;                                               // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class USkeletalMesh*>            DefaultParts;                                            // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterProduction
	 * Size -> 0x0048 (FullSize[0x0640] - InheritedSize[0x05F8])
	 */
	class ADCCharacterProduction : public ACharacter
	{
	public:
		class USkeletalMeshComponent*                              PartHead;                                                // 0x05F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartHelmet;                                              // 0x0600(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartGloves;                                              // 0x0608(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartChest;                                               // 0x0610(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartPants;                                               // 0x0618(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartBoots;                                               // 0x0620(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      ItemAssetIDList;                                         // 0x0628(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       SkelMesh;                                                // 0x0638(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_ItemDataList(TArray<class FString> OldItemAssetIDList);
		void OnRep_ChangeHeadMesh();
		void OnItemEquip();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSelectCapture
	 * Size -> 0x0000 (FullSize[0x07E0] - InheritedSize[0x07E0])
	 */
	class ADCCharacterSelectCapture : public ADCCharacterLobbyCapture
	{
	public:
		void ActorActivity(bool IsDisable);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinArtData
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UDCCharacterSkinArtData : public UDCCharacterPartsArtData
	{
	public:
		class UTexture2D*                                          CharacterSkinIconTexture;                                // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UDCCharacterSkinComponent : public UActorComponent
	{
	public:
		class UDCCharacterSkinDataAsset*                           Data;                                                    // 0x00B0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGameplayAbilitySpecHandle>                  OwnerGameplayAbilitySpecHandles;                         // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FActiveGameplayEffectHandle>                 OwnerGameplayEffectHandles;                              // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetDataForDebug_Server(class UDCCharacterSkinDataAsset* InData);
		void OnRep_Data(class UDCCharacterSkinDataAsset* OldData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDCDataAsset : public UPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   AssetType;                                               // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinDataAsset
	 * Size -> 0x0098 (FullSize[0x00D0] - InheritedSize[0x0038])
	 */
	class UDCCharacterSkinDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Desc[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Art[0x28];                                               // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<EDCCharacterClass>                                  TargetCharacterClasses;                                  // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Abilities[0x10];                                         // 0x00B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Effects[0x10];                                           // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinListEntryWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDCCharacterSkinListEntryWidgetData : public UObject
	{
	public:
		struct FDCCharacterSkinInfo                                CharacterSkinInfo;                                       // 0x0028(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinWidget
	 * Size -> 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
	 */
	class UDCCharacterSkinWidget : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_2FO6[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CharacterSkinName;                                       // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<class FText>                                        CharacterSkinDescTextArray;                              // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          CharacterSkinIconTexture;                                // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     CharacterSkinId;                                         // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEquipped;                                             // 0x0380(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OLKM[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TooltipWidgetClass;                                      // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         SkinTooltipWidget;                                       // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UUserWidget* GetTooltipWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinListEntryWidget
	 * Size -> 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
	 */
	class UDCCharacterSkinListEntryWidget : public UDCCharacterSkinWidget
	{
	public:
		unsigned char                                              UnknownData_74Z2[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCUserInfoManagerBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDCUserInfoManagerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_V6I9[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCClientAccountManager
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UDCClientAccountManager : public UDCUserInfoManagerBase
	{
	public:
		unsigned char                                              UnknownData_DKKN[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FDCAccountId, struct FDCClientAccountInfo>     Infos;                                                   // 0x0040(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BC92[0x50];                                  // 0x0090(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCClientShopManager
	 * Size -> 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
	 */
	class UDCClientShopManager : public UDCUserInfoManagerBase
	{
	public:
		unsigned char                                              UnknownData_QIT3[0x158];                                 // 0x0030(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCommunityBlockEntryWidgetData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDCCommunityBlockEntryWidgetData : public UObject
	{
	public:
		struct FDCCommunityCharacterInfo                           Info;                                                    // 0x0028(0x0048) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCommunityBlockEntryWidget
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UDCCommunityBlockEntryWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_Z601[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           Nickname;                                                // 0x0298(0x0020) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		EDCCharacterClass                                          CharacterClass;                                          // 0x02B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDCGender                                                  Gender;                                                  // 0x02B9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ARUS[0x6];                                   // 0x02BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          Portrait;                                                // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelect;                                                 // 0x02D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2CXX[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCContextMenuWidget*                                ContextMenuWidget;                                       // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ExecuteContextMenu(EContextOptionType Option);
		void CleanupContextMenuWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyGroupWidgetBase
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class ULobbyGroupWidgetBase : public UDCWidgetBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BQM4[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWidgetLobbyGroupType>                              NonCoexistWidgetLobbyGroupTypeArray;                     // 0x02F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    GroupWidgetPriority;                                     // 0x0308(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldWaitResponseOnHide;                               // 0x030C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowConfirmPopupOnHide;                                 // 0x030D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KRU9[0x2];                                   // 0x030E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CommonPopupWidget;                                       // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8DPR[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCommunityBlockWidget
	 * Size -> 0x0028 (FullSize[0x0348] - InheritedSize[0x0320])
	 */
	class UDCCommunityBlockWidget : public ULobbyGroupWidgetBase
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0320(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MYJO[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTileView*                                           TileView;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ButtonBack;                                              // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 ButtonPageLeft;                                          // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 ButtonPageRight;                                         // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnEntryHovered(class UObject* WidgetData, bool bIsHovered);
		void OnButtonPageRight();
		void OnButtonPageLeft();
		void OnButtonBack();
		void OnBlockUpdated();
		int32_t NumItemsPerPage();
		int32_t GetMaxPage();
		void FindId(const class FText& FindText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCommunityManager
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UDCCommunityManager : public UDCUserInfoManagerBase
	{
	public:
		unsigned char                                              UnknownData_KP3X[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxBlockCount;                                           // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IO69[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FDCCharacterId, struct FDCCommunityCharacterInfo> BlockInfos;                                              // 0x0050(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCConstantDataAsset
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCConstantDataAsset : public UDCDataAsset
	{
	public:
		float                                                      FloatValue;                                              // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCContextComponent
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class UDCContextComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Y9O4[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ContextMenuWidgetClass;                                  // 0x0108(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4UFS[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnContextMenuHolderVisibilityChaned(ESlateVisibility Visibility);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCContextMenuEntryWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDCContextMenuEntryWidgetData : public UObject
	{
	public:
		EContextOptionType                                         ContextOption;                                           // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7KH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCContextMenuWidget*                                ContextMenuWidget;                                       // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCContextMenuEntryWidget
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UDCContextMenuEntryWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_COO5[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EContextOptionType                                         ContextOption;                                           // 0x0298(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HE4J[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (PADDING)

	public:
		void Execute();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCContextMenuWidget
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UDCContextMenuWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_XXEB[0x20];                                  // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOverlay*                                            RootOverlay;                                             // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UListView*                                           ListView;                                                // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeCharacterSkinListWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCCustomizeCharacterSkinListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_13E6[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTileView*                                           TileView_CharacterSkinList;                              // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnSetCharacterSkinInfoArray(TArray<struct FDCCharacterSkinInfo> CharacterSkinInfoArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeComponent
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UDCCustomizeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NFKG[0x88];                                  // 0x00B0(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeEmoteListWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCCustomizeEmoteListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_SQTY[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTileView*                                           TileView_EmoteList;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnSetEmoteIdArray(TArray<struct FDCEmoteInfo> EmoteIdArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeEmoteRadialSlotWidget
	 * Size -> 0x0078 (FullSize[0x03A0] - InheritedSize[0x0328])
	 */
	class UDCCustomizeEmoteRadialSlotWidget : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_FCM4[0x30];                                  // 0x0328(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          EmoteIconTexture;                                        // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              EmoteIconImage;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          PreviewEmoteIconTexture;                                 // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EmoteIconAngle;                                          // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4S7E[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EmoteName;                                               // 0x0378(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7221[0x10];                                  // 0x0390(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetEmoteIconImageAngle(float NewAngle);
		void OnEmoteNameChanged(const class FText& NewEmoteName);
		ESlateVisibility GetPreviewEmoteVisibility();
		ESlateVisibility GetHighlightVisibility();
		ESlateVisibility GetEmoteIconVisibility();
		ESlateVisibility GetArrowVisibility();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeEmoteRadialWidget
	 * Size -> 0x00C0 (FullSize[0x03B0] - InheritedSize[0x02F0])
	 */
	class UDCCustomizeEmoteRadialWidget : public UDCWidgetBase
	{
	public:
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_2;                                 // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_3;                                 // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_4;                                 // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_5;                                 // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_6;                                 // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_7;                                 // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_8;                                 // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialSlotWidget*                   EmoteRadialSlotWidget_9;                                 // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5Y8S[0x80];                                  // 0x0330(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeItemSkinListWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCCustomizeItemSkinListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_65X6[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTileView*                                           TileView_ItemSkinList;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnSetItemSkinInfoArray(TArray<struct FDCItemSkinInfo> ItemSkinInfoArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCustomizeWidgetBase
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UDCCustomizeWidgetBase : public UDCWidgetBase
	{
	public:
		class UDCTabMenuWidgetBase*                                CustomizeTabWidget;                                      // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCustomizeEmoteRadialWidget*                       CustomizeEmoteRadialWidget;                              // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     PreviewSwitcher;                                         // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnItemTabSelected();
		void OnEmoteTabSelected();
		void OnCustomizeWidgetOpen();
		void OnCharacterTabSelected();
		ESlateVisibility GetItemSkinListVisibility();
		ESlateVisibility GetEmoteListVisibility();
		ESlateVisibility GetCharacterSkinListVisibility();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDamageExecCalculation
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDCDamageExecCalculation : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDamageIndicatorComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UDCDamageIndicatorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Z4GU[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCDataBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCDataBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int64_t STATIC_MakeUniqueId();
		class FString STATIC_MakePrimaryAssetIdStr(const struct FPrimaryAssetId& PrimaryAssetId);
		struct FPrimaryAssetId STATIC_MakePrimaryAssetId(const class FString& PrimaryAssetIdStr);
		void STATIC_LoadPrimaryAsset(const struct FPrimaryAssetId& InPrimaryAssetId, const class FScriptDelegate& InOnComplete);
		bool STATIC_IsStreamingMode();
		class FString STATIC_GetViewNickname(const struct FNickname& Nickname);
		struct FPrimaryAssetId STATIC_GetItemPropertyTypeId_Unidentified();
		struct FDesignDataStockSellBackItem STATIC_GetDesignDataStockSellBackItemByUniqueId(const struct FPrimaryAssetId& InId, int64_t StockSellBackUniqueId);
		struct FDesignDataStockSellBack STATIC_GetDesignDataStockSellBack(const struct FPrimaryAssetId& InId);
		struct FDesignDataStockCraftItem STATIC_GetDesignDataStockCraftItemByUniqueId(const struct FPrimaryAssetId& InId, int64_t StockCraftUniqueId);
		struct FDesignDataStockCraft STATIC_GetDesignDataStockCraft(const struct FPrimaryAssetId& InId);
		struct FDesignDataStockBuyItem STATIC_GetDesignDataStockBuyItemByUniqueId(const struct FPrimaryAssetId& InId, int64_t StockBuyUniqueId);
		struct FDesignDataStockBuy STATIC_GetDesignDataStockBuy(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataSpellMap(TMap<struct FPrimaryAssetId, struct FDesignDataSpell>* OutDesignDataSpellMap);
		struct FDesignDataSpell STATIC_GetDesignDataSpell(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataSkillMap(TMap<struct FPrimaryAssetId, struct FDesignDataSkill>* OutDesignDataSkillMap);
		struct FDesignDataSkill STATIC_GetDesignDataSkill(const struct FPrimaryAssetId& InId);
		struct FDesignDataPropsSkillCheck STATIC_GetDesignDataPropsSkillCheck(const struct FPrimaryAssetId& InId);
		struct FDesignDataPropsInteract STATIC_GetDesignDataPropsInteract(const struct FPrimaryAssetId& InId);
		struct FDesignDataProps STATIC_GetDesignDataProps(const struct FPrimaryAssetId& InId);
		struct FDesignDataProjectile STATIC_GetDesignDataProjectile(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataPlayerCharacterMap(TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter>* OutDesignDataPlayerCharacterMap);
		struct FDesignDataPlayerCharacter STATIC_GetDesignDataPlayerCharacter(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataPerkMap(TMap<struct FPrimaryAssetId, struct FDesignDataPerk>* OutDesignDataPerkMap);
		struct FDesignDataPerk STATIC_GetDesignDataPerk(const struct FPrimaryAssetId& InId);
		struct FDesignDataMovementModifier STATIC_GetDesignDataMovementModifier(const struct FPrimaryAssetId& InId);
		struct FDesignDataMonster STATIC_GetDesignDataMonster(const struct FPrimaryAssetId& InId);
		struct FDesignDataMerchant STATIC_GetDesignDataMerchant(const struct FPrimaryAssetId& InId);
		struct FDesignDataMeleeAttack STATIC_GetDesignDataMeleeAttack(const struct FPrimaryAssetId& InId);
		struct FDesignDataLootDrop STATIC_GetDesignDataLootDrop(const struct FPrimaryAssetId& InId);
		struct FDesignDataItemRequirement STATIC_GetDesignDataItemRequirement(const struct FPrimaryAssetId& InId);
		struct FDesignDataItemPropertyType STATIC_GetDesignDataItemPropertyType(const struct FPrimaryAssetId& InId);
		struct FDesignDataItemProperty STATIC_GetDesignDataItemProperty(const struct FPrimaryAssetId& InId);
		TArray<struct FPrimaryAssetId> STATIC_GetDesignDataItemIdsByGameplayTag(const struct FGameplayTag& ItemGameplayTag);
		struct FDesignDataItemContainer STATIC_GetDesignDataItemContainer(const struct FPrimaryAssetId& InId);
		struct FDesignDataItemConsume STATIC_GetDesignDataItemConsume(const struct FPrimaryAssetId& InId);
		struct FDesignDataItem STATIC_GetDesignDataItem(const struct FPrimaryAssetId& InId);
		struct FDesignDataIdTagGroup STATIC_GetDesignDataIdTagGroup(const struct FPrimaryAssetId& InId);
		struct FDesignDataGameplayEffect STATIC_GetDesignDataGameplayEffect(const struct FPrimaryAssetId& InId);
		struct FDesignDataGameplayAbility STATIC_GetDesignDataGameplayAbility(const struct FPrimaryAssetId& InId);
		struct FDesignDataFloorRule STATIC_GetDesignDataFloorRule(const struct FPrimaryAssetId& InId);
		struct FDesignDataFloorPortal STATIC_GetDesignDataFloorPortal(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataEmoteMap(TMap<struct FPrimaryAssetId, struct FDesignDataEmote>* OutDesignDataEmoteMap);
		struct FDesignDataEmote STATIC_GetDesignDataEmote(const struct FPrimaryAssetId& InId);
		void STATIC_GetDesignDataDungeonMap(TMap<struct FPrimaryAssetId, struct FDesignDataDungeon>* OutDesignDataDungeonMap);
		struct FDesignDataDungeon STATIC_GetDesignDataDungeon(const struct FPrimaryAssetId& InId);
		struct FDesignDataConstant STATIC_GetDesignDataConstant(const struct FPrimaryAssetId& InId);
		struct FDesignDataBaseItem STATIC_GetDesignDataBaseItem(const struct FPrimaryAssetId& InId);
		class UDesignDataAssetItemRequirement* STATIC_GetDesignDataAssetItemRequirement(const struct FPrimaryAssetId& InId);
		struct FDesignDataAoe STATIC_GetDesignDataAoe(const struct FPrimaryAssetId& InId);
		class UDescData* STATIC_GetDescData(const struct FPrimaryAssetId& InId);
		void STATIC_GetCharacterBaseItemMap(const struct FPrimaryAssetId& InId, TMap<struct FPrimaryAssetId, int32_t>* BaseItemMap);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEditableText
	 * Size -> 0x0040 (FullSize[0x0590] - InheritedSize[0x0550])
	 */
	class UDCEditableText : public UEditableText
	{
	public:
		unsigned char                                              UnknownData_X0HB[0x40];                                  // 0x0550(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEmoteDataAsset
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UDCEmoteDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Desc[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        EmoteTag;                                                // 0x0078(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ArtData[0x28];                                           // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Abilities[0x10];                                         // 0x00A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Effects[0x10];                                           // 0x00B8(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEmoteListEntryWidgetData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDCEmoteListEntryWidgetData : public UObject
	{
	public:
		struct FDCEmoteInfo                                        EmoteInfo;                                               // 0x0028(0x0010) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSelected;                                             // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRLQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEmoteWidget
	 * Size -> 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
	 */
	class UDCEmoteWidget : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_3BQQ[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EmoteName;                                               // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<class FText>                                        EmoteDescTextArray;                                      // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmoteIconTexture;                                        // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     EmoteId;                                                 // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEquipped;                                             // 0x0380(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_57T6[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEmoteListEntryWidget
	 * Size -> 0x0010 (FullSize[0x0398] - InheritedSize[0x0388])
	 */
	class UDCEmoteListEntryWidget : public UDCEmoteWidget
	{
	public:
		unsigned char                                              UnknownData_803I[0x10];                                  // 0x0388(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		ESlateVisibility GetSelectedVisibility();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEnhancedInputLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCEnhancedInputLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemovePlayerMappableConfigByTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& InputConfigTags);
		void STATIC_InjectInputVectorForAction(class UObject* WorldContextObject, class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		void STATIC_InjectInputForAction(class UObject* WorldContextObject, class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		TArray<struct FKey> GetKeysMappedToAction(class UObject* WorldContextObject, class UInputAction* Action);
		class UDCInputConfig* STATIC_GetInputConfigByTag(class UObject* WorldContextObject, const struct FGameplayTag& InputConfigTag);
		class UInputAction* STATIC_GetInputAction(class UObject* WorldContextObject, const struct FGameplayTag& InputConfigTag, const struct FGameplayTag& InputTag);
		class UEnhancedPlayerInput* STATIC_GetEnhancedPlayerInput(class UObject* WorldContextObject);
		class UDCEnhancedInputLocalPlayerSubsystem* STATIC_GetDCEnhancedInputLocalPlayerSubSystem(class UObject* WorldContextObject);
		struct FInputActionValue STATIC_GetActionValueWithController(class UObject* WorldContextObject, class UInputAction* Action);
		struct FInputActionValue STATIC_GetActionValueByTags(class UObject* WorldContextObject, const struct FGameplayTag& InputConfigTag, const struct FGameplayTag& InputTag);
		bool STATIC_GetActionBoolWithController(class UObject* WorldContextObject, class UInputAction* Action);
		bool STATIC_GetActionBoolByTags(class UObject* WorldContextObject, const struct FGameplayTag& InputConfigTag, const struct FGameplayTag& InputTag);
		void STATIC_AddPlayerMappableConfigByTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& InputConfigTags);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UDCEnhancedInputLocalPlayerSubsystem : public UEnhancedInputLocalPlayerSubsystem
	{
	public:
		void RemovePlayerMappableConfigByTag(const struct FGameplayTag& InputConfigTag, const struct FModifyContextOptions& Options);
		class UPlayerMappableInputConfig* GetPlayerMappableInputConfig(const struct FGameplayTag& ConfigTag);
		class UDCInputConfig* GetInputConfig(const struct FGameplayTag& ConfigTag);
		void AddPlayerMappableConfigByTag(const struct FGameplayTag& InputConfigTag, const struct FModifyContextOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEquipInventory
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UDCEquipInventory : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y9FZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDCInventoryId                                             InventoryId;                                             // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JH33[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           InventoryBoxSize;                                        // 0x0034(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V824[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EDCEquipmentSlotIndex, struct FDCItemId>              Slots;                                                   // 0x0040(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FDCItemId, struct FDCItemInfo>                 ItemInfos;                                               // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P4Y2[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEquipmentSlotWidget
	 * Size -> 0x0030 (FullSize[0x04B0] - InheritedSize[0x0480])
	 */
	class UDCEquipmentSlotWidget : public UDCItemCommonWidget
	{
	public:
		bool                                                       bCanEquip;                                               // 0x0480(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPairSlot;                                               // 0x0481(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDropPreview;                                            // 0x0482(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EEVM[0x5];                                   // 0x0483(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              DropPreviewImage;                                        // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WearingDurationTime;                                     // 0x0490(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WearingRemainTime;                                       // 0x0494(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USizeBox*                                            ItemSizeBox;                                             // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            DropPreviewSizeBox;                                      // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDCEquipmentSlotIndex                                      SlotIndex;                                               // 0x04A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsWeaponSlot;                                           // 0x04A9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B3OG[0x6];                                   // 0x04AA(0x0006) MISSED OFFSET (PADDING)

	public:
		bool IsWeapon();
		bool IsTwoHandedWeapon();
		bool IsPairSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEquipmentWidget
	 * Size -> 0x0100 (FullSize[0x03E8] - InheritedSize[0x02E8])
	 */
	class UDCEquipmentWidget : public UDCInventoryWidgetBase
	{
	public:
		bool                                                       bShowSoulHeart;                                          // 0x02E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L9ZO[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCEquipInventory*                                   Inventory;                                               // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              WeaponL1SlotWidget;                                      // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              WeaponL2SlotWidget;                                      // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              WeaponR1SlotWidget;                                      // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              WeaponR2SlotWidget;                                      // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityL1SlotWidget;                                     // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityL2SlotWidget;                                     // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityL3SlotWidget;                                     // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityR1SlotWidget;                                     // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityR2SlotWidget;                                     // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              UtilityR3SlotWidget;                                     // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              ArmorHeadSlotWidget;                                     // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              ArmorChestSlotWidget;                                    // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              ArmorHandsSlotWidget;                                    // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              ArmorLegsSlotWidget;                                     // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              ArmorFootSlotWidget;                                     // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              AccessoryNecklaceSlotWidget;                             // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              AccessoryRing1SlotWidget;                                // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              AccessoryRing2SlotWidget;                                // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCEquipmentSlotWidget*                              SoulHeartSlotWidget;                                     // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EDCEquipmentSlotIndex, class UDCEquipmentSlotWidget*> SlotWidgets;                                             // 0x0390(0x0050) ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		EDCEquipmentSlotIndex                                      PrevDropPreview;                                         // 0x03E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_45MJ[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnItemsUpdated();
		class UDCEquipmentSlotWidget* GetSlotWidget(EDCEquipmentSlotIndex Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCFloorPortalDataAsset
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCFloorPortalDataAsset : public UDCDataAsset
	{
	public:
		struct FGameplayTag                                        PortalType;                                              // 0x0038(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PortalScrollNum;                                         // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANLC[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCFloorRuleDataAsset
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCFloorRuleDataAsset : public UDCDataAsset
	{
	public:
		TArray<struct FDCFloorRuleItemData>                        FloorRuleItemArray;                                      // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCFriendInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCFriendInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameInstance
	 * Size -> 0x0188 (FullSize[0x0330] - InheritedSize[0x01A8])
	 */
	class UDCGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_HQSZ[0x58];                                  // 0x01A8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0200(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCGameSettings*                                     GameSettings;                                            // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCrashReport*                                      CrashReport;                                             // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              LoginLevel[0x28];                                        // 0x0218(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharacterSelectLevel[0x28];                              // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LobbyLevel[0x28];                                        // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TavernLevel[0x28];                                       // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ResourceClass;                                           // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCResource*                                         Resource;                                                // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         LoadingScreenWidget;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7BTJ[0x38];                                  // 0x02D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCClientAccountManager*                             ClientAccountManager;                                    // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCClientShopManager*                                ClientShopManager;                                       // 0x0310(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCServerAccountManager*                             ServerAccountManager;                                    // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCPlayerManager*                                    PlayerManager;                                           // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCommunityManager*                                 CommunityManager;                                        // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnPreLoadMap(const class FString& MapName);
		void OnLoadingFinished(const class FString& InMapName);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerBase
	 * Size -> 0x0070 (FullSize[0x0410] - InheritedSize[0x03A0])
	 */
	class ADCGameModeAIControllerBase : public AAIController
	{
	public:
		unsigned char                                              UnknownData_KOKB[0x70];                                  // 0x03A0(0x0070) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void ReceivePreInitializeComponents();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerGameBase
	 * Size -> 0x0078 (FullSize[0x0488] - InheritedSize[0x0410])
	 */
	class ADCGameModeAIControllerGameBase : public ADCGameModeAIControllerBase
	{
	public:
		class UAccountLinkAll*                                     AccountLinkAll;                                          // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPlayerPointData                                    StartPlayerPointData;                                    // 0x0418(0x0070) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerArenaBase
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class ADCGameModeAIControllerArenaBase : public ADCGameModeAIControllerGameBase
	{
	public:
		unsigned char                                              UnknownData_J9AP[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerDungeonBase
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class ADCGameModeAIControllerDungeonBase : public ADCGameModeAIControllerGameBase
	{
	public:
		unsigned char                                              UnknownData_XFBT[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerDungeonBattleRoyalBase
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class ADCGameModeAIControllerDungeonBattleRoyalBase : public ADCGameModeAIControllerDungeonBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerDungeonCrawlBase
	 * Size -> 0x0070 (FullSize[0x0500] - InheritedSize[0x0490])
	 */
	class ADCGameModeAIControllerDungeonCrawlBase : public ADCGameModeAIControllerDungeonBase
	{
	public:
		struct FPlayerPointData                                    DownPlayerPointData;                                     // 0x0490(0x0070) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerMetaBase
	 * Size -> 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
	 */
	class ADCGameModeAIControllerMetaBase : public ADCGameModeAIControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerMetaLobbyBase
	 * Size -> 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
	 */
	class ADCGameModeAIControllerMetaLobbyBase : public ADCGameModeAIControllerMetaBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerTavernBase
	 * Size -> 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
	 */
	class ADCGameModeAIControllerTavernBase : public ADCGameModeAIControllerGameBase
	{
	public:
		unsigned char                                              UnknownData_QT4D[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeAIControllerTestBase
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class ADCGameModeAIControllerTestBase : public ADCGameModeAIControllerGameBase
	{
	public:
		unsigned char                                              UnknownData_2VZO[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameModeBase
	 * Size -> 0x0070 (FullSize[0x0388] - InheritedSize[0x0318])
	 */
	class ADCGameModeBase : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_ZG9Q[0x58];                                  // 0x0318(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0370(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              GameModeAIControllerClass;                               // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADCGameModeAIControllerBase*                         GameModeAIController;                                    // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ObjectLinkMetaDataBlueprint
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UObjectLinkMetaDataBlueprint : public UObject
	{
	public:
		struct FObjectLinkMetaData                                 MetaData;                                                // 0x0028(0x0058) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameObjectLinkComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UDCGameObjectLinkComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ER3E[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TypeTag;                                                 // 0x00B8(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FMulticastSparseDelegate                             OnGameObjectLinkEvent;                                   // 0x00C0(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6EZ[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<struct FObjectLinkResponeEvent> RequestToLinkers(struct FObjectLinkRequestEvent* ObjectLinkRequestEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameObjectLinker
	 * Size -> 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
	 */
	class ADCGameObjectLinker : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_MSDV[0x10];                                  // 0x02D8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayAbilityBase
	 * Size -> 0x01A0 (FullSize[0x0558] - InheritedSize[0x03B8])
	 */
	class UDCGameplayAbilityBase : public UGameplayAbility
	{
	public:
		unsigned char                                              UnknownData_OC0I[0xE0];                                  // 0x03B8(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDCGameplayEffectContainer>                  EffectContainerArray;                                    // 0x0498(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDCGameplayEffectData>                       OverrideGameplayEffectDataArray;                         // 0x04A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FActiveGameplayEffectHandle>                 ActiveEffectHandles;                                     // 0x04B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTag                                        IdleAnimSequenceGameplayTag;                             // 0x04C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCMovementModifierContainerData*                    MovementModifierContainer;                               // 0x04D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDesignDataGameplayAbility                          DesignDataGameplayAbility;                               // 0x04D8(0x0058) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               AppliedMovementModifierTags;                             // 0x0530(0x0020) NativeAccessSpecifierPrivate
		bool                                                       bIsDefaultMovementModifierApplied;                       // 0x0550(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EZ3Q[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (PADDING)

	public:
		void RemoveMovementModifier(const struct FGameplayTagContainer& ContainerTags);
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag);
		void RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
		void RemoveAllAppliedMovementModifiers();
		void MakeEffectContainerSpecFromContainer(TArray<struct FDCGameplayEffectContainerSpec>* OutContainerSpecArray, const struct FDCGameplayEffectContainer& Container, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		void MakeEffectContainerSpec(TArray<struct FDCGameplayEffectContainerSpec>* OutContainerSpecArray, const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		void MakeEffectContainerPremadeSpec(class AActor* InActor, const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		int32_t GetSetByCallerValueInEffectContainerArray(const struct FGameplayTag& ContainerTag, const struct FGameplayTag& SetByCallerDataTag);
		struct FGameplayTag GetGameplayTriggerTag(int32_t Index);
		void ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Params);
		void ExecuteGameplayCueLocalWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Params);
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		void ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		void CopyPremadeSpecArray(class AActor* InActor);
		TArray<struct FActiveGameplayEffectHandle> ApplyPremadeSpecArray(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData);
		void ApplyMovementModifier(const struct FGameplayTagContainer& ContainerTags);
		TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpecArray(TArray<struct FDCGameplayEffectContainerSpec>* OutContainerSpecArray, const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData);
		TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const struct FDCGameplayEffectContainerSpec& ContainerSpec);
		TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainer(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		void AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Params);
		void AddGameplayCueLocalWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Params);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		void AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayEffectDataAsset
	 * Size -> 0x0180 (FullSize[0x01B8] - InheritedSize[0x0038])
	 */
	class UDCGameplayEffectDataAsset : public UDCDataAsset
	{
	public:
		class UClass*                                              EffectClass;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0040(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectTargetType                                  TargetType;                                              // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUVY[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Duration;                                                // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StrengthBase;                                            // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StrengthMod;                                             // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityBase;                                             // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityMod;                                              // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillBase;                                                // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillMod;                                                 // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeBase;                                           // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeMod;                                            // 0x006C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulnessBase;                                     // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulnessMod;                                      // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecDamageWeaponRatio;                                   // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageWeapon;                                    // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageBase;                                      // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalDamageBase;                                  // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalPower;                                           // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageMod;                                       // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageAdd;                                       // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageTrue;                                      // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalDamageTrue;                                  // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalBackstabPower;                                   // 0x009C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalRangedHeadshotPower;                             // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPenetration;                                        // 0x00A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecArmorPenetration;                                    // 0x00A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorRating;                                             // 0x00AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemArmorRatingMod;                                      // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalReduction;                                       // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalReductionMod;                                    // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalAbsoluteReduction;                               // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageWeapon;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageBase;                                       // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalDamageBase;                                   // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalPower;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageMod;                                        // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageAdd;                                        // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageTrue;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalDamageTrue;                                   // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicPenetration;                                        // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicPenetration;                                    // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageBase;                                   // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageMod;                                    // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageAdd;                                    // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageBase;                                 // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageMod;                                  // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageAdd;                                  // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicResistance;                                         // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalReduction;                                        // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalReductionMod;                                     // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalAbsoluteReduction;                                // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeadshotReductionMod;                                    // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectileReductionMod;                                  // 0x0114(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImpactPower;                                             // 0x0118(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecImpactPower;                                         // 0x011C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecImpactEnduranceRestore;                              // 0x0120(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImpactResistance;                                        // 0x0124(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxImpactEndurance;                                      // 0x0128(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecAddHealthByCurHealthRatio;                           // 0x012C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecAddHealthByMaxHealthRatio;                           // 0x0130(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalHealBase;                                        // 0x0134(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalHealBase;                                    // 0x0138(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalHealBase;                                         // 0x013C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalHealBase;                                     // 0x0140(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHealthMod;                                            // 0x0144(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHealthAdd;                                            // 0x0148(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddtionalAggroMod;                                       // 0x014C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPhysicalShield;                                       // 0x0150(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMagicalShield;                                        // 0x0154(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTotalShield;                                          // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCapacityMod;                                        // 0x015C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCapacityAdd;                                        // 0x0160(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedBase;                                           // 0x0164(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedMod;                                            // 0x0168(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedAdd;                                            // 0x016C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedArmorPenaltyMod;                                // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActionSpeed;                                             // 0x0174(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCastingSpeed;                                       // 0x0178(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemEquipSpeed;                                          // 0x017C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RegularInteractionSpeed;                                 // 0x0180(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalInteractionSpeed;                                 // 0x0184(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuffDurationMod;                                         // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebuffDurationMod;                                       // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UtilityEffectivenessMod;                                 // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UtilityEffectivenessAdd;                                 // 0x0194(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightLimitMod;                                          // 0x0198(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightLimitAdd;                                          // 0x019C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeItemDrop;                                        // 0x01A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSLL[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                Tags;                                                    // 0x01A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMovementModifierDataAsset
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCMovementModifierDataAsset : public UDCDataAsset
	{
	public:
		int32_t                                                    Add;                                                     // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiply;                                                // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayAbilityDataAsset
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UDCGameplayAbilityDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AttackType;                                              // 0x0050(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Effects[0x10];                                           // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Desc[0x28];                                              // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MovementModifiers[0x10];                                 // 0x0098(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayCueManager
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UDCGameplayCueManager : public UGameplayCueManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayCueNotify_Actor
	 * Size -> 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
	 */
	class ADCGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_0DE8[0x18];                                  // 0x02D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetAkComponentRTPCValue(class UAkComponent* AkComponent, class UAkRtpc* RtpcValue, float InTickValue, float InTotalValue, float InMaxRTPCValue);
		void ClearAkComponentRTPCValue();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayEffectUIData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDCGameplayEffectUIData : public UGameplayEffectUIData
	{
	public:
		class UActorStatusUIData*                                  UIDataAsset;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameplayTagCollider
	 * Size -> 0x00E8 (FullSize[0x03C0] - InheritedSize[0x02D8])
	 */
	class ADCGameplayTagCollider : public ADCActorBase
	{
	public:
		class UAccountLink*                                        OwnerAccountLink;                                        // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              OwnerAccountId;                                          // 0x02E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TargetAccountId;                                         // 0x02F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        TargetAccountLink;                                       // 0x0300(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                TargetPlayerPawn;                                        // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAccountDataReplication                             TargetAccountDataReplication;                            // 0x0310(0x0070) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               TargetOwnedGameplayeTags;                                // 0x0380(0x0020) NativeAccessSpecifierPrivate
		float                                                      ColliderRadius;                                          // 0x03A0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W1B4[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    GameplayTagOverlapSphere;                                // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDCTagCollisionDetectorComponent*>            OverlapDetectorComponentArray;                           // 0x03B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnRep_TargetAccountId(const class FString& InOldTargetAccountId);
		void OnOverlapping();
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameSession
	 * Size -> 0x01E0 (FullSize[0x0470] - InheritedSize[0x0290])
	 */
	class ADCGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_GRRM[0xF8];                                  // 0x0290(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCGameplayEffectData                               RespawnGameplayEffectData;                               // 0x0388(0x0048) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DP6K[0x50];                                  // 0x03D0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x0420(0x0010) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     MaxSkillSlotCountConstant;                               // 0x0430(0x0010) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     AdvPointPlayerKillConstant;                              // 0x0440(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     AdvPointDungeonDownConstant;                             // 0x0450(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     ExpPointDungeonDownConstant;                             // 0x0460(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void CharacterResurrection(const class FString& AccountId, class UClass* DCCharacterClass, TArray<struct FDCGameplayEffectSetByCallerData> InInitGameplayEffectSetByCallerDataArray, bool bIsRemoveAllItem, class ADCCharacterProduction* CharacterProduction);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCGameSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FServerInfo>                                 ServerList;                                              // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameSpawner
	 * Size -> 0x0078 (FullSize[0x0350] - InheritedSize[0x02D8])
	 */
	class ADCGameSpawner : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_0U6S[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDesignDataAssetSpawner*                             DesignDataAssetSpawner;                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RandomScaleMin;                                          // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RandomScaleMax;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ATargetPoint*>                                TargetPoints;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDesignDataSpawnerItem                              DesignDataSpawnerItem;                                   // 0x0300(0x0034) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    PreviewIdx;                                              // 0x0334(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     PreviewAssetId;                                          // 0x0338(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              PreviewActor;                                            // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateGameState(const struct FGameStateData& InGameStateData);
		class APropsActorBase* SpawnProps(const struct FPrimaryAssetId& InPropsId);
		class ADCMonsterBase* SpawnMonster(const struct FPrimaryAssetId& InMonsterId, bool bPreview);
		class AItemHolderActorBase* SpawnItemHolder(const struct FPrimaryAssetId& InLootDropId);
		void SetNextPreview();
		void BindFMsgGameStateNotify();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameSpawnerGroup
	 * Size -> 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
	 */
	class ADCGameSpawnerGroup : public ADCActorBase
	{
	public:
		int32_t                                                    Count;                                                   // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8N1E[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameStateBase
	 * Size -> 0x0340 (FullSize[0x0608] - InheritedSize[0x02C8])
	 */
	class ADCGameStateBase : public AGameStateBase
	{
	public:
		unsigned char                                              UnknownData_501I[0x58];                                  // 0x02C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0320(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7EG4[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameStateData>                              GameStateDataArray;                                      // 0x0340(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TArray<struct FAccountDataReplication>                     AccountDataReplicationArray;                             // 0x0350(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TMap<class FString, class UAccountSession*>                AccountSessionMap;                                       // 0x0360(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FString, TWeakObjectPtr<class ADCCharacterBase>> PlayerCharacters;                                        // 0x03B0(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GS68[0xF0];                                  // 0x0400(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyData>                                  PartyDataArray;                                          // 0x04F0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TMap<class FString, class UPartySession*>                  PartySessionMap;                                         // 0x0500(0x0050) Transient, NativeAccessSpecifierPrivate
		class ADeathSwarmBase*                                     DeathSwarm;                                              // 0x0550(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameFloorRuleData                                  GameFloorRuleData;                                       // 0x0558(0x0060) Net, RepNotify, NativeAccessSpecifierPrivate
		struct FDCGameInfo                                         GameInfo;                                                // 0x05B8(0x0038) Net, RepNotify, NativeAccessSpecifierPrivate
		struct FDCDungeonInfo                                      DungeonInfo;                                             // 0x05F0(0x000C) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      ServerAverageFps;                                        // 0x05FC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ServerAverageMs;                                         // 0x0600(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4DW[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void SetGameInfo(const struct FDCGameInfo& InGameInfo);
		void SetDungeonInfo_HideDeathSwarmTimer(bool HideDeathSwarmTimer);
		void SetDungeonInfo_GameTimeSec(int32_t GameTimeSec);
		void OnSetGameInfo(const struct FDCGameInfo& OldGameInfo);
		void OnRep_PartyDataArray(TArray<struct FPartyData> OldPartyDataArray);
		void OnRep_GameStateDataArray(TArray<struct FGameStateData> OldGameStateDataArray);
		void OnRep_GameInfo(const struct FDCGameInfo& OldGameInfo);
		void OnRep_GameFloorRuleData(const struct FGameFloorRuleData& InOldGameFloorRuleData);
		void OnRep_DungeonInfo(const struct FDCDungeonInfo& OldDungeonInfo);
		void OnRep_AccountDataReplicationArray(TArray<struct FAccountDataReplication> OldAccountDataReplicationArray);
		void OnGameFloorRuleData(const struct FGameFloorRuleData& InGameFloorRuleData);
		void OnDungeonInfo(const struct FDCDungeonInfo& InDungeonInfo);
		struct FDCGameInfo GetGameInfo();
		struct FDCDungeonInfo GetDungeonInfo();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGameUserSettings
	 * Size -> 0x0210 (FullSize[0x0338] - InheritedSize[0x0128])
	 */
	class UDCGameUserSettings : public UGameUserSettings
	{
	public:
		unsigned char                                              UnknownData_VMSQ[0x68];                                  // 0x0128(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InputConfigName;                                         // 0x0190(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FLoadedMappableConfigPair>                   RegisteredInputConfigs;                                  // 0x0198(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TMap<class FName, struct FKey>                             CustomKeyboardConfig;                                    // 0x01A8(0x0050) Config, NativeAccessSpecifierPrivate
		TMap<class FName, struct FKey>                             PendingCustomKeyboardConfig;                             // 0x01F8(0x0050) NativeAccessSpecifierPrivate
		class FString                                              LastConnectedServerAddress;                              // 0x0248(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameUserSettingControls                            DefaultGameUserSettingControls;                          // 0x0258(0x0028) Config, NativeAccessSpecifierPrivate
		struct FGameUserSettingControls                            GameUserSettingControls;                                 // 0x0280(0x0028) Config, NativeAccessSpecifierPrivate
		struct FGameUserSettingAudios                              DefaultGameUserSettingAudios;                            // 0x02A8(0x0010) Config, NoDestructor, NativeAccessSpecifierPrivate
		struct FGameUserSettingAudios                              GameUserSettingAudios;                                   // 0x02B8(0x0010) Config, NoDestructor, NativeAccessSpecifierPrivate
		struct FGameUserSettingVideoDisplay                        UserSettingVideoDisplay;                                 // 0x02C8(0x0014) Config, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0SKT[0x5C];                                  // 0x02DC(0x005C) MISSED OFFSET (PADDING)

	public:
		class UPlayerMappableInputConfig* GetInputConfigByName(const class FName& ConfigName);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_AimTrace
	 * Size -> 0x0008 (FullSize[0x03C8] - InheritedSize[0x03C0])
	 */
	class ADCGATA_AimTrace : public AGameplayAbilityTargetActor
	{
	public:
		float                                                      MaxRange;                                                // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x03C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3PA[0x3];                                   // 0x03C5(0x0003) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_AimTraceOnServer
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class ADCGATA_AimTraceOnServer : public ADCGATA_AimTrace
	{
	public:
		unsigned char                                              UnknownData_4G8L[0x8];                                   // 0x03C8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_AimTraceToSocket
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class ADCGATA_AimTraceToSocket : public ADCGATA_AimTrace
	{
	public:
		class FScriptMulticastDelegate                             SocketSightBlocked;                                      // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SocketSightUnblocked;                                    // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x03E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x03F8(0x0028) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_AimTraceWithSphere
	 * Size -> 0x0010 (FullSize[0x03D0] - InheritedSize[0x03C0])
	 */
	class ADCGATA_AimTraceWithSphere : public AGameplayAbilityTargetActor
	{
	public:
		float                                                      MaxRange;                                                // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PESQ[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_GroundTraceWithMaxHeight
	 * Size -> 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
	 */
	class ADCGATA_GroundTraceWithMaxHeight : public AGameplayAbilityTargetActor_GroundTrace
	{
	public:
		unsigned char                                              UnknownData_0IYM[0x8];                                   // 0x03F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_LineCollision
	 * Size -> 0x0120 (FullSize[0x04E0] - InheritedSize[0x03C0])
	 */
	class ADCGATA_LineCollision : public AGameplayAbilityTargetActor
	{
	public:
		struct FCollisionProfileName                               TraceProfile;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bIgnoreBlockingHits;                                     // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F354[0x2];                                   // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugLineDrawTime;                                       // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QDN[0x110];                                 // 0x03D0(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGATA_LineTraceInteractable
	 * Size -> 0x00E0 (FullSize[0x04A0] - InheritedSize[0x03C0])
	 */
	class ADCGATA_LineTraceInteractable : public AGameplayAbilityTargetActor
	{
	public:
		class FScriptMulticastDelegate                             FoundNewInteractableTarget;                              // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LostInteractableTarget;                                  // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66S9[0xB8];                                  // 0x03E8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGeometryCollectionComponent
	 * Size -> 0x0000 (FullSize[0x0AB0] - InheritedSize[0x0AB0])
	 */
	class UDCGeometryCollectionComponent : public UGeometryCollectionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGhostTrailActor
	 * Size -> 0x00F8 (FullSize[0x03D0] - InheritedSize[0x02D8])
	 */
	class ADCGhostTrailActor : public ADCActorBase
	{
	public:
		class UMaterialInterface*                                  GhostTrailMaterial;                                      // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScalarParameterName;                                     // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         OpacityCurve;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACharacter*                                          CharacterRef;                                            // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x02F8(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoActive;                                             // 0x0308(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48QN[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoseableMeshComponent*                              PoseableMeshComp;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshComponent*>                              AttachedMeshComp;                                        // 0x0318(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class USceneComponent*                                     SceneRootComp;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimeline                                           OpacityTimeline;                                         // 0x0330(0x0098) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            DynamicMatInstance;                                      // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetGhostMaterial(TArray<class UMeshComponent*> Components);
		void HandleTimelineUpdate(float Value);
		void HandleTimelineFinished();
		void BeginGhostTrailEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCHitBoxComponent
	 * Size -> 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
	 */
	class UDCHitBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_JE86[0x4];                                   // 0x0578(0x0004) Fix Super Size
		float                                                      DamageMultiplier;                                        // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		struct FHitResult GetHitResultFromClosestLocationTraceOnMesh(const struct FHitResult& InHitResult, class AActor* Instigator);
		EHitDirection GetHitDirection(const struct FVector& AttackerLocation);
		struct FVector GetClosestLocationOnMesh(const struct FHitResult& InHitResult, class AActor* Instigator);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCHudWidgetBase
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UDCHudWidgetBase : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCIdTagGroupItemDataAsset
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCIdTagGroupItemDataAsset : public UDCDataAsset
	{
	public:
		TArray<struct FDCIdTagGroupItemData>                       IdTagGroupItemArray;                                     // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCIngameGameMode
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class ADCIngameGameMode : public ADCGameModeBase
	{
	public:
		unsigned char                                              UnknownData_NMTW[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCIngameGameSession
	 * Size -> 0x0050 (FullSize[0x04C0] - InheritedSize[0x0470])
	 */
	class ADCIngameGameSession : public ADCGameSession
	{
	public:
		unsigned char                                              UnknownData_T1UI[0x50];                                  // 0x0470(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInputComponent
	 * Size -> 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
	 */
	class UDCInputComponent : public UEnhancedInputComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInputConfig
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDCInputConfig : public UDataAsset
	{
	public:
		TArray<struct FDCInputAction>                              NativeInputActions;                                      // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInputConfigData
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UDCInputConfigData : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, class UPlayerMappableInputConfig*> PlayerMappableInputConfigMap;                            // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UDCInputConfig*>           InputConfigMap;                                          // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInputNumberWidget
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UDCInputNumberWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_2F42[0x20];                                  // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlider*                                             Slider;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            ButtonAccept;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            ButtonCancel;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnCancelled();
		void OnAccepted();
		void ManualClick();
		bool IsValidText(const class FText& Text);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInteractTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCInteractTargetInterface : public UInterface
	{
	public:
		void InteractTargetInfoRarity(struct FGameplayTag* RarityTag);
		void InteractTargetInfoName(class FText* Name);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInventoryComponent
	 * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
	 */
	class UDCInventoryComponent : public UActorComponent
	{
	public:
		unsigned char                                              InventoryMap[0x50];                                      // 0x00B0(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCInventoryBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCInventoryBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemActorAttributeSet
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class UDCItemActorAttributeSet : public UDCAttributeSet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemContainerDataAsset
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UDCItemContainerDataAsset : public UDCDataAsset
	{
	public:
		unsigned char                                              ContentsItemId[0x28];                                    // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    MaxContentsCount;                                        // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8L9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemBundleInfoDataAsset
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCItemBundleInfoDataAsset : public UDCDataAsset
	{
	public:
		TArray<struct FDDCItemBundleInfoItem>                      ItemBundleInfoItemArray;                                 // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemRequirementDataAsset
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UDCItemRequirementDataAsset : public UDCDataAsset
	{
	public:
		TArray<struct FPrimaryAssetId>                             ClassRequirements;                                       // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    StrengthRequirement;                                     // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityRequirement;                                      // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillRequirement;                                         // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeRequirement;                                    // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulRequirement;                                  // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_703V[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             PerkRequirements;                                        // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemPropertyTypeDataAsset
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UDCItemPropertyTypeDataAsset : public UDCDataAsset
	{
	public:
		struct FGameplayTag                                        PropertyType;                                            // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EffectType;                                              // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueRatio;                                              // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1F43[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemPropertyDataAsset
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDCItemPropertyDataAsset : public UDCDataAsset
	{
	public:
		TArray<struct FDDCItemPropertyItem>                        ItemPropertyItemArray;                                   // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemConsumeDataAsset
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UDCItemConsumeDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                ConsumeText;                                             // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      ConsumeDuration;                                         // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVNV[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemDataAsset
	 * Size -> 0x0228 (FullSize[0x0260] - InheritedSize[0x0038])
	 */
	class UDCItemDataAsset : public UDCDataAsset
	{
	public:
		struct FGameplayTag                                        IdTag;                                                   // 0x0038(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0040(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Desc[0x28];                                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        SlotType;                                                // 0x0080(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        HandType;                                                // 0x0088(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                WeaponTypes;                                             // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ArmorType;                                               // 0x00A0(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        UtilityType;                                             // 0x00A8(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AccessoryType;                                           // 0x00B0(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MiscType;                                                // 0x00B8(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        RarityType;                                              // 0x00C0(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmmoCount;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanDrop;                                                 // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSaveIntoDatabase;                                     // 0x00D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELV6[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ArtData[0x28];                                           // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SoundData[0x28];                                         // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ConsumeData[0x28];                                       // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ActorClass;                                              // 0x0150(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryWidth;                                          // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryHeight;                                         // 0x015C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WearingDelayTime;                                        // 0x0160(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA46[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SelfAbilities[0x10];                                     // 0x0168(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SelfEffects[0x10];                                       // 0x0178(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Abilities[0x10];                                         // 0x0188(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Effects[0x10];                                           // 0x0198(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              PrimaryProperty[0x28];                                   // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SecondaryProperties[0x10];                               // 0x01D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Requirement[0x28];                                       // 0x01E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BundleInfo[0x28];                                        // 0x0208(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ContainerData[0x28];                                     // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    AdvPoint;                                                // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpPoint;                                                // 0x025C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemDragDropOperation
	 * Size -> 0x0128 (FullSize[0x01B8] - InheritedSize[0x0090])
	 */
	class UDCItemDragDropOperation : public UDragDropOperation
	{
	public:
		class UDCItemCommonWidget*                                 Ref;                                                     // 0x0090(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCInventoryId                                             InventoryId;                                             // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVLU[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCItemInfo                                         ItemInfo;                                                // 0x00A0(0x0108) Transient, NativeAccessSpecifierPublic
		struct FVector2D                                           DragOffset;                                              // 0x01A8(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemDragVisualWidget
	 * Size -> 0x0008 (FullSize[0x0488] - InheritedSize[0x0480])
	 */
	class UDCItemDragVisualWidget : public UDCItemCommonWidget
	{
	public:
		class USizeBox*                                            ItemSizeBox;                                             // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinArtData
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UDCItemSkinArtData : public UArtDataUtility
	{
	public:
		class UTexture2D*                                          ItemSkinIconTexture;                                     // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinComponent
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UDCItemSkinComponent : public UActorComponent
	{
	public:
		TArray<class UDCItemSkinDataAsset*>                        Datas;                                                   // 0x00B0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MO2A[0x50];                                  // 0x00C0(0x0050) MISSED OFFSET (PADDING)

	public:
		void RemoveDataForDebug_Server(const struct FPrimaryAssetId& ID);
		void OnRep_Datas(TArray<class UDCItemSkinDataAsset*> OldDatas);
		void AddDataForDebug_Server(class UDCItemSkinDataAsset* InData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinDataAsset
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UDCItemSkinDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Desc[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ItemActor;                                               // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileActor;                                         // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Art[0x28];                                               // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        TargetItem;                                              // 0x00B0(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinListEntryWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDCItemSkinListEntryWidgetData : public UObject
	{
	public:
		struct FDCItemSkinInfo                                     ItemSkinInfo;                                            // 0x0028(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinWidget
	 * Size -> 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
	 */
	class UDCItemSkinWidget : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0AGL[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ItemSkinName;                                            // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<class FText>                                        ItemSkinDescTextArray;                                   // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          ItemSkinIconTexture;                                     // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     ItemSkinId;                                              // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEquipped;                                             // 0x0380(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ISGI[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TooltipWidgetClass;                                      // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         SkinTooltipWidget;                                       // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UUserWidget* GetTooltipWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinListEntryWidget
	 * Size -> 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
	 */
	class UDCItemSkinListEntryWidget : public UDCItemSkinWidget
	{
	public:
		unsigned char                                              UnknownData_R9NI[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipNameWidget
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipNameWidget : public UDCItemWidgetBase
	{
	public:
		struct FGameplayTag                                        Rarity;                                                  // 0x0458(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSoulHeart;                                            // 0x0460(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U1WX[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          ItemNameTextBlock;                                       // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          SoulHeartOwnerNameTextBlock;                             // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipStatElementWidget
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UDCItemTooltipStatElementWidget : public UUserWidget
	{
	public:
		class UDCItemPropertyTypeDataAsset*                        Data;                                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Value;                                                   // 0x0298(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7RSM[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipStatWidget
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipStatWidget : public UDCItemWidgetBase
	{
	public:
		class UVerticalBox*                                        VerticalBox;                                             // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PrimaryChildWidgetClass;                                 // 0x0460(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SecondaryChildWidgetClass;                               // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipAbilityElementWidget
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UDCItemTooltipAbilityElementWidget : public UUserWidget
	{
	public:
		class URichTextBlock*                                      RichTextBlock;                                           // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipAbilityWidget
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipAbilityWidget : public UDCItemWidgetBase
	{
	public:
		class UVerticalBox*                                        VerticalBox;                                             // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ChildWidgetClass;                                        // 0x0460(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipRequirementWidget
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipRequirementWidget : public UDCItemWidgetBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             ClassIds;                                                // 0x0458(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bRequired;                                               // 0x0468(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4TC4[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipInfoWidget
	 * Size -> 0x0038 (FullSize[0x0490] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipInfoWidget : public UDCItemWidgetBase
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0458(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H9ZN[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        SlotType;                                                // 0x045C(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7T4M[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                WeaponTypes;                                             // 0x0468(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayTag                                        HandType;                                                // 0x0478(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        ArmorType;                                               // 0x0480(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        UtilityType;                                             // 0x0488(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemTooltipWidget
	 * Size -> 0x0040 (FullSize[0x0498] - InheritedSize[0x0458])
	 */
	class UDCItemTooltipWidget : public UDCItemWidgetBase
	{
	public:
		class UDCItemTooltipNameWidget*                            NameWidget;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCItemTooltipStatWidget*                            StatWidget;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCItemTooltipAbilityWidget*                         AbilityWidget;                                           // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCItemTooltipRequirementWidget*                     RequirementWidget;                                       // 0x0470(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCItemTooltipInfoWidget*                            InfoWidget;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          DescTextBlock;                                           // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDCItemWidgetBase*>                           ChildWidgets;                                            // 0x0488(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemViewerActor
	 * Size -> 0x0030 (FullSize[0x0308] - InheritedSize[0x02D8])
	 */
	class ADCItemViewerActor : public ADCActorBase
	{
	public:
		struct FRotator                                            DefaultItemActorRotation;                                // 0x02D8(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      StartRotateLocation;                                     // 0x02F0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8E03[0xC];                                   // 0x02F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ItemActor;                                               // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetStartRotateLocation(float InStartPosition);
		void SetItemActorRotation(float InYaw);
		void InitItemActorRotation();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCLoadoutWidget
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class UDCLoadoutWidget : public UDCInventoryWidgetBase
	{
	public:
		class UDCPlayerInventoryWidget*                            PlayerInventoryWidget;                                   // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCBagWidget*                                        StorageWidget;                                           // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInitialized;                                            // 0x02F8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZK8[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (PADDING)

	public:
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCLoginGameMode
	 * Size -> 0x00A0 (FullSize[0x0428] - InheritedSize[0x0388])
	 */
	class ADCLoginGameMode : public ADCGameModeBase
	{
	public:
		unsigned char                                              UnknownData_FX44[0xA0];                                  // 0x0388(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMerchantBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCMerchantBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FStockSellBackReceivedData> STATIC_GetStockSellBackReceivedDataArray(const struct FDesignDataStockSellBackItem& InDesignDataStockSellBackItem);
		TArray<struct FStockCraftRequiredData> STATIC_GetStockCraftRequiredDataArray(const struct FDesignDataStockCraftItem& InDesignDataStockCraftItem);
		TArray<struct FStockBuyRequiredData> STATIC_GetStockBuyRequiredDataArray(const struct FDesignDataStockBuyItem& InDesignDataStockBuyItem);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaCustomizeComponent
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UDCMetaCustomizeComponent : public UDCCustomizeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaGameMode
	 * Size -> 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
	 */
	class ADCMetaGameMode : public ADCGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaGameSession
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class ADCMetaGameSession : public ADCGameSession
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaInventoryComponent
	 * Size -> 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
	 */
	class UDCMetaInventoryComponent : public UDCInventoryComponent
	{
	public:
		unsigned char                                              UnknownData_PT22[0x58];                                  // 0x0100(0x0058) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnResetInventory();
		void OnItemDrop(const struct FDCItemId& ItemId, int32_t Count, EDCInventoryId Src, EDCInventoryId Dst, int32_t Index);
		void OnItemClick(const struct FDCItemId& ItemId, EDCInventoryId From, const struct FPointerEvent& Event);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaPlayerController
	 * Size -> 0x00A0 (FullSize[0x0868] - InheritedSize[0x07C8])
	 */
	class ADCMetaPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_8WSY[0x58];                                  // 0x07C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0820(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAccountLink*                                        AccountLink;                                             // 0x0828(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TargetAccountId;                                         // 0x0830(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3RPN[0x4];                                   // 0x0840(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x0844(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     MaxSkillSlotCountConstant;                               // 0x0854(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GZJQ[0x4];                                   // 0x0864(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateGameState(const struct FGameStateData& InGameStateData);
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void Gm(const class FString& InCmd);
		struct FAccountSessionData GetAccountSessionData();
		void ExitClient();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaComponentBase
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UMetaComponentBase : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1X6A[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMetaTradeComponent
	 * Size -> 0x0208 (FullSize[0x0318] - InheritedSize[0x0110])
	 */
	class UDCMetaTradeComponent : public UMetaComponentBase
	{
	public:
		class UClass*                                              CommonPopupWidget;                                       // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PDK5[0x50];                                  // 0x0118(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ResetTimerHandle;                                        // 0x0168(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OWV9[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TradingBoxMap[0x50];                                     // 0x0180(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              UnknownData_4EBI[0x148];                                 // 0x01D0(0x0148) MISSED OFFSET (PADDING)

	public:
		void UpdateResetTimer();
		void OnTradingBoxItemUpdate(const struct FDCItemInfo& ItemInfo, int32_t Index, EDCInventoryId InventoryId);
		void OnTradingBoxItemRemove(const struct FDCItemId& ItemId, EDCInventoryId InventoryId);
		void OnTradingBoxItemAdd(const struct FDCItemInfo& ItemInfo, int32_t Index, EDCInventoryId InventoryId);
		void OnItemDrop(const struct FDCItemId& ItemId, int32_t _, EDCInventoryId From, EDCInventoryId To, int32_t Index);
		void OnItemClick(const struct FDCItemId& ItemId, EDCInventoryId From, const struct FPointerEvent& Event);
		void OnInventoryItemClick(const struct FDCItemId& ItemId, EDCInventoryId From, const struct FPointerEvent& Event);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterAIController
	 * Size -> 0x00A0 (FullSize[0x0440] - InheritedSize[0x03A0])
	 */
	class ADCMonsterAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_U68C[0x58];                                  // 0x03A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KU3N[0x20];                                  // 0x0400(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               TargetInvisibleStateTagContainer;                        // 0x0420(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void OnTargetPerceptionInfoUpdated(const struct FActorPerceptionUpdateInfo& UpdateInfo);
		void OnPerceptionUpdated(TArray<class AActor*> UpdatedActors);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterAISystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCMonsterAISystemBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SubAggro(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target, float Point);
		class ADCCharacterBase* STATIC_SpawnSlave(class ADCMonsterBase** DCMonsterBase, class UClass* SlaveClass, float XYRange, bool* bSuccessfully);
		bool STATIC_SortTargetsByZRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, EMonsterFilterSortingType MonsterFilterSortingType);
		bool STATIC_SortTargetsByXYRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, EMonsterFilterSortingType MonsterFilterSortingType);
		class ADCCharacterBase* STATIC_SortTargetsByDistanceAndPickTarget(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, EMonsterFilterSortingType MonsterFilterSortingType, int32_t Index);
		bool STATIC_SortTargetsByDistance(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, EMonsterFilterSortingType MonsterFilterSortingType);
		bool STATIC_SortTargetsByAggro(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, EMonsterFilterSortingType MonsterFilterSortingType);
		bool STATIC_SetAggroRate(class ADCCharacterBase** DCCharacterBase, float Time, float Rate);
		bool STATIC_SetAggro(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target, float Point);
		bool STATIC_RemoveAggroAll(class ADCCharacterBase* DCCharacterBase);
		bool STATIC_RemoveAggro(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target);
		class ADCCharacterBase* STATIC_PickTopAggroTarget(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray);
		class ADCCharacterBase* STATIC_PickTarget(TArray<class ADCCharacterBase*>* TargetArray, int32_t Index);
		class ADCCharacterBase* STATIC_PickRandomTarget(TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_MulAggro(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target, float Point);
		bool STATIC_JumpToLocation(class ADCCharacterBase** DCCharacterBase, const struct FVector& DstLocation, float Power, bool bFavorHighArc);
		bool STATIC_JumpToActor(class ADCCharacterBase** DCCharacterBase, class AActor** DstActor, float Power, bool bFavorHighArc);
		bool STATIC_IsAvailablePath(class ADCMonsterBase** DCMonsterBase, const struct FVector& DstLocation);
		int32_t STATIC_GetSlaveCount(class ADCMonsterBase** DCMonsterBase);
		bool STATIC_GetSightTargetArray(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_GetHearingTargetArray(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_GetDamageTargetArray(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray);
		float STATIC_GetCurrentAttributeValue(class ADCCharacterBase** DCCharacterBase, const struct FGameplayAttribute& GameplayAttribute, bool* bSuccessfully);
		float STATIC_GetBaseAttributeValue(class ADCCharacterBase** DCCharacterBase, const struct FGameplayAttribute& GameplayAttribute, bool* bSuccessfully);
		bool STATIC_GetAllTargetArray(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray);
		float STATIC_GetAggroPoint(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target, bool* bSuccessfully);
		bool STATIC_GetAggroMonster(class ADCCharacterBase* DCCharacterBase, TArray<class ADCMonsterBase*>* TargetArray);
		bool STATIC_FilterUnTagedTargets(TArray<class ADCCharacterBase*>* TargetArray, const struct FGameplayTag& GameplayTag);
		bool STATIC_FilterTargetsWithinZRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float ZRange);
		bool STATIC_FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float XYRange, float ZRange, float DirectionalAngle, float AllowedAngle);
		bool STATIC_FilterTargetsWithinXYRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float XYRange);
		bool STATIC_FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float Distance, float DirectionalAngle, float AllowedAngle);
		bool STATIC_FilterTargetsWithinDistance(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float Distance);
		bool STATIC_FilterTargetsWithinDirectionAngleAndAllowedAngle(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float DirectionalAngle, float AllowedAngle);
		bool STATIC_FilterTargetsOverZRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float ZRange);
		bool STATIC_FilterTargetsOverXYRange(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float XYRange);
		bool STATIC_FilterTargetsOverDistance(class ADCMonsterBase** DCMonsterBase, TArray<class ADCCharacterBase*>* TargetArray, float Distance);
		bool STATIC_FilterTagedTargets(TArray<class ADCCharacterBase*>* TargetArray, const struct FGameplayTag& GameplayTag);
		void STATIC_FilterPlayerCharacterTargets(TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_FilterMonsterTargetsByID(TArray<class ADCCharacterBase*>* TargetArray, const struct FPrimaryAssetId& ID);
		void STATIC_FilterMonsterTargets(TArray<class ADCCharacterBase*>* TargetArray);
		bool STATIC_AddAggro(class ADCMonsterBase** DCMonsterBase, class ADCCharacterBase** Target, float Point);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterAnimInstanceBase
	 * Size -> 0x0028 (FullSize[0x0490] - InheritedSize[0x0468])
	 */
	class UDCMonsterAnimInstanceBase : public UDCCharacterAnimInstanceBase
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0468(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsStaggered;                                            // 0x0480(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9IDO[0xF];                                   // 0x0481(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterBase
	 * Size -> 0x02E8 (FullSize[0x0B30] - InheritedSize[0x0848])
	 */
	class ADCMonsterBase : public ADCCharacterBase
	{
	public:
		unsigned char                                              UnknownData_UAUE[0x8];                                   // 0x0848(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ZV0X[0x78];                                  // 0x0850(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     MonsterId;                                               // 0x08C8(0x0010) Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AL7S[0x68];                                  // 0x08D8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArtDataMonster*                                     ArtDataMonster;                                          // 0x0940(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              OrientRotationToMovement;                                // 0x0948(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F646[0x77];                                  // 0x0949(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MonsterCollisionProfile;                                 // 0x09C0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T1RN[0x77];                                  // 0x09C1(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PauseAnims;                                              // 0x0A38(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WBB0[0x7];                                   // 0x0A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MonsterSpawnableInterface[0x10];                         // 0x0A40(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UDesignDataAssetMonster*                             DesignDataAssetMonster;                                  // 0x0A50(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAcceleration;                                         // 0x0A58(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalAcceleration;                                      // 0x0A5C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAcceleration;                                         // 0x0A60(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTZ4[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnedPoint;                                            // 0x0A68(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ATargetPoint*>                                TargetPoints;                                            // 0x0A80(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAggressive;                                             // 0x0A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMonsterCollisionProfile                                   DefaultMonsterCollisionProfile;                          // 0x0A91(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTZU[0x6];                                   // 0x0A92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRagdollDeath;                                           // 0x0AA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60FB[0x7];                                   // 0x0AA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class AActor>, struct FAggroInfo>      AggroInfoMap;                                            // 0x0AA8(0x0050) NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class ADCCharacterBase>>             SightTargets;                                            // 0x0AF8(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class ADCCharacterBase>>             HearingTargets;                                          // 0x0B08(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class ADCCharacterBase>>             Slaves;                                                  // 0x0B18(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU1L[0x8];                                   // 0x0B28(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetMonsterId(const struct FPrimaryAssetId& InMonsterId);
		void OnStuckByShield(class ADCCharacterBase* InInstigator, class AActor* InEffectCauser);
		void OnSetAI();
		void OnRep_PauseAnims(unsigned char OldPauseAnims);
		void OnRep_OrientRotationToMovement(unsigned char OldOrientRotationToMovement);
		void OnRep_MonsterId(const struct FPrimaryAssetId& InOldMonsterId);
		void OnRep_MonsterCollisionProfile(unsigned char OldMonsterCollisionProfile);
		void OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg);
		void OnDamaged(class ADCCharacterBase* DCCharacterBase);
		void OnBeforeDeath();
		void OnAfterDeath();
		bool Normal();
		bool InteractableWithoutHit();
		bool InteractableOnly();
		bool Interactable();
		struct FPrimaryAssetId GetMonsterId();
		struct FDesignDataMonster GetDesignDataMonster();
		bool Fly();
		bool Death();
		void ChangePauseAnims(unsigned char Value);
		void ChangeOrientRotationToMovement(unsigned char Value);
		bool Burrow();
		bool BeforeDeath();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterGameplayAbilityBase
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UDCMonsterGameplayAbilityBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMonsterSpawner
	 * Size -> 0x00D0 (FullSize[0x0348] - InheritedSize[0x0278])
	 */
	class ADCMonsterSpawner : public AActor
	{
	public:
		unsigned char                                              UnknownData_PFAK[0x60];                                  // 0x0278(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBillboardComponent*                                 BillboardComponent;                                      // 0x02E0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     ArrowComponent;                                          // 0x02E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMonsterSpawnerType                                        BoundType;                                               // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLinked;                                                // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMonsterCollisionProfile                                   MonsterCollisionProfile;                                 // 0x02F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCJZ[0x5];                                   // 0x02F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Monsters;                                                // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ATargetPoint*>                                TargetPoints;                                            // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZQG[0x28];                                  // 0x0320(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateGameState(const struct FGameStateData& InGameStateData);
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		TArray<class ADCMonsterBase*> Spawns();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMovementModifierContainerData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UDCMovementModifierContainerData : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, struct FDCMovementModiferContainer> MovementModifierContainer;                               // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCMultiLineEditableTextBox
	 * Size -> 0x0028 (FullSize[0x1160] - InheritedSize[0x1138])
	 */
	class UDCMultiLineEditableTextBox : public UMultiLineEditableTextBox
	{
	public:
		class FScriptMulticastDelegate                             OnCursorMoved;                                           // 0x1138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUserScrolled;                                          // 0x1148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNK7[0x8];                                   // 0x1158(0x0008) MISSED OFFSET (PADDING)

	public:
		void InsertTextAtCursor(const class FString& InText);
		void Goto(int32_t InLineIndex, int32_t InOffset);
		bool AnyTextSelected();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCNetReplicationGraphConnection
	 * Size -> 0x0050 (FullSize[0x0328] - InheritedSize[0x02D8])
	 */
	class UDCNetReplicationGraphConnection : public UNetReplicationGraphConnection
	{
	public:
		unsigned char                                              ActorSet[0x50];                                          // 0x02D8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPartyChatInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCPartyChatInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPerkDataAsset
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UDCPerkDataAsset : public UDCDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              DescData[0x28];                                          // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanUse;                                                  // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q741[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             Classes;                                                 // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     IdTagGroup;                                              // 0x0094(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQFK[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ArtData[0x28];                                           // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Abilities[0x10];                                         // 0x00D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Effects[0x10];                                           // 0x00E0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPerkDataComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UDCPerkDataComponent : public UActorComponent
	{
	public:
		struct FGameplayTagContainer                               WeaponMasteryList;                                       // 0x00B0(0x0020) Net, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               SpearProficiencyList;                                    // 0x00D0(0x0020) Net, NativeAccessSpecifierPrivate

	public:
		void SetWeaponMasteryList(const struct FGameplayTagContainer& InWeaponMsteryList);
		void SetSpearProficiencyList(const struct FGameplayTagContainer& InWeaponList);
		void ResetWeaponMasteryList();
		void ResetSpearProficiencyList();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCPlayerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class APawn* STATIC_GetCurrentPlayerPawn(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerCharacterAnimInstanceBase
	 * Size -> 0x00B8 (FullSize[0x0520] - InheritedSize[0x0468])
	 */
	class UDCPlayerCharacterAnimInstanceBase : public UDCCharacterAnimInstanceBase
	{
	public:
		unsigned char                                              UnknownData_DGOM[0x7];                                   // 0x0468(0x0007) Fix Super Size
		bool                                                       bIsTwoHandedMontagePlaying;                              // 0x046F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSkillMontagePlaying;                                  // 0x0470(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEmotePlaying;                                         // 0x0471(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1PPT[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocomotionAnimSet                                  ItemAnimationSet;                                        // 0x0478(0x0018) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLocomotionAnimSet                                  SecondaryItemAnimationSet;                               // 0x0490(0x0018) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               PrimaryMontageTagContainer;                              // 0x04A8(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               SecondaryMontageTagContainer;                            // 0x04C8(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               TwoHandedMontageTagContainer;                            // 0x04E8(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        LoopSectionNames;                                        // 0x0508(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KDJX[0x8];                                   // 0x0518(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerCharacterBase
	 * Size -> 0x0098 (FullSize[0x08E0] - InheritedSize[0x0848])
	 */
	class ADCPlayerCharacterBase : public ADCCharacterBase
	{
	public:
		class USkeletalMeshComponent*                              PartHead;                                                // 0x0848(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartHelmet;                                              // 0x0850(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartGloves;                                              // 0x0858(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartChest;                                               // 0x0860(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartPants;                                               // 0x0868(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartBoots;                                               // 0x0870(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     MaxPerkSlotCountConstant;                                // 0x0878(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     MaxSkillSlotCountConstant;                               // 0x0888(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             OwnedPerkIdArray;                                        // 0x0898(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             OwnedSkillIdArray;                                       // 0x08A8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		class UDCCharacterDataComponent*                           DataComponent;                                           // 0x08B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCharacterPartsComponent*                          PartsComponent;                                          // 0x08C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCPerkDataComponent*                                PerkDataComponent;                                       // 0x08C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MG4Z[0x10];                                  // 0x08D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateMeshHalfTranslucent(bool IsTranslucent, class UMaterialInterface* Material);
		void ShowHitDirectionUIMessage(class AActor* SourceActor, const struct FVector& HitDirection);
		void OnRep_OwnedSkillIdArray();
		void OnRep_OwnedPerkIdArray();
		EDCGender GetGender();
		void ClientShowSystemMessage(const class FText& MessageText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerCharMovementComponent
	 * Size -> 0x0010 (FullSize[0x0F20] - InheritedSize[0x0F10])
	 */
	class UDCPlayerCharMovementComponent : public UDCCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_0GNV[0x10];                                  // 0x0F10(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerChatComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UDCPlayerChatComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2NZH[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerController
	 * Size -> 0x01B0 (FullSize[0x0978] - InheritedSize[0x07C8])
	 */
	class ADCPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_HVCH[0x58];                                  // 0x07C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0820(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WTOG[0x28];                                  // 0x0828(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0850(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAccountLink*                                        AccountLink;                                             // 0x0860(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TargetAccountId;                                         // 0x0868(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UIBI[0x100];                                 // 0x0878(0x0100) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void StatServer();
		void StartToWearItem_Client(const struct FItemData& InWearingItemData, class AActor* InWearingActor, float InDuration, const class FText& InDescription);
		void SetClientReady_Server();
		void ServerDebugSpawnItem(class AActor* SpawnActor, const struct FPrimaryAssetId& SpawnItemAssetId);
		void ServerDebugGiveGameplayEffectToTarget(class AActor* TargetActor, const struct FPrimaryAssetId& GameplayEffectAssetId);
		void RequestPlayerCharacterLocation_Server(const struct FDCAccountId& InAccountId);
		void OnRep_AccountId(const class FString& OldId);
		void OnPlayerInfoUpdate(const struct FDCPlayerInfo& InPlayerInfo, const struct FDCPlayerInfo& OldPlayerInfo);
		void OnPlayerInfoAdd(const struct FDCPlayerInfo& InPlayerInfo);
		void OnIronShieldScan(const struct FIronShieldScanResult& InIronShieldScanResult);
		void OnGameStateNotify(const struct FGameStateData& InGameStateData);
		void OnFMsgGameKillLogNotifyClient(const struct FGameKillLogData& InGameKillLogData);
		void OnFMsgGameFloorLogNotifyClient(const struct FGameFloorLogData& InGameFloorLogData);
		void OnFMsgGameAnnounceNotifyClient(const struct FGameAnnounceData& InGameAnnounceData);
		void NotifySystemMessage_Client(const class FText& SystemMessage, float Duration);
		void LobbyPopup();
		bool IsTargetAccountSelf();
		void GmServer(const class FString& InCmd);
		void Gm(const class FString& InCmd);
		class AActor* GetDebugFaceTargetActor();
		struct FAccountSessionData GetAccountSessionData();
		void ExitClientServer(bool InbLobby, const class FString& InReason);
		void ExitClient(bool bInLobby, const class FString& InReason);
		void ExecuteExitClientReason(bool bInLobby, const class FString& InReason);
		void ExecuteExitClient(bool bInLobby);
		void ClientLobbyPopup();
		void ChangeParty_Server(const struct FDCPartyId& InPartyId);
		void BroadcastMsgBlueprint(int32_t InMsg);
		void AckPlayerCharacterLocation_Client(const struct FDCAccountId& InAccountId, const struct FVector& InPlayerPawnLocation, const struct FRotator& InPlayerPawnRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerInfoHolder
	 * Size -> 0x00A0 (FullSize[0x0318] - InheritedSize[0x0278])
	 */
	class ADCPlayerInfoHolder : public AInfo
	{
	public:
		struct FDCPlayerInfo                                       PlayerInfo;                                              // 0x0278(0x00A0) Net, RepNotify, NativeAccessSpecifierPrivate

	public:
		void OnRep_PlayerInfo(const struct FDCPlayerInfo& OldPlayerInfo);
		void OnPlayerInfoUpdated(const struct FDCPlayerInfo& InPlayerInfo, const struct FDCPlayerInfo& InOldPlayerInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerInventoryWidget
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UDCPlayerInventoryWidget : public UDCInventoryWidgetBase
	{
	public:
		class UDCEquipmentWidget*                                  EquipWidget_Main;                                        // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCBagWidget*                                        BagWidget_Main;                                          // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDCEquipmentWidget*>                          EquipWidgets;                                            // 0x02F8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UDCBagWidget*>                                BagWidgets;                                              // 0x0308(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		class UDCEquipmentWidget* GetEquipWidget();
		class UDCBagWidget* GetBagWidget(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerManager
	 * Size -> 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
	 */
	class UDCPlayerManager : public UDCUserInfoManagerBase
	{
	public:
		unsigned char                                              UnknownData_7XKG[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FDCAccountId, struct FDCPlayerInfo>            PlayerInfos;                                             // 0x0078(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZKP0[0xB0];                                  // 0x00C8(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerPoint
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class ADCPlayerPoint : public APlayerStart
	{
	public:
		float                                                      SpawningDistance;                                        // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpawnTickAngle;                                          // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UEWI[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnAngle;                                              // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DDV4[0x14];                                  // 0x02C4(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerStart
	 * Size -> 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
	 */
	class ADCPlayerStart : public ADCPlayerPoint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerDown
	 * Size -> 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
	 */
	class ADCPlayerDown : public ADCPlayerPoint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPlayerSpectator
	 * Size -> 0x0028 (FullSize[0x0348] - InheritedSize[0x0320])
	 */
	class ADCPlayerSpectator : public ASpectatorPawn
	{
	public:
		unsigned char                                              UnknownData_EK2J[0x18];                                  // 0x0320(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCCharacterBase*                                    TargetPlayerCharacter;                                   // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2HQQ[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCProjectileAttributeSet
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class UDCProjectileAttributeSet : public UDCAttributeSet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCProjectSettings
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UDCProjectSettings : public UGeneralProjectSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPropAttributeSet
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class UDCPropAttributeSet : public UDCAttributeSet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCReplicationGraph
	 * Size -> 0x0038 (FullSize[0x0590] - InheritedSize[0x0558])
	 */
	class UDCReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x0560(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDCConnectionAlwaysRelevantNodePair>         AlwaysRelevantForConnectionList;                         // 0x0568(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x0578(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM2J[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCResource
	 * Size -> 0x01B0 (FullSize[0x01D8] - InheritedSize[0x0028])
	 */
	class UDCResource : public UObject
	{
	public:
		TMap<EDCGender, class UDCCharacterPartsArtData*>           CharacterPartsDataMap;                                   // 0x0028(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TMap<struct FDCPlayerCharacterKey, struct FDCPlayerCharacterData> PlayerCharacterDataMap;                                  // 0x0078(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              CharacterSounds[0x50];                                   // 0x00C8(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<EDCGender, class UClass*>                             ProductionMap;                                           // 0x0118(0x0050) Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		class UDCInputConfigData*                                  InputConfigData;                                         // 0x0168(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMappableConfigPair>                         MappableConfigPairs;                                     // 0x0170(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UClass*                                              ContextMenuWidgetClass;                                  // 0x0180(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FGameplayAttribute, class FText>               AttributeDisplayNameMap;                                 // 0x0188(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCServerAccountManager
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UDCServerAccountManager : public UDCUserInfoManagerBase
	{
	public:
		TMap<struct FDCAccountId, struct FDCServerAccountInfo>     Infos;                                                   // 0x0030(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y2Y6[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShopArtData
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDCShopArtData : public UDCDataAssetBase
	{
	public:
		class UTexture2D*                                          ShopIconTexture;                                         // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShopDataAsset
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UDCShopDataAsset : public UDCDataAsset
	{
	public:
		unsigned char                                              ArtData[0x28];                                           // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Price;                                                   // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2MJ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCCharacterSkinShopDataAsset
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UDCCharacterSkinShopDataAsset : public UDCShopDataAsset
	{
	public:
		unsigned char                                              StockData[0x28];                                         // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemSkinShopDataAsset
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UDCItemSkinShopDataAsset : public UDCShopDataAsset
	{
	public:
		unsigned char                                              StockData[0x28];                                         // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCEmoteShopDataAsset
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UDCEmoteShopDataAsset : public UDCShopDataAsset
	{
	public:
		unsigned char                                              StockData[0x28];                                         // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShopItemListWidget
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UDCShopItemListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VUQ2[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelWidget*                                        ShopItemListWidget;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I6ZJ[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShopItemSlotWidget
	 * Size -> 0x00B8 (FullSize[0x03E0] - InheritedSize[0x0328])
	 */
	class UDCShopItemSlotWidget : public UDCControlWidgetBase
	{
	public:
		unsigned char                                              UnknownData_B7CC[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ShopItemNameText;                                        // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<class FText>                                        ShoItemDescTextArray;                                    // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FText                                                ShopItemTypeText;                                        // 0x0368(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          ShopItemIconTexture;                                     // 0x0380(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Price;                                                   // 0x0388(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I1OL[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SkinTooltipWidgetClass;                                  // 0x0390(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              EmoteTooltipWidgetClass;                                 // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateColor                                         TooltipColor;                                            // 0x03A0(0x0014) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MD59[0x1C];                                  // 0x03B4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         EmoteTooltipWidget;                                      // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUserWidget*                                         SkinTooltipWidget;                                       // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UUserWidget* GetTooltipWidget();
		ESlateVisibility GetSelectedImgVisibility();
		ESlateVisibility GetPurchasedImgVisibility();
		ESlateVisibility GetHoverImgVisibility();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShopWidgetBase
	 * Size -> 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
	 */
	class UDCShopWidgetBase : public UDCWidgetBase
	{
	public:
		int32_t                                                    AdventureCurrencyValue;                                  // 0x02F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentPageIndex;                                        // 0x02F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxPageIndex;                                            // 0x02F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AKK5[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SelectedShopItemName;                                    // 0x0300(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UDCShopItemListWidget*                               ShopItemListWidget;                                      // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 ButtonArrowL;                                            // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 ButtonArrowR;                                            // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonLWidget*                                ButtonBuy;                                               // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     PreviewSwitcher;                                         // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QH6W[0x28];                                  // 0x0340(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnWidgetOpen();
		void OnWidgetClose();
		void OnPrevPage();
		void OnNextPage();
		void OnButtonBuyClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCShowingKeyWidgetBase
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UDCShowingKeyWidgetBase : public UDCWidgetBase
	{
	public:
		void OnInputBindChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCSimpleTooltipWidget
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UDCSimpleTooltipWidget : public UDCWidgetBase
	{
	public:
		class FText                                                TooltipNameText;                                         // 0x02F0(0x0018) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateColor                                         TooltipColor;                                            // 0x0308(0x0014) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8C3X[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTooltipData(const class FText& Text, const struct FSlateColor& TextColor);
		struct FSlateColor GetTooltipColor();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCSkeletalMeshComponent
	 * Size -> 0x0060 (FullSize[0x0F60] - InheritedSize[0x0F00])
	 */
	class UDCSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_1RWU[0x60];                                  // 0x0F00(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void SetAffectNavigation(bool bRelevant);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCSkinTooltipWidget
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UDCSkinTooltipWidget : public UUserWidget
	{
	public:
		class FText                                                SkinNameText;                                            // 0x0290(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                SkinDescriptionText;                                     // 0x02A8(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTabMenuWidgetBase
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class UDCTabMenuWidgetBase : public UDCWidgetBase
	{
	public:
		class UClass*                                              TabButtonClass;                                          // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        ButtonBox;                                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VH3R[0x58];                                  // 0x0300(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTagCollisionDetectorComponent
	 * Size -> 0x0058 (FullSize[0x05D0] - InheritedSize[0x0578])
	 */
	class UDCTagCollisionDetectorComponent : public UBoxComponent
	{
	public:
		class FScriptMulticastDelegate                             OnGameplayTagCollisionDetected;                          // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   GameplayTagQuery;                                        // 0x0588(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTargetType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCTargetType : public UObject
	{
	public:
		void GetTargets(class AActor* TargetingOwnerActor, class AActor* TargetingAvatarActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTargetType_UseOwner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCTargetType_UseOwner : public UDCTargetType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTargetType_UseEventData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCTargetType_UseEventData : public UDCTargetType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradeBoxWidget
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UDCTradeBoxWidget : public UDCInventoryWidgetBase
	{
	public:
		bool                                                       bLocal;                                                  // 0x02E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0BPO[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TraderName;                                              // 0x02F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReady;                                                  // 0x0300(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KYFJ[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LockRemainTime;                                          // 0x0304(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCBagWidget*                                        InnerBagWidget;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetReady(bool bState);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradeChannelCategoryWidget
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class UDCTradeChannelCategoryWidget : public UUserWidget
	{
	public:
		class FText                                                CategoryNameText;                                        // 0x0290(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UVerticalBox*                                        VerticalBox_ChannelButton;                               // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradeInventoryWidget
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UDCTradeInventoryWidget : public UDCInventoryWidgetBase
	{
	public:
		class UDCPlayerInventoryWidget*                            PlayerInventoryWidget;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCBagWidget*                                        StorageWidget;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryTabWidgetBase*                             InventoryTabWidget;                                      // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInventoryTabWidgetBase*                             StorageTabWidget;                                        // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetSwitcher*                                     SwitcherWidget;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInitialized;                                            // 0x0310(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LB7M[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnTradeRemoved(const struct FDCItemId& ItemId);
		void OnTradeInserted(const struct FDCItemInfo& ItemInfo, int32_t Index);
		void OnTradeEnd();
		void OnStorageTabClicked();
		void OnInventoryTabClicked();
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradeLocalBoxWidget
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UDCTradeLocalBoxWidget : public UDCInventoryWidgetBase
	{
	public:
		class UDCBagWidget*                                        LocalTradeBoxWidget;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradePhaseConfirmWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCTradePhaseConfirmWidget : public UDCWidgetBase
	{
	public:
		int32_t                                                    TradeFee;                                                // 0x02F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LA7Y[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCCommonButtonBase*                                 CancelTradeButton;                                       // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCTradeBoxWidget*                                   TradeBoxLocal;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCTradeBoxWidget*                                   TradeBoxRemote;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnResponseLocalTraderConfirmRequestResult(bool bRequestSucceed);
		void OnLocalTraderCheckBoxStateChanged(bool bIsChecked);
		void OnCancelTradeButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradePhaseDealWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UDCTradePhaseDealWidget : public UDCWidgetBase
	{
	public:
		int32_t                                                    TradeFee;                                                // 0x02F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LockDuration;                                            // 0x02F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 CancelTradeButton;                                       // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCTradeBoxWidget*                                   TradeBoxLocal;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCTradeBoxWidget*                                   TradeBoxRemote;                                          // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnResponseLocalTraderRequestRequestResult(bool bRequestSucceed);
		void OnLocalTraderCheckBoxStateChanged(bool bIsChecked);
		void OnCancelTradeButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCTradeRemoteBoxWidget
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UDCTradeRemoteBoxWidget : public UDCInventoryWidgetBase
	{
	public:
		class UDCBagWidget*                                        RemoteTradeBoxWidget;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCWidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDCWidgetBlueprintLibrary : public UWidgetBlueprintLibrary
	{
	public:
		void STATIC_SetPlayerCursorCenter(class UObject* WorldContextObject);
		void STATIC_PopupMessageSWidgetNotify(class APlayerController* InPlayer, class UClass* WidgetClass, const class FText& DescMessage, EPopupButtonType ButtonType);
		struct FMsgWidgetPopupMessageReqeust STATIC_MakePopupMessageReqeust(class UClass* WidgetClass, class UPopupDataBase* PopupData);
		class UPopupDataSWidget* STATIC_MakePopupDataSWidget(EPopupButtonType PopupButtonType, const class FText& DescMessage);
		void STATIC_BroadcastSystemMessageNotify(class APlayerController* InPlayer, const class FText& OutPutMessage, float Duration);
		void STATIC_BroadcastLobbySystemMessage(class APlayerController* InPlayer, const class FText& AnnounceText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCWorldSettings
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class ADCWorldSettings : public AWorldSettings
	{
	public:
		class UBehaviorTree*                                       GameModeBehaviorTree;                                    // 0x0488(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DealTableBuyWidget
	 * Size -> 0x00C0 (FullSize[0x03B0] - InheritedSize[0x02F0])
	 */
	class UDealTableBuyWidget : public UDCWidgetBase
	{
	public:
		class UClass*                                              ItemWidgetClass;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FStockBuyData                                       CurrentSetStockBuyData;                                  // 0x02F8(0x00B8) Protected, NativeAccessSpecifierProtected

	public:
		void OnSuccessStockBuy();
		void OnStockBuyFillItemsResponse(bool bFillSucceed, TArray<struct FStockBuyRequiredData> ResultRequiredDataArray);
		void OnSetStockBuyData(const struct FStockBuyData& InStockBuyBata);
		void OnRemoveStockBuyData();
		void OnClickedMakeDealButton();
		void OnClickedFillAllButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DealTableCraftWidget
	 * Size -> 0x00C0 (FullSize[0x03B0] - InheritedSize[0x02F0])
	 */
	class UDealTableCraftWidget : public UDCWidgetBase
	{
	public:
		class UClass*                                              ItemWidgetClass;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FStockCraftData                                     CurrentSetStockCraftData;                                // 0x02F8(0x00B8) Protected, NativeAccessSpecifierProtected

	public:
		void OnSuccessStockCraft();
		void OnStockCraftFillItemsResponse(bool bFillSucceed, TArray<struct FStockCraftRequiredData> ResultRequiredDataArray);
		void OnSetStockCraftData(const struct FStockCraftData& InStockCraftData);
		void OnRemoveStockCraftData();
		void OnClickedMakeDealButton();
		void OnClickedFillAllButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventoryComponent
	 * Size -> 0x0140 (FullSize[0x01F0] - InheritedSize[0x00B0])
	 */
	class UInventoryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7UXQ[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInventoryType                                             InventoryType;                                           // 0x0108(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VRAJ[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxHorizontalSlotCount;                                  // 0x010C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TotalSlotCount;                                          // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RowCount;                                                // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSlotInfo>                                   SlotInfoArray;                                           // 0x0118(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<int32_t, struct FEmptySlotInfoArray>                  EmptySlotInfoMap;                                        // 0x0128(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<int32_t, class UItem*>                                ItemMap;                                                 // 0x0178(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<struct FItemData>                                   ContainingItems;                                         // 0x01C8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		int64_t                                                    TotalGoldCount;                                          // 0x01D8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      LooterArray;                                             // 0x01E0(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnRep_TotalGoldCount(int64_t OldTotalGoldCount);
		void OnRep_ContainingItems(TArray<struct FItemData> OldContainingItems);
		class UItem* GetItemByItemUniqueId(int64_t InItemUniqueId);
		EInventoryType GetInventoryType();
		void ClientShowMessage(const class FText& OutPutMessage);
		void BroadcastMsgBlueprint(int32_t InMsg);
		bool AddContainingItem(const struct FItemData& ItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DealTableInventoryComponent
	 * Size -> 0x0068 (FullSize[0x0258] - InheritedSize[0x01F0])
	 */
	class UDealTableInventoryComponent : public UInventoryComponent
	{
	public:
		unsigned char                                              UnknownData_N5DK[0x60];                                  // 0x01F0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    TotalSellPrice;                                          // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PropsActorBase
	 * Size -> 0x00B0 (FullSize[0x03A8] - InheritedSize[0x02F8])
	 */
	class APropsActorBase : public ADCAbilityInteractableActorBase
	{
	public:
		unsigned char                                              UnknownData_BJMQ[0x80];                                  // 0x02F8(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactableComponent*                                ImpactableComponent;                                     // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDesignDataAssetProps*                               DesignDataAssetProps;                                    // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FActiveGameplayEffectHandle>                 ActiveGameplayEffectHandleArray;                         // 0x0388(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDCPropDataComponent*                                DataComponent;                                           // 0x0398(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UFKT[0x8];                                   // 0x03A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateInteractDepthValue(int32_t DepthValue);
		void SetPropsId(const struct FPrimaryAssetId& InPropsId);
		struct FPrimaryAssetId GetPropsId();
		struct FDesignDataProps GetDesignDataProps();
		void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DeathSwarmBase
	 * Size -> 0x0148 (FullSize[0x04F0] - InheritedSize[0x03A8])
	 */
	class ADeathSwarmBase : public APropsActorBase
	{
	public:
		class UCapsuleComponent*                                   AuraCapsule;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCapsuleComponent*                                   AntiAuraCapsule;                                         // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K2PA[0x138];                                 // 0x03B8(0x0138) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataParam
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDescDataParam : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescData
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDescData : public UDCDataAssetBase
	{
	public:
		class FText                                                DescriptionFormatTextId;                                 // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		float GetExecImpactPower(class UDescDataParam* InDescDataParam);
		void GetDescription(class UDescDataParam* InDescDataParam, TArray<class FText>* OutDescTextArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataEffect
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UDescDataEffect : public UDescData
	{
	public:
		class UDesignDataAssetGameplayEffect*                      DesignDataGameplayEffect;                                // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTagParam;                                        // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataEffectTwoParam
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UDescDataEffectTwoParam : public UDescData
	{
	public:
		class UDesignDataAssetGameplayEffect*                      DesignDataGameplayEffect;                                // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTagParam1;                                       // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTagParam2;                                       // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataAbility
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UDescDataAbility : public UDescData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataParamAbilityWeapon
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDescDataParamAbilityWeapon : public UDescDataParam
	{
	public:
		unsigned char                                              UnknownData_9XR1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCGameplayAbilityData                              GameplayAbilityData;                                     // 0x0030(0x0028) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DescDataAbilityWeapon
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UDescDataAbilityWeapon : public UDescDataAbility
	{
	public:
		class UGlobalData*                                         GlobalData;                                              // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetGameplayAbility
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetGameplayAbility : public UDCDataAssetBase
	{
	public:
		struct FDesignDataGameplayAbility                          Item;                                                    // 0x0038(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetGameplayEffect
	 * Size -> 0x0180 (FullSize[0x01B8] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetGameplayEffect : public UDCDataAssetBase
	{
	public:
		struct FDesignDataGameplayEffect                           Item;                                                    // 0x0038(0x0180) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetBaseItem
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetBaseItem : public UDCDataAssetBase
	{
	public:
		struct FDesignDataBaseItem                                 Item;                                                    // 0x0038(0x0064) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT7X[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetPlayerCharacter
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetPlayerCharacter : public UDCDataAssetBase
	{
	public:
		struct FDesignDataPlayerCharacter                          Item;                                                    // 0x0038(0x00C8) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetMonster
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetMonster : public UDCDataAssetBase
	{
	public:
		struct FDesignDataMonster                                  Item;                                                    // 0x0038(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetAoe
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetAoe : public UDCDataAssetBase
	{
	public:
		struct FDesignDataAoe                                      Item;                                                    // 0x0038(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetProps
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetProps : public UDCDataAssetBase
	{
	public:
		struct FDesignDataProps                                    Item;                                                    // 0x0038(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetPropsInteract
	 * Size -> 0x0098 (FullSize[0x00D0] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetPropsInteract : public UDCDataAssetBase
	{
	public:
		struct FDesignDataPropsInteract                            Item;                                                    // 0x0038(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetPropsSkillCheck
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetPropsSkillCheck : public UDCDataAssetBase
	{
	public:
		struct FDesignDataPropsSkillCheck                          Item;                                                    // 0x0038(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItem
	 * Size -> 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItem : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItem                                     Item;                                                    // 0x0038(0x0170) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemPropertyType
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemPropertyType : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemPropertyType                         Item;                                                    // 0x0038(0x0044) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJXX[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemProperty
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemProperty : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemProperty                             Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemConsume
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemConsume : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemConsume                              Item;                                                    // 0x0038(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemRequirement
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemRequirement : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemRequirement                          Item;                                                    // 0x0038(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		bool IsTargetFulfilledAllRequirements(const struct FDesignDataItem& DesignDataItem, class AActor* TargetActor);
		bool IsFulfilledAllRequirements(const struct FDesignDataItem& DesignDataItem, const struct FPrimaryAssetId& PlayerCharacterId, class UDCAttributeSet* AttributeSet, TArray<struct FPrimaryAssetId> PerkIdArray, const struct FGameplayTagContainer& GameplayTagContainer, class AActor* TargetActor);
		TArray<EItemRequirementType> GetUnmetItemRequirementsTarget(class AActor* TargetActor);
		TArray<EItemRequirementType> GetUnmetItemRequirements(const struct FPrimaryAssetId& PlayerCharacterId, class UDCAttributeSet* AttributeSet, TArray<struct FPrimaryAssetId> PerkIdArray);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemBundleInfo
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemBundleInfo : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemBundleInfo                           Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		struct FPrimaryAssetId GetBundleArtAssetByCount(int32_t ItemCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetItemContainer
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetItemContainer : public UDCDataAssetBase
	{
	public:
		struct FDesignDataItemContainer                            Item;                                                    // 0x0038(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4KI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetLootDrop
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetLootDrop : public UDCDataAssetBase
	{
	public:
		struct FDesignDataLootDrop                                 Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetSpawner
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetSpawner : public UDCDataAssetBase
	{
	public:
		struct FDesignDataSpawner                                  Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetProjectile
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetProjectile : public UDCDataAssetBase
	{
	public:
		struct FDesignDataProjectile                               Item;                                                    // 0x0038(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetMeleeAttack
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetMeleeAttack : public UDCDataAssetBase
	{
	public:
		struct FDesignDataMeleeAttack                              Item;                                                    // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetSkill
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetSkill : public UDCDataAssetBase
	{
	public:
		struct FDesignDataSkill                                    Item;                                                    // 0x0038(0x00C0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetSpell
	 * Size -> 0x00B0 (FullSize[0x00E8] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetSpell : public UDCDataAssetBase
	{
	public:
		struct FDesignDataSpell                                    Item;                                                    // 0x0038(0x00B0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetPerk
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetPerk : public UDCDataAssetBase
	{
	public:
		struct FDesignDataPerk                                     Item;                                                    // 0x0038(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetMovementModifier
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetMovementModifier : public UDCDataAssetBase
	{
	public:
		struct FDesignDataMovementModifier                         Item;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetMerchant
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetMerchant : public UDCDataAssetBase
	{
	public:
		struct FDesignDataMerchant                                 Item;                                                    // 0x0038(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetMerchantSchedule
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetMerchantSchedule : public UDCDataAssetBase
	{
	public:
		struct FDesignDataMerchantSchedule                         Item;                                                    // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NB3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetStockBuy
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetStockBuy : public UDCDataAssetBase
	{
	public:
		struct FDesignDataStockBuy                                 Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetStockSellBack
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetStockSellBack : public UDCDataAssetBase
	{
	public:
		struct FDesignDataStockSellBack                            Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetStockCraft
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetStockCraft : public UDCDataAssetBase
	{
	public:
		struct FDesignDataStockCraft                               Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetFloorRule
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetFloorRule : public UDCDataAssetBase
	{
	public:
		struct FDesignDataFloorRule                                Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetFloorPortal
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetFloorPortal : public UDCDataAssetBase
	{
	public:
		struct FDesignDataFloorPortal                              Item;                                                    // 0x0038(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE9I[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetConstant
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetConstant : public UDCDataAssetBase
	{
	public:
		struct FDesignDataConstant                                 Item;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetEmote
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetEmote : public UDCDataAssetBase
	{
	public:
		struct FDesignDataEmote                                    Item;                                                    // 0x0038(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetIdTagGroup
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetIdTagGroup : public UDCDataAssetBase
	{
	public:
		struct FDesignDataIdTagGroup                               Item;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DesignDataAssetDungeon
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UDesignDataAssetDungeon : public UDCDataAssetBase
	{
	public:
		struct FDesignDataDungeon                                  Item;                                                    // 0x0038(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EmoteComponent
	 * Size -> 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
	 */
	class UEmoteComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1LCR[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDCEmoteSlotInfo>                            EmoteSlotInfoArray;                                      // 0x0108(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8YU6[0x70];                                  // 0x0118(0x0070) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentSlot
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEquipmentSlot : public UObject
	{
	public:
		int32_t                                                    SlotId;                                                  // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9IG[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEquipmentInventoryComponent*                        Container;                                               // 0x0030(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItem*                                               Item;                                                    // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UItem* GetItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentWeaponSlot
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UEquipmentWeaponSlot : public UEquipmentSlot
	{
	public:
		TWeakObjectPtr<class UEquipmentSlot>                       LinkedSlot;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentInventoryComponent
	 * Size -> 0x0148 (FullSize[0x01F8] - InheritedSize[0x00B0])
	 */
	class UEquipmentInventoryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GBLP[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInventoryType                                             InventoryType;                                           // 0x0108(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEquipmentQuickSlotType                                    CurrentActiveQuickSlotType;                              // 0x0109(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CQ69[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UEquipmentSlot*>                       SlotMap;                                                 // 0x0110(0x0050) NativeAccessSpecifierPrivate
		TMap<EEquipmentQuickSlotType, struct FEquipmentQuickSlotInfo> QuickSlotInfoMap;                                        // 0x0160(0x0050) NativeAccessSpecifierPrivate
		TArray<struct FItemData>                                   ContainingItems;                                         // 0x01B0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		EItemEquipState                                            ItemEquipState;                                          // 0x01C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1FRS[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AItemActor*>                                  EquippedItemActors;                                      // 0x01C8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TArray<class AItemActor*>                                  DummyItemActors;                                         // 0x01D8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class AItemActor*>                                  SheathItemActors;                                        // 0x01E8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate

	public:
		void UpdateCrossHairWidget();
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		bool TryRemoveItem(int64_t RemoveItemUniqueId);
		bool TryAddItem(struct FItemData* InItemData, int32_t SlotId, bool BySystem);
		void TerminateBase();
		bool SetEquipItemAt(EEquipmentQuickSlotType QuickSlotType, bool bEquip);
		void ServerMoveToNextSlot(EEquipmentQuickSlotType QuickSlotType, bool bNextAvailableSlot);
		void RemoveContaingItemActors(int64_t ItemUniqueId);
		void RemoveAllItems();
		void OnRep_SheathItemActors(TArray<class AItemActor*> OldSheathItemActors);
		void OnRep_EquippedItemActors(TArray<class AItemActor*> OldEquippedItemActors);
		void OnRep_ContainingItems(TArray<struct FItemData> OldContainingItems);
		void OnFinishedActiveEquipmentQuickSlot(EEquipmentQuickSlotType QuickSlotType, bool bSlotActive);
		void HideEquippedItemActorsInGame(bool bHidden);
		int32_t STATIC_GetSlotIdByItemSlotType(const struct FGameplayTag& SlotType);
		struct FEquipmentQuickSlotInfo GetQuickSlotInfoByType(EEquipmentQuickSlotType QuickSlotType);
		TArray<class UItem*> GetItemsBySlotType(const struct FGameplayTag& ItemSlotType);
		class UItem* GetItemByItemUniqueId(int64_t InItemUniqueId);
		struct FItemData GetCurrentHoldingItemData();
		EEquipmentQuickSlotType GetCurrentActiveSlotType();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentInventoryGroupWidget
	 * Size -> 0x0110 (FullSize[0x0400] - InheritedSize[0x02F0])
	 */
	class UEquipmentInventoryGroupWidget : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLootingTargetInventory;                                 // 0x02F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZDL3[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GlobalItemWidgetClass;                                   // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ReadOnlyItemWidgetClass;                                 // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                WB_Inventory_WeaponSetA;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                WB_Inventory_WeaponSetB;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Helmet;                                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Chest;                                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                SoulHeart;                                               // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pants;                                                   // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Boots;                                                   // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Glove;                                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_L_Item_01;                                         // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_L_Item_02;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_L_Item_03;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_R_Item_01;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_R_Item_02;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Pouch_R_Item_03;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Acc_01;                                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Acc_02;                                                  // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                Acc_03;                                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentActiveWeaponSet;                                  // 0x0398(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7V4H[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEquipmentSlotWidget*>                        EquipmentSlotWidgetArray;                                // 0x03A0(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FString                                              LinkedAccountId;                                         // 0x03B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x03C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UEquipmentInventoryComponent>         EquipmentInventory;                                      // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PlayerCharacterId;                                       // 0x03D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YRMX[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEquipmentSlotWidget*                                PrevDragOverSlotWidget;                                  // 0x03F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PrevDragOverSlotId;                                      // 0x03F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WW6C[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnSwitchChestAndSoulHeart(int32_t ActiveIndex);
		void OnItemDropDetected(const struct FItemData& ItemData, class AActor* OldOwnerActor);
		void OnItemDragOver(const struct FItemData& ItemData, const struct FVector2D& DragScreenPos, const struct FVector2D& DragWidgetScreenPos, const struct FVector2D& DragWidgetAbsoluteSize);
		void OnItemDragLeaveOrDrop();
		void OnDragOverChestSlot(bool bIsDragOver);
		void OnCurrentActiveSlot(EEquipmentQuickSlotType ItemQuickSlotType);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentSlotWidget
	 * Size -> 0x0100 (FullSize[0x03F0] - InheritedSize[0x02F0])
	 */
	class UEquipmentSlotWidget : public UDCWidgetBase
	{
	public:
		EEquipmentQuickSlotType                                    EquipmentQuickSlotType;                                  // 0x02F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L4M[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x02F4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EquipmentSlotId;                                         // 0x02FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidSlotColor;                                          // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidSlotColor;                                        // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScaleBox*                                           ItemWidgetScaleBox;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameItemWearingBarWidget*                           ItemWearingBarWidget;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          ItemCountTextBlock;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotColorImage;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XIO0[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemWidget*                                         ItemWidget;                                              // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ItemWidgetClass;                                         // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemData                                           ItemData;                                                // 0x0358(0x0090) Protected, NativeAccessSpecifierProtected
		bool                                                       bSetPreview;                                             // 0x03E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bActivated;                                              // 0x03E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ULLT[0x6];                                   // 0x03EA(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetPreviewItemWidget(const struct FPrimaryAssetId& ItemId, float Duration);
		void SetActiveHoverImage(bool bActivate);
		void RemovePreviewItemWidget(bool bSetItem);
		void OnRemoveItem(const struct FItemData& InItemData);
		void OnOverlapItemWidget(const struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip);
		void OnLeaveItemWidget();
		void OnItemSlotActivate(bool bActivate);
		void OnFinishedItemDataSet(const struct FItemData& InItemData, const struct FGameplayTag& HandType, const struct FGameplayTag& SlotType, const struct FItemInventorySize& InventorySize);
		void CheckAndSetActiveHoverImage();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.EquipmentWeaponSlotSetWidget
	 * Size -> 0x00C0 (FullSize[0x04B0] - InheritedSize[0x03F0])
	 */
	class UEquipmentWeaponSlotSetWidget : public UEquipmentSlotWidget
	{
	public:
		class UScaleBox*                                           SecondaryItemWidgetScaleBox;                             // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UItemWidget*                                         SecondaryItemWidget;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             PrimarySlot;                                             // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             SecondarySlot;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemData                                           SecondaryItemData;                                       // 0x0410(0x0090) Protected, NativeAccessSpecifierProtected
		class UImage*                                              SecondarySlotColorImage;                                 // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SecondaryEquipmentSlotId;                                // 0x04A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3T7J[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetActiveSecondaryHoverImage(bool bActivate);
		void SetActivePrimaryHoverImage(bool bActivate);
		void CheckAndSetActiveHoverImageBySlot(class UWidget* SlotUnderPointerPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ExpandableInventoryComponent
	 * Size -> 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
	 */
	class UExpandableInventoryComponent : public UInventoryComponent
	{
	public:
		bool                                                       bExpandable;                                             // 0x01F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RYU8[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetExpandable(bool bCanExpand);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.FloorPortalBase
	 * Size -> 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
	 */
	class AFloorPortalBase : public APropsActorBase
	{
	public:
		class UClass*                                              DownFloorPortalScrollClass;                              // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              EscapeFloorPortalScrollClass;                            // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                FloorPortalScrollActivateAbilityTriggerTagArray;         // 0x03B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class USceneComponent*>                             FloorPortalScrollHolderArray;                            // 0x03C8(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.FloorPortalScrollBase
	 * Size -> 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
	 */
	class AFloorPortalScrollBase : public APropsActorBase
	{
	public:
		unsigned char                                              UnknownData_HKKR[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameActorStatusSlotItemData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGameActorStatusSlotItemData : public UObject
	{
	public:
		struct FActorStatusData                                    ActorStatusData;                                         // 0x0028(0x0020) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameActorStatusSlotWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UGameActorStatusSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_5AHS[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              TimeGauge;                                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameActorStatusSlotWidgetData                      WidgetData;                                              // 0x0300(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ET8B[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnActorStatusData(const struct FActorStatusData& NewValue, const struct FActorStatusData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameActorStatusWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameActorStatusWidget : public UDCWidgetBase
	{
	public:
		class UTileView*                                           ActorStatusTileView;                                     // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAlive;                                                // 0x02F8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AP9I[0x17];                                  // 0x02F9(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameAlivePlayerCountWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UGameAlivePlayerCountWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_JT3V[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccountLinkAll*                                     AccountLinkAll;                                          // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnTotalPlayerCount(int32_t NewValue, int32_t OldValue);
		void OnAlivePlayerCount(int32_t NewValue, int32_t OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameAmmoWidget
	 * Size -> 0x0048 (FullSize[0x0338] - InheritedSize[0x02F0])
	 */
	class UGameAmmoWidget : public UDCWidgetBase
	{
	public:
		class UTextBlock*                                          CurrentAmmoCount;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          MaxAmmoCount;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateColor                                         AmmoEmptyTextColor;                                      // 0x0300(0x0014) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateColor                                         AmmoDefaultTextColor;                                    // 0x0314(0x0014) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UEquipmentInventoryComponent>         EquipmentInventory;                                      // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameCancelTipWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UGameCancelTipWidget : public UDCShowingKeyWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameCompassWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UGameCompassWidget : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               LinkedPawn;                                              // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameCrossHairWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UGameCrossHairWidget : public UDCWidgetBase
	{
	public:
		bool                                                       IsMeleeCrossHair;                                        // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VFHY[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnPlayShootCrossHair(float Rate);
		void OnPlayPullingCrossHair(float Rate);
		void OnInitCrossHair();
		void OnCrossHairVisability(bool IsVisablile, bool SetDefault);
		void OnChangeWeaponCrossHair(const struct FGameplayTag& WeaponTypeTag, const struct FGameplayTag& ItemUtilityTag, const struct FGameplayTag& ItemSlotTypeTags, bool IsAttackEnable);
		void OnChangeToRangeCrossHairAndPullAction(const struct FGameplayTag& WeaponTypeTag, const struct FGameplayTag& ItemUtilityTag);
		void OnChangeCrossHairInfo(const struct FGameplayTag& WeaponTypeTag, float ChangeAngle, bool IsPinPoint, float RotateTime);
		void OnActivateSpellCrossHair(bool IsActivate);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameEmoteSelectGroupWidget
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UGameEmoteSelectGroupWidget : public UGameGroupWidgetBase
	{
	public:
		int32_t                                                    SelectedEmoteIndex;                                      // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BFG[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameEmoteSlotWidget*                                EmoteSlot_2;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_3;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_4;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_5;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_6;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_7;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_8;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameEmoteSlotWidget*                                EmoteSlot_9;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGameEmoteSlotWidget*>                        EmoteSlots;                                              // 0x0358(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void OnSelectedEmoteIndexChanged();
		void OnEmoteSelectPopup();
		void OnEmoteSelectClose();
		void OnCurrentEmoteSlotChanged(const class FText& InName);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameEmoteSlotWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameEmoteSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0C1K[0x20];                                  // 0x02F0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetEmoteData(class UDCEmoteDataAsset* InDesignDataEmote);
		void SelectionChange(bool bIsSelected);
		void Reset();
		void OnSetEmoteArtData(class UArtDataEmote* InArtEmoteData);
		void OnSelectionChanged(bool bIsSelected);
		void OnReset();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameHeadupWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UGameHeadupWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_GCH1[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameHeadupAccountWidget
	 * Size -> 0x0050 (FullSize[0x0348] - InheritedSize[0x02F8])
	 */
	class UGameHeadupAccountWidget : public UGameHeadupWidget
	{
	public:
		unsigned char                                              UnknownData_S561[0x10];                                  // 0x02F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterNickname;                                       // 0x0308(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          CharacterIconTexture;                                    // 0x0318(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bVisible;                                                // 0x0320(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IJ42[0x27];                                  // 0x0321(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameHeadupWidgetComponent
	 * Size -> 0x0050 (FullSize[0x0700] - InheritedSize[0x06B0])
	 */
	class UGameHeadupWidgetComponent : public UWidgetComponent
	{
	public:
		unsigned char                                              UnknownData_E40Z[0x50];                                  // 0x06B0(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameHitDirectionManagerWidget
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class UGameHitDirectionManagerWidget : public UDCWidgetBase
	{
	public:
		TArray<class UDCWidgetBase*>                               HitDirectionWidgetList;                                  // 0x02F0(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UGameHitDirectionWidget*                             AllDirectionWidget;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameHitDirectionWidget*                             HealingWidget;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ListIndex;                                               // 0x0310(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KN70[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameHitDirectionWidget
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UGameHitDirectionWidget : public UDCWidgetBase
	{
	public:
		struct FVector                                             HitDiection;                                             // 0x02F0(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetHitDirection(const struct FVector& Direction);
		void OnAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameInteractionDescriptionWidget
	 * Size -> 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
	 */
	class UGameInteractionDescriptionWidget : public UDCShowingKeyWidgetBase
	{
	public:
		struct FGameInteractionDescriptionWidgetData               WidgetData;                                              // 0x02F0(0x0078) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void OnInteractTargetData(const struct FInteractTargetData& NewValue, const struct FInteractTargetData& OldValue);
		void OnInteractableDataByStateMap(TMap<struct FGameplayTag, struct FInteractionData> NewValue, TMap<struct FGameplayTag, struct FInteractionData> OldValue);
		void OnInputType(ECommonInputType NewValue, ECommonInputType OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameInteractionSkillCheckWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UGameInteractionSkillCheckWidget : public UDCShowingKeyWidgetBase
	{
	public:
		struct FGameplayTag                                        SkillCheckType;                                          // 0x02F0(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x02F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XH3L[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnInteractSkillCheckStart(const struct FSkillCheckData& SkillCheckData);
		void OnInteractSkillCheckEnd(ESkillCheckResult SkillCheckResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameInventoryGroupWidget
	 * Size -> 0x0030 (FullSize[0x0340] - InheritedSize[0x0310])
	 */
	class UGameInventoryGroupWidget : public UGameGroupWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0310(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              ItemCountSelectWidgetClass[0x28];                        // 0x0318(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void OnPopItemSelectWidget(const struct FItemData& ItemData, class AActor* OldOwnerActor);
		void OnItemDropOne(const struct FItemData& ItemData, class AActor* OldOwnerActor);
		void OnItemDrop(const struct FItemData& ItemData, class AActor* OldOwnerActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameItemWearingBarWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameItemWearingBarWidget : public UDCWidgetBase
	{
	public:
		class UProgressBar*                                        ItemWearingGauge;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GaugeInterval;                                           // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1L2Q[0x14];                                  // 0x02FC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionComboBoxWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionComboBoxWidget : public UDCWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class UComboBoxString*                                     ComboBox;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Title;                                                   // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTitle(const class FText& InText);
		void SetComboBoxList(TArray<class FString> InComboBoxDataList);
		void SetComboBoxIndex(int32_t InIndex);
		class FString GetSelectedComboBoxText();
		int32_t GetSelectedComboBoxIndex();
		void ClearComboBox();
		void AddComboBox(const class FString& InComboBoxData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionPopupWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionPopupWidget : public UDCWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class UCommonButtonPopupWidget*                            Btn_Left;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            Btn_Right;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateDetailText(const class FText& InDetailText);
		void UpdateButtonText(const class FText& InLeftText, const class FText& InRightText);
		void SetDetailText(const class FText& InDetailText);
		void SetButtonText(const class FText& InLeftText, const class FText& InRightText);
		void HandleRightButtonClicked();
		void HandleLeftButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsAudioWidget
	 * Size -> 0x0040 (FullSize[0x0330] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsAudioWidget : public UDCWidgetBase
	{
	public:
		class UGameMenuOptionSliderWidget*                         WB_TotalVolume;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionSliderWidget*                         WB_EffectVolume;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionSliderWidget*                         WB_MusicVolume;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionToggleSwitchWidget*                   WB_BackgroundVolume;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RPVZ[0x20];                                  // 0x0310(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume);
		void OnTotalVolumeValueChanged(float NewValue);
		void OnResetButtionClicked();
		void OnMusicVolumeValueChanged(float NewValue);
		void OnGameUserSettingAudios(const struct FGameUserSettingAudios& NewValue, const struct FGameUserSettingAudios& OldValue);
		void OnEffectVolumeValueChanged(float NewValue);
		void OnBackgroundMusicChanged(bool IsToggle);
		void OnApplyButtonClicked();
		void OnAppActivateStateChanged(bool IsAppActivateChange);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsControlsWidget
	 * Size -> 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsControlsWidget : public UDCWidgetBase
	{
	public:
		class UGameMenuOptionSliderWidget*                         WB_MouseSensitivity;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ApplyButton;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ResetButton;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             EnglishButton;                                           // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             KoreanButton;                                            // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionToggleSwitchWidget*                   WB_InvertMouseVerticalAxis;                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionToggleSwitchWidget*                   WB_InvertMouseHorizontalAxis;                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C14I[0x38];                                  // 0x0328(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameMenuOptionToggleSwitchWidget*                   WB_IgnoreInvitation;                                     // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionToggleSwitchWidget*                   WB_StreamingMode;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnStreamingModeClicked(bool IsClick);
		void OnResetButtonClicked();
		void OnMouseSensitivitySliderValueChenged(float InValue);
		void OnKoreanButtonClicked();
		void OnInvertMouseVerticalAxisClicked(bool IsClick);
		void OnInvertMouseHorizontalAxisClicked(bool IsClick);
		void OnIgnoreInvitationClicked(bool IsClick);
		void OnGameUserSettingControls(const struct FGameUserSettingControls& NewValue, const struct FGameUserSettingControls& OldValue);
		void OnEnglishButtonClicked();
		void OnApplyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsInputBindPopupWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsInputBindPopupWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_WZPI[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionInputBindSlotItemData
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class UGameMenuOptionInputBindSlotItemData : public UObject
	{
	public:
		struct FEnhancedActionKeyMapping                           ActionKeyMapping;                                        // 0x0028(0x0088) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FKeyboardInputBinding                               FirstMappableBinding;                                    // 0x00B0(0x00A8) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FKeyboardInputBinding                               SecondaryMappableBinding;                                // 0x0158(0x00A8) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsInputBindSlotWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsInputBindSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_KP4C[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          InputName;                                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 PrimaryKeyButton;                                        // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 SecondaryKeyButton;                                      // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 ClearButton;                                             // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InputBindPressAnyKeyPopupClass;                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsInputBindPopupWidget*                InputBindPressAnyKeyPopupWidget;                         // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnSecondaryKeyBindButtonClicked();
		void OnPrimaryKeyBindButtonClicked();
		void OnClearButtonClicked();
		void HandleSecondaryKeyPressed(const struct FKey& InKey);
		void HandlePrimaryKeyPressed(const struct FKey& InKey);
		void ChangeBinding(int32_t InKeyBindSlot, const struct FKey& InKey);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionInputSlotItemData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameMenuOptionInputSlotItemData : public UObject
	{
	public:
		struct FLoadedMappableConfigPair                           LoadedMappableConfigPair;                                // 0x0028(0x0010) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsInputSlotWidget
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsInputSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_MLGD[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          InputConfigName;                                         // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UListView*                                           InputBindSlotListView;                                   // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsInputWidget
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsInputWidget : public UDCWidgetBase
	{
	public:
		class UListView*                                           InputSlotListView;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ApplyButton;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ResetButton;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RefreshWidget();
		void OnResetButtonClicked();
		void OnInputBindPendingChange();
		void OnApplyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionSliderWidget
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionSliderWidget : public UDCWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnSliderValueChanged;                                    // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class UTextBlock*                                          Title;                                                   // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurValue;                                                // 0x0308(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurPerValue;                                             // 0x030C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinValue;                                                // 0x0310(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0314(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StepSize;                                                // 0x0318(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KC8H[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateSliderValue(float NewValue);
		void UpdateSliderMinMaxValue();
		void SetTitle(const class FText& InText);
		void SetSliderMinMaxValue(float InMinValue, float InMaxValue, float InStepSize);
		void SetOptionValue(float InValue);
		float GetOptionValuePercent();
		float GetOptionValue();
		void GetCurrentOptionValueByPercent();
		void GetCurrentOptionValue();
		class FString STATIC_ExtractOnlyNumberics(const class FString& Message, bool IsInteger);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsVideosSlotWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsVideosSlotWidget : public UDCWidgetBase
	{
	public:
		class UTextBlock*                                          Title;                                                   // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5W41[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTitle(const class FText& InTitle);
		void SetQualityLevel(int32_t InQualityLevel);
		void OnQualityLevel(int32_t NewValue, int32_t OldValue);
		void OnMediumButtonClicked();
		void OnLowButtonClicked();
		void OnHighButtonClicked();
		void OnEpicButtonClicked();
		int32_t GetQualityLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsVideoWidget
	 * Size -> 0x0058 (FullSize[0x0348] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsVideoWidget : public UDCWidgetBase
	{
	public:
		class UGameMenuOptionsVideosSlotWidget*                    WB_AntiAliasingQuality;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsVideosSlotWidget*                    WB_ShadowQuality;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsVideosSlotWidget*                    WB_TextureQuality;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsVideosSlotWidget*                    WB_PostProcessQuality;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsVideosSlotWidget*                    WB_EffectsQuality;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionSliderWidget*                         WB_RenderScale;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionComboBoxWidget*                       WB_DisplayMode;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionComboBoxWidget*                       WB_DisplayResolution;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionSliderWidget*                         WB_MaxFrameRateLimit;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionSliderWidget*                         WB_Brightness;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YQAE[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateGammaValue(float NewValue);
		void UpdateDisplayModeOption(int32_t InUpdateIndex);
		void RevertDisplayModeOption(int32_t InDisplayIndex, int32_t InResolutionindex);
		void OnRevertDisplayOption();
		void OnResetButtonClicked();
		void OnDisplayOptionChangePopup();
		void OnApplyDisplayOption();
		void OnApplyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionsWidget
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionsWidget : public UDCWidgetBase
	{
	public:
		class UCheckBox*                                           ControlsCheckBox;                                        // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           GameplayCheckBox;                                        // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           AudioCheckBox;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           VideoCheckBox;                                           // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           InputCheckBox;                                           // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     GameMenuOptionsWidgetSwitcher;                           // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnWidgetToggleNotify(ESlateVisibility Invisibility);
		void OnVideoButtonChecked(bool bIsChecked);
		void OnToggled(ESlateVisibility Invisibility);
		void OnInputButtonChecked(bool bIsChecked);
		void OnGameplayButtonChecked(bool bIsChecked);
		void OnControlsButtonChecked(bool bIsChecked);
		void OnAudioButtonChecked(bool bIsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuOptionToggleSwitchWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameMenuOptionToggleSwitchWidget : public UDCWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class UTextBlock*                                          Title;                                                   // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_93LP[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateButtonText(const class FText& LeftText, const class FText& RightText);
		void SetToggleSwitch(bool InSwitch);
		void SetTitle(const class FText& InTitle);
		void SetButtonText(const class FText& LeftText, const class FText& RightText);
		void OnToggleSwitchClicked();
		void OnToggleSwitch(bool InSwitch);
		void OffToggleSwitchClicked();
		bool GetToggleSwitch();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMenuWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UGameMenuWidget : public UDCWidgetBase
	{
	public:
		class UButton*                                             ContinueButton;                                          // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             OptionsButton;                                           // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             LobbyButton;                                             // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             CharacterSelectButton;                                   // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ExitButton;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionsWidget*                              GameMenuOptionsWidget;                                   // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameMenuOptionPopupWidget*                          WB_DisplayApplyPopup;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnOptionsButtonClicked();
		void OnMenuPop();
		void OnLobbyButtonClicked();
		void OnExitButtonClicked();
		void OnDisplayOptionApplyPopup();
		void OnContinueButtonClicked();
		void OnCharacterSelectClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameMiniMapWidget
	 * Size -> 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
	 */
	class UGameMiniMapWidget : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               LinkedPawn;                                              // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_36TI[0x88];                                  // 0x0300(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnMiniMapName(const class FString& NewMiniMapName, const class FString& OldMiniMapName);
		void OnMiniMapDeathSwarmData(const struct FMiniMapDeathSwarmData& NewValue, const struct FMiniMapDeathSwarmData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyManagePartyMemberWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGamePartyManagePartyMemberWidgetData : public UObject
	{
	public:
		struct FPartyMemberData                                    PartyMemberData;                                         // 0x0028(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyManagePartyMemberWidget
	 * Size -> 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
	 */
	class UGamePartyManagePartyMemberWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_4C4V[0x78];                                  // 0x02F0(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccountLink*                                        AccountLink;                                             // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnAccountDataReplication(const struct FAccountDataReplication& NewValue, const struct FAccountDataReplication& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyManagePartyWidgetData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGamePartyManagePartyWidgetData : public UObject
	{
	public:
		struct FPartyData                                          PartyData;                                               // 0x0028(0x0020) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyManagePartyWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UGamePartyManagePartyWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_JHVK[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             PartyJoinButton;                                         // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UListView*                                           PartyMemberListView;                                     // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CY48[0x20];                                  // 0x0308(0x0020) MISSED OFFSET (PADDING)

	public:
		void PartyJoin();
		void OnPartyData(const struct FPartyData& NewValue, const struct FPartyData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyManageWidget
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class UGamePartyManageWidget : public UDCWidgetBase
	{
	public:
		class UGamePartyManagePartyWidget*                         NonPartyWidget;                                          // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           PartyTileView;                                           // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLinkAll*                                     AccountLinkAll;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FString, class UGamePartyManagePartyWidgetData*> GamePartyManagePartyWidgetDataMap;                       // 0x0308(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyMemberWidgetData
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGamePartyMemberWidgetData : public UObject
	{
	public:
		int32_t                                                    PartyIdx;                                                // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZHA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0030(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPartyMemberData                                    PartyMemberData;                                         // 0x00A0(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyMemberWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class UGamePartyMemberWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NI8L[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Nickname;                                                // 0x0308(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAlive;                                                // 0x0318(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AUX9[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthRate;                                              // 0x031C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEscaped;                                              // 0x0320(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDisconnected;                                         // 0x0321(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsOnline;                                               // 0x0322(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsOffline;                                              // 0x0323(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTarget;                                               // 0x0324(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MI69[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTileView*                                           ActorStatusTileView;                                     // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          Portrait;                                                // 0x0330(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ClassIcon;                                               // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePartyWidget
	 * Size -> 0x00A0 (FullSize[0x0390] - InheritedSize[0x02F0])
	 */
	class UGamePartyWidget : public UDCWidgetBase
	{
	public:
		class UTileView*                                           PartyMemberTileView;                                     // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X93W[0x90];                                  // 0x02F8(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccountLink*                                        AccountLink;                                             // 0x0388(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPartyData(const struct FPartyData& NewValue, const struct FPartyData& OldValue);
		void OnAccountDataReplication(const struct FAccountDataReplication& NewValue, const struct FAccountDataReplication& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GamePlayerCharacterWidget
	 * Size -> 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
	 */
	class UGamePlayerCharacterWidget : public UDCWidgetBase
	{
	public:
		class UEquipmentSlotWidget*                                WeaponSet_A;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                WeaponSet_B;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_L;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_L_3;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_L_4;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_R;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_R_3;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                UseableItem_R_4;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UEquipmentSlotWidget*>                        EquipmentSlotWidgetArray;                                // 0x0330(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8HZD[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCPlayerCharacterBase*                              PlayerCharacter;                                         // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNickname                                           Nickname;                                                // 0x0358(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		float                                                      HealthRate;                                              // 0x0378(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G8OJ[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnCurrentActiveSlot(class UEquipmentSlotWidget* CurrentActiveWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameplayAbilityRelationshipData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGameplayAbilityRelationshipData : public UDataAsset
	{
	public:
		TArray<struct FGameplayAbilityRelationshipItem>            AbilityTagRelationships;                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameplayTagMessageRelationshipData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGameplayTagMessageRelationshipData : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, class FText>                     GameplayTagMessageRelationshipData;                      // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.CannotMoveGameplayTagData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCannotMoveGameplayTagData : public UDataAsset
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameplayCueRelationshipData
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UGameplayCueRelationshipData : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, struct FGameplayCueTag>          GameplayCueRelationshipWithStateTag;                     // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayCueTag>          OwningClientOnlyGameplayCueRelationshipWithStateTag;     // 0x0080(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameplayTagSoundConditionData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGameplayTagSoundConditionData : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, struct FGameplayTagQuery>        GameplayTagSoundConditionData;                           // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameProgressBarWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameProgressBarWidget : public UDCShowingKeyWidgetBase
	{
	public:
		class UTextBlock*                                          ProgressText;                                            // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        ProgressGauge;                                           // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K6EC[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameSkillSlotWidget
	 * Size -> 0x0070 (FullSize[0x0360] - InheritedSize[0x02F0])
	 */
	class UGameSkillSlotWidget : public UDCShowingKeyWidgetBase
	{
	public:
		TMap<int32_t, struct FSkillCooldownInfo>                   SkillCooldownList;                                       // 0x02F0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSkillData>                                  SkillDataList;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q844[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSkillSlotCooldownData(int32_t Index, const struct FGameplayTag& SkillTag, float MaxDuration, float RemainDuration);
		void UpdateSkillDescData(int32_t Index, struct FSkillData* NewSkillData);
		void UpdateSkillData(int32_t Index, struct FSkillData* NewSkillData);
		void UpdateSkillCooldownDuration(float DeltaTime);
		void UpdateSkillArtData(int32_t Index, struct FSkillData* NewSkillData);
		void OnUpdateSkillSlotVisible(int32_t SlotIndex, bool IsVisibility);
		void OnUpdateSkillSlot(int32_t Index, const struct FGameplayTag& SkillTag, float Duration);
		void OnUpdateSkillDesc(int32_t Index, const class FText& SkillName, const class FText& SkillDesc);
		void OnUpdateSkillData(int32_t Index, const struct FSkillData& InSkillData, const struct FDesignDataSkill& InDesignDataSkill);
		void OnUpdateSkillArtData(int32_t Index, class UArtDataSkill* SkillArtData);
		void OnSkillFailedSystemMessage();
		void OnSkillCooldownEnd(int32_t SlotIndex);
		void OnResetSkillDesc(int32_t Index);
		void OnResetSkillCooldownUI();
		void OnLinkedPawnDestroyed(class AActor* InActor);
		float GetSkillSlotCooldownPercent(int32_t Index);
		float GetSkillSlotCooldownDuration(int32_t Index);
		void CheckSkillCooldownComplete(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameSpellCastingBarWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UGameSpellCastingBarWidget : public UDCShowingKeyWidgetBase
	{
	public:
		class UTextBlock*                                          CastingText;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UProgressBar*                                        CastingGauge;                                            // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1MWC[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSpellChannelingStart();
		void OnSpellChannelingEnd();
		void OnSpellCastSucceed();
		void OnSpellCastStart();
		void OnSpellCastEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameSpellCurrentSlotWidget
	 * Size -> 0x00E8 (FullSize[0x03D8] - InheritedSize[0x02F0])
	 */
	class UGameSpellCurrentSlotWidget : public UDCWidgetBase
	{
	public:
		struct FSpellData                                          SpellData;                                               // 0x02F0(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVTC[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDesignDataSpell                                    DesignDataSpell;                                         // 0x0320(0x00B0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UAccountLink*                                        AccountLink;                                             // 0x03D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSpellData(const struct FSpellData& InSpellData, const struct FDesignDataSpell& InDesignDataSpell);
		void OnSpellDataChanged(const struct FSpellData& InSpellData, const struct FDesignDataSpell& InDesignDataSpell);
		void OnSetSpellArtData(class UArtDataSpell* InArtSpellData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameSpellSelectGroupWidget
	 * Size -> 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
	 */
	class UGameSpellSelectGroupWidget : public USpellListWidgetBase
	{
	public:
		int32_t                                                    SelectedSpellIndex;                                      // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IEY[0x14];                                  // 0x0354(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCPlayerCharacterBase*                              PlayerCharacter;                                         // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSpellSelectPopup();
		void OnSpellSelectClose();
		void OnSelectedSpellIndexChanged();
		void OnCurrentSpellSlotChanged(class UGameSpellSlotWidget* InSelectedSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameSpellSlotWidget
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	class UGameSpellSlotWidget : public USpellSlotWidgetBase
	{
	public:
		void SelectionChange(bool bIsSelected);
		void OnSelectionChanged(bool bIsSelected);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TimerWidgetBase
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class UTimerWidgetBase : public UDCWidgetBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerWidgetData                                    WidgetData;                                              // 0x02F8(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQTF[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartTimer(float InEndServerWorldTime);
		void OnProgress(float NewValue, float OldValue);
		void OnLeftSecond(int32_t NewValue, int32_t OldValue);
		void OnLeftMinute(int32_t NewValue, int32_t OldValue);
		void OnLeftHour(int32_t NewValue, int32_t OldValue);
		void OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint(const struct FMsgAccountLinkAccountDataReplicationNotify& InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameTavernStartTimerWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UGameTavernStartTimerWidget : public UTimerWidgetBase
	{
	public:
		struct FGameTavernStartTimerWidgetData                     GameTavernStartTimerWidgetData;                          // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UAccountLinkAll*                                     AccountLinkAll;                                          // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPlayerLimit(int32_t NewValue, int32_t OldValue);
		void OnPlayerCount(int32_t NewValue, int32_t OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GameTestComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UGameTestComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HF8R[0x68];                                  // 0x00B0(0x0068) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void MsgGameTestChangePlayerCharacterClassResponse(const struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassResponse& InMsg);
		void MsgGameTestChangePlayerCharacterClassRequest(const struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassRequest& InMsg);
		void ClientMsgClassSpellSlotMoveResponse(const struct FDungeonCrawler_FClientMsgClassSpellSlotMoveResponse& InMsg);
		void ClientMsgClassSpellSlotMoveRequest(const struct FDungeonCrawler_FClientMsgClassSpellSlotMoveRequest& InMsg);
		void ClientMsgClassSpellSequenceChangeResponse(const struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeResponse& InMsg);
		void ClientMsgClassSpellSequenceChangeRequest(const struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeRequest& InMsg);
		void ClientMsgClassSpellListResponse(const struct FDungeonCrawler_FClientMsgClassSpellListResponse& InMsg);
		void ClientMsgClassSpellListRequest(const struct FDungeonCrawler_FClientMsgClassSpellListRequest& InMsg);
		void ClientMsgClassSkillListResponse(const struct FDungeonCrawler_FClientMsgClassSkillListResponse& InMsg);
		void ClientMsgClassSkillListRequest(const struct FDungeonCrawler_FClientMsgClassSkillListRequest& InMsg);
		void ClientMsgClassPerkListResponse(const struct FDungeonCrawler_FClientMsgClassPerkListResponse& InMsg);
		void ClientMsgClassPerkListRequest(const struct FDungeonCrawler_FClientMsgClassPerkListRequest& InMsg);
		void ClientMsgClassLevelInfoResponse(const struct FDungeonCrawler_FClientMsgClassLevelInfoResponse& InMsg);
		void ClientMsgClassLevelInfoRequest(const struct FDungeonCrawler_FClientMsgClassLevelInfoRequest& InMsg);
		void ClientMsgClassItemMoveResponse(const struct FDungeonCrawler_FClientMsgClassItemMoveResponse& InMsg);
		void ClientMsgClassItemMoveRequest(const struct FDungeonCrawler_FClientMsgClassItemMoveRequest& InMsg);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ActivateItemBase
	 * Size -> 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
	 */
	class UGA_ActivateItemBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY5G[0x8];                                   // 0x0560(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        OtherHandIACompletedHandle;                              // 0x0568(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        OtherHandTriggerEventTag;                                // 0x0570(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        OtherHandEnablingEventTag;                               // 0x0578(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OtherHandIAStarted(const struct FInputActionValue& InputActionValue);
		void OtherHandIACompleted(const struct FInputActionValue& InputActionValue);
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_AuraBase
	 * Size -> 0x0060 (FullSize[0x05B8] - InheritedSize[0x0558])
	 */
	class UGA_AuraBase : public UDCGameplayAbilityBase
	{
	public:
		class UClass*                                              TargetActorClass;                                        // 0x0558(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsePremadeSpec;                                         // 0x0560(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KYOZ[0x57];                                  // 0x0561(0x0057) MISSED OFFSET (PADDING)

	public:
		void OnAuraOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAuraOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnAntiAuraOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAntiAuraOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_RangedAttackBase
	 * Size -> 0x0040 (FullSize[0x0598] - InheritedSize[0x0558])
	 */
	class UGA_RangedAttackBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnSourceObject;                             // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileActorClass;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FireSocketName;                                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileSpeedMultiplier;                               // 0x0578(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PCS[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsMultiFireProjectiles;                                  // 0x0580(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsAmmoToActivate;                                    // 0x0581(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsAmmoToFire;                                        // 0x0582(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFXW[0x1];                                   // 0x0583(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmmoUsage;                                               // 0x0584(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayPullOnAnimationActivation;                          // 0x0588(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9KN[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCGATA_AimTraceToSocket*                            SocketTargetActor;                                       // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void ProjectileFired();
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void MultiFireProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower);
		class UClass* GetProjectileActorClass();
		void FireSocketSightUnblocked(const struct FGameplayAbilityTargetDataHandle& InData);
		void FireSocketSightBlocked(const struct FGameplayAbilityTargetDataHandle& InData);
		void FireProjectile(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void CreateProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation);
		void CreatedProjectile(class AProjectileActor* Projectile, const struct FHitResult& HitResult, const struct FGameplayTag& EventTag);
		bool CheckedCrossHairRecoveryForThrowingItems(class APlayerController* PlayerController);
		void ActivateCrossHairPullAnimation(class APlayerController* PlayerController);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ChargedRangedAttackBase
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UGA_ChargedRangedAttackBase : public UGA_RangedAttackBase
	{
	public:
		unsigned char                                              UnknownData_NZSA[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (PADDING)

	public:
		void SendPlayShootCrossHairNotify();
		void OnMutiShotSkill(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower);
		void InputActionStarted(const struct FInputActionValue& InputActionValue);
		void InputActionCompleted(const struct FInputActionValue& InputActionValue);
		void CreateMultiShotProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_BowAttackBase
	 * Size -> 0x0010 (FullSize[0x05B0] - InheritedSize[0x05A0])
	 */
	class UGA_BowAttackBase : public UGA_ChargedRangedAttackBase
	{
	public:
		class UAnimMontage*                                        NimbleHandMontageToPlay;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        NimbleHandMontageToPlayOnSourceObject;                   // 0x05A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_BowQuickShotBase
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UGA_BowQuickShotBase : public UGA_RangedAttackBase
	{
	public:
		int32_t                                                    AmmoWholeUsage;                                          // 0x0598(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AQI0[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (PADDING)

	public:
		void InputActionStarted(const struct FInputActionValue& InputActionValue);
		void InputActionCompleted(const struct FInputActionValue& InputActionValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ChangeIdle
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UGA_ChangeIdle : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_CharacterJump
	 * Size -> 0x0000 (FullSize[0x0558] - InheritedSize[0x0558])
	 */
	class UGA_CharacterJump : public UDCGameplayAbilityBase
	{
	public:
		void OnMovementModeChange(EMovementMode MovementMode);
		void EventReceived(const struct FGameplayEventData& EventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_Drop
	 * Size -> 0x0030 (FullSize[0x0588] - InheritedSize[0x0558])
	 */
	class UGA_Drop : public UDCGameplayAbilityBase
	{
	public:
		class UItem*                                               DropItem;                                                // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DropSlotId;                                              // 0x0560(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFailedDropItem;                                         // 0x0564(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NTDV[0x3];                                   // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocomotionAnimSet                                  DropResultAnimSet;                                       // 0x0568(0x0018) NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bWasCurrentActiveSlot;                                   // 0x0580(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBeingEmptySlot;                                         // 0x0581(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XFFD[0x6];                                   // 0x0582(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnEndSync();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_Equip
	 * Size -> 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
	 */
	class UGA_Equip : public UDCGameplayAbilityBase
	{
	public:
		EEquipmentQuickSlotType                                    EquipmentQuickSlotType;                                  // 0x0558(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTryingEquip;                                            // 0x0559(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8W6G[0x6];                                   // 0x055A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItem*>                                       EquipItems;                                              // 0x0560(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UEquipmentInventoryComponent*                        EquipmentInventory;                                      // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        GameplayTagToAdd;                                        // 0x0578(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnTaskCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnGameplayEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_Interact
	 * Size -> 0x0138 (FullSize[0x0690] - InheritedSize[0x0558])
	 */
	class UGA_Interact : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlayBothHandEquipped;                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        MontageToPlayPrimaryEquipped;                            // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        MontageToPlaySecondaryEquipped;                          // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        MontageToPlayPrimaryEquippedInstant;                     // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        MontageToPlaySecondaryEquippedInstant;                   // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     CharacterStopMovementThresholdConstant;                  // 0x0580(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     InteractionStartThresholdConstant;                       // 0x0590(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCAT_WaitDelayPausable*                             WaitDelayPausableTask;                                   // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRandomStream                                       Stream;                                                  // 0x05A8(0x0008) ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FInteractionData                                    CurrentData;                                             // 0x05B0(0x0088) Protected, NativeAccessSpecifierProtected
		struct FDesignDataPropsSkillCheck                          CurrentSkillCheckData;                                   // 0x0638(0x0030) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CurrentInteractTag;                                      // 0x0668(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CurrentStateTag;                                         // 0x0670(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              InteractTargetActor;                                     // 0x0678(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PNN4[0x10];                                  // 0x0680(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnVelocityChange();
		void OnStartSync();
		void OnStartDelayFinished();
		void OnSkillCheckSucceed();
		void OnSkillCheckPerfectSucceed();
		void OnSkillCheckFinished(ESkillCheckResult Result);
		void OnSkillCheckFailed();
		void OnSkillCheck();
		void OnFinish();
		void OnEndSync();
		void OnCancelled();
		void OnAimDirectionChange();
		bool IsValidData(const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_StoppablePassiveBase
	 * Size -> 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
	 */
	class UGA_StoppablePassiveBase : public UDCGameplayAbilityBase
	{
	public:
		TArray<struct FGameplayTag>                                PassiveStopStateTags;                                    // 0x0558(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EP4Z[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnStateTagRemoved();
		void OnStateTagAdded();
		void OnPassiveStop();
		void OnPassiveStart();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_InteractPassive
	 * Size -> 0x00B0 (FullSize[0x0620] - InheritedSize[0x0570])
	 */
	class UGA_InteractPassive : public UGA_StoppablePassiveBase
	{
	public:
		unsigned char                                              UnknownData_QZ4O[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     InteractionRangeConstant;                                // 0x0578(0x0010) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     InteractionAdditionalSphereRadiusConstant;               // 0x0588(0x0010) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADCGATA_LineTraceInteractable*                       TargetActor;                                             // 0x0598(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCAT_WaitInteractableTarget*                        WaitInteractableTargetTask;                              // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayAbilityTargetDataHandle                    CurrentTargetData;                                       // 0x05A8(0x0028) Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, struct FInteractionData>         CurrentInteractableDatas;                                // 0x05D0(0x0050) Protected, NativeAccessSpecifierProtected

	public:
		void RefreshInteractionData();
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnTargetGameplayTagChange(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		void OnLostInteractableTarget(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnFoundNewInteractableTarget(const struct FGameplayAbilityTargetDataHandle& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ItemActivateBase
	 * Size -> 0x0000 (FullSize[0x0558] - InheritedSize[0x0558])
	 */
	class UGA_ItemActivateBase : public UDCGameplayAbilityBase
	{
	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void Deactivated();
		void Activated();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ItemConsumeBase
	 * Size -> 0x00D0 (FullSize[0x0628] - InheritedSize[0x0558])
	 */
	class UGA_ItemConsumeBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        PreConsumeMontage;                                       // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        ConsumeMontage;                                          // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        PreConsumeMontageOnSourceObject;                         // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        ConsumeMontageOnSourceObject;                            // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemData                                           ItemData;                                                // 0x0578(0x0090) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FDesignDataItemConsume                              ItemConsumeData;                                         // 0x0608(0x0020) Protected, NativeAccessSpecifierProtected

	public:
		void OnStartSync();
		void OnFinish();
		void OnEndSync();
		void OnConsumeStartEventReceived(float ConsumeDuration);
		void OnConsumeMontageCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnConsumeEndEventReceived();
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void ConsumeEventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_MeleeAttackBase
	 * Size -> 0x00C0 (FullSize[0x0618] - InheritedSize[0x0558])
	 */
	class UGA_MeleeAttackBase : public UDCGameplayAbilityBase
	{
	public:
		bool                                                       ShouldProduceTargetDataOnServer;                         // 0x0558(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JTU[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDesignDataAssetMeleeAttack*                         MeleeAttackData;                                         // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CameraShakeOnStuckStaticObject;                          // 0x0570(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CameraShakeOnStuckCharacter;                             // 0x0578(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CameraShakeOnStuckShield;                                // 0x0580(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        ChangeCrossHairWhenEventTag;                             // 0x0588(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChangeCrossHairAngle;                                    // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       OnPinPoint;                                              // 0x0594(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XH08[0x3];                                   // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateTime;                                              // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G8FY[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCGATA_LineCollision*                               TargetActor;                                             // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCAT_WaitTargetData*                                TargetingTask;                                           // 0x05A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAbilityTask_WaitDelay*                              OnHitTask;                                               // 0x05B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAbilityTask_WaitDelay*                              OnStuckTask;                                             // 0x05B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K15K[0x58];                                  // 0x05C0(0x0058) MISSED OFFSET (PADDING)

	public:
		void ServerTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData);
		void ServerReceivedTargetData(const struct FGameplayTag& InEffectTag, const struct FGameplayTag& InChannelTag, const struct FGameplayAbilityTargetDataHandle& InData);
		void ReceivedTargetData(const struct FGameplayAbilityTargetDataHandle& InData);
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnStuckFinish();
		void OnStuck();
		void OnInterruptFinish();
		void OnInterrupted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnHitFinish();
		void OnHit();
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void MontageJumpToNextSection();
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void ClientTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData);
		void ClientReceivedTargetData(const struct FGameplayTag& InEffectTag, const struct FGameplayTag& InChannelTag, const struct FGameplayAbilityTargetDataHandle& InData);
		void ChangeToDefaultCrossHair();
		void ActivateCrossHairAction();
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_MonsterRangedAttackBase
	 * Size -> 0x00E0 (FullSize[0x0678] - InheritedSize[0x0598])
	 */
	class UGA_MonsterRangedAttackBase : public UGA_RangedAttackBase
	{
	public:
		struct FGameplayTag                                        CancleGameplayTag;                                       // 0x0598(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHitBoxType                                                HitBoxType;                                              // 0x05A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WBB5[0x3];                                   // 0x05A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Range;                                                   // 0x05A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultFirePower;                                        // 0x05A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumDistance;                                         // 0x05AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B3U1[0xC8];                                  // 0x05B0(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_MonsterChargedRangedAttackBase
	 * Size -> 0x0010 (FullSize[0x0688] - InheritedSize[0x0678])
	 */
	class UGA_MonsterChargedRangedAttackBase : public UGA_MonsterRangedAttackBase
	{
	public:
		struct FGameplayTag                                        NextGameplayTag;                                         // 0x0678(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FireDelay;                                               // 0x0680(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJTN[0x4];                                   // 0x0684(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_MonsterMeleeAttackBase
	 * Size -> 0x0010 (FullSize[0x0628] - InheritedSize[0x0618])
	 */
	class UGA_MonsterMeleeAttackBase : public UGA_MeleeAttackBase
	{
	public:
		struct FGameplayTag                                        CancleGameplayTag;                                       // 0x0618(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TransitionSectionName;                                   // 0x0620(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_MultiShotBase
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UGA_MultiShotBase : public UGA_RangedAttackBase
	{
	public:
		unsigned char                                              UnknownData_RVW4[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (PADDING)

	public:
		void InputActionStarted(const struct FInputActionValue& InputActionValue);
		void InputActionCompleted(const struct FInputActionValue& InputActionValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PaviseInstall
	 * Size -> 0x0020 (FullSize[0x0578] - InheritedSize[0x0558])
	 */
	class UGA_PaviseInstall : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageToPlayOnSourceObject;                             // 0x0560(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              InstalledActorClass;                                     // 0x0568(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJLK[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_Pickpocket
	 * Size -> 0x0000 (FullSize[0x0558] - InheritedSize[0x0558])
	 */
	class UGA_Pickpocket : public UDCGameplayAbilityBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PickUp
	 * Size -> 0x0010 (FullSize[0x0568] - InheritedSize[0x0558])
	 */
	class UGA_PickUp : public UDCGameplayAbilityBase
	{
	public:
		unsigned char                                              UnknownData_E60F[0x10];                                  // 0x0558(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnStartSync();
		void OnPickedUp(class AActor* ItemHolderToPickUp, bool bShouldDestroy);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayerCharMeleeAttackBase
	 * Size -> 0x0048 (FullSize[0x0660] - InheritedSize[0x0618])
	 */
	class UGA_PlayerCharMeleeAttackBase : public UGA_MeleeAttackBase
	{
	public:
		struct FPrimaryAssetId                                     ComboInputQueueConstantTime;                             // 0x0618(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_64IN[0x4];                                   // 0x0628(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ComboInputQueueTime;                                     // 0x062C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        ComboIACompletedHandle;                                  // 0x0630(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        OtherHandIACompletedHandle;                              // 0x0638(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        AddLooseTagNextTickTimerHandle;                          // 0x0640(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        ComboTriggerTag;                                         // 0x0648(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        OtherHandTriggerEventTag;                                // 0x0650(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        OtherHandEnablingEventTag;                               // 0x0658(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OtherHandIAStarted(const struct FInputActionValue& InputActionValue);
		void OtherHandIACompleted(const struct FInputActionValue& InputActionValue);
		void ComboIAStarted(const struct FInputActionValue& InputActionValue);
		void ComboIACompleted(const struct FInputActionValue& InputActionValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayerSkillBase
	 * Size -> 0x00D0 (FullSize[0x0628] - InheritedSize[0x0558])
	 */
	class UGA_PlayerSkillBase : public UDCGameplayAbilityBase
	{
	public:
		unsigned char                                              UnknownData_JH39[0xC8];                                  // 0x0558(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentSkillActor;                                       // 0x0620(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayerSkillCastBase
	 * Size -> 0x0110 (FullSize[0x0738] - InheritedSize[0x0628])
	 */
	class UGA_PlayerSkillCastBase : public UGA_PlayerSkillBase
	{
	public:
		class UAnimMontage*                                        MontageToPlayOnCasting;                                  // 0x0628(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnChanneling;                               // 0x0630(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MsgDuration;                                             // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNoEndAbiltyWhenAnimBlendOut;                           // 0x063C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCanMoveWhileChanneling;                                // 0x063D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnHideWeaponUntilSkillEnds;                              // 0x063E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnHideWeaponUntilAmimationEnds;                          // 0x063F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJ6H[0xF8];                                  // 0x0640(0x00F8) MISSED OFFSET (PADDING)

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnVelocityChange_Channeling();
		void OnVelocityChange_Casting();
		void OnSkillActived_Server(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag);
		void OnSkillActived_Client(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag);
		void OnSkillActive();
		void OnInterrupted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnChannelingStartTrigger();
		void OnChannelingStartSync();
		void OnChannelingReadySync();
		void OnChannelingFinishSync();
		void OnChannelingFinish();
		void OnChannelingActivate(const struct FGameplayEventData& EventData, const struct FGameplayCueParameters& CueParams);
		void OnChannelingAction(int32_t ActionCount);
		void OnCastingStartTrigger();
		void OnCastingStartSync();
		void OnCastingFinishSync();
		void OnCastingFinish();
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void IsVisibleWeapon(bool IsVisible);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EndAbilityWhenSkillEvent();
		void CheckedApplyCooldownTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void Activated_CooldownAfter_Client(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag, float CooldownDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayerSkillRouterBase
	 * Size -> 0x0010 (FullSize[0x0638] - InheritedSize[0x0628])
	 */
	class UGA_PlayerSkillRouterBase : public UGA_PlayerSkillBase
	{
	public:
		struct FGameplayTag                                        RouteTriggerTag;                                         // 0x0628(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CheckItemWeaponTypeTag;                                  // 0x0630(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SendSystemMessage(const class FText& SystemMessage);
		void OnSystemMessage();
		void OnRoutedAbilityEnded(const struct FAbilityEndedData& AbilityEndedData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayerSpellCastBase
	 * Size -> 0x0230 (FullSize[0x0788] - InheritedSize[0x0558])
	 */
	class UGA_PlayerSpellCastBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlayOnCasting;                                  // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnChanneling;                               // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnInstant;                                  // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnCastingSourceObject;                      // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnChannelingSourceObject;                   // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnInstantSourceObject;                      // 0x0580(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharacterStopMovementThresholdConstant;                  // 0x0588(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     IntenseFocusCastTimeConstant;                            // 0x0598(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArcaneMasteryPerkCastTimeConstant;                       // 0x05A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StuckPlayRate;                                           // 0x05B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StuckPlayRateDuration;                                   // 0x05BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StuckBlendOutTime;                                       // 0x05C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FireSocketName;                                          // 0x05C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HTEX[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADCGATA_LineCollision*                               TargetActor;                                             // 0x05D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAbilityTask_Repeat*                                 ChannelingTask;                                          // 0x05D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q1T4[0x1A8];                                 // 0x05E0(0x01A8) MISSED OFFSET (PADDING)

	public:
		void SpellFireEvent();
		void ServerReceivedTargetData(const struct FGameplayTag& InEffectTag, const struct FGameplayTag& InChannelTag, const struct FGameplayAbilityTargetDataHandle& InData);
		void SendActivateSpellCrossHairNotify(bool IsActivate);
		void ReceivedTargetData(const struct FGameplayAbilityTargetDataHandle& InData);
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnVelocityChange();
		void OnStuckFinish();
		void OnStuck();
		void OnStartSync();
		void OnRelease();
		void OnInterruptFinish();
		void OnInterrupted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFire();
		void OnFinishSync();
		void OnFinish();
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnChannelingTriggerSync();
		void OnChannelingFinishSync();
		void OnChannelingFinish();
		void OnChannelingAction(int32_t ActionCounter);
		void OnCastTriggerSync();
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void ClientReceivedTargetData(const struct FGameplayTag& InEffectTag, const struct FGameplayTag& InChannelTag, const struct FGameplayAbilityTargetDataHandle& InData);
		void CastingFinishEvent(const struct FDesignDataSpell& CurentDesignSpellData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PlayMontageAndWaitForEvent
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UGA_PlayMontageAndWaitForEvent : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ProjectileCollision
	 * Size -> 0x0020 (FullSize[0x0578] - InheritedSize[0x0558])
	 */
	class UGA_ProjectileCollision : public UDCGameplayAbilityBase
	{
	public:
		class ADCGATA_LineCollision*                               TargetActor;                                             // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        GameplayCueOnStuckStaticObject;                          // 0x0560(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        GameplayCueOnStuckCharacter;                             // 0x0568(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        GameplayCueOnStuckShield;                                // 0x0570(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void TargetDataReceived(const struct FHitResult& Hit);
		void ReceivedTargetData(const struct FGameplayAbilityTargetDataHandle& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_PropsMeleeAttackBase
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UGA_PropsMeleeAttackBase : public UGA_MeleeAttackBase
	{
	public:
		struct FGameplayTag                                        CancleGameplayTag;                                       // 0x0618(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ReloadAmmoBase
	 * Size -> 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
	 */
	class UGA_ReloadAmmoBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayOnSourceObject;                             // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldFullyReload;                                      // 0x0568(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WJQ[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnReloadSucceed();
		void OnReload();
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void CancelReloadByCrossHairAim();
		void ActivateCrossHairPullAnimationByCrossbow(float ActionSpeed);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_ReversibleChangeIdle
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UGA_ReversibleChangeIdle : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_SpellBase
	 * Size -> 0x00D0 (FullSize[0x0628] - InheritedSize[0x0558])
	 */
	class UGA_SpellBase : public UDCGameplayAbilityBase
	{
	public:
		struct FGameplayEventData                                  CurrentTriggerData;                                      // 0x0558(0x00B0) NativeAccessSpecifierPublic
		struct FGameplayTag                                        EffectContainerTag;                                      // 0x0608(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0610(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SphereAimRadiusConstant;                                 // 0x0618(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsSocketSightBlocked();
		float GetRange();
		float GetAimRadius();
		void FireProjectile(const struct FHitResult& HitResult, class UClass* ProjectileActorClass);
		void CastToTarget(const struct FHitResult& HitResult, bool IsEndAbility, bool UseExecuteGameplayCue);
		void CastToSelf();
		void CastFinished();
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GA_WearBase
	 * Size -> 0x00A0 (FullSize[0x05F8] - InheritedSize[0x0558])
	 */
	class UGA_WearBase : public UDCGameplayAbilityBase
	{
	public:
		class UAnimMontage*                                        ChangingMontage;                                         // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemData                                           TargetItemData;                                          // 0x0560(0x0090) Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x05F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnStartSync();
		void OnLootTargetRemoved();
		void OnFinish();
		void OnEndSync();
		void OnChangingMontageCompleted(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCGlitterComponent
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UDCGlitterComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SD8I[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationSeconds;                                         // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      IntervalSeconds;                                         // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartPos;                                                // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEnabled;                                              // 0x0114(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BO5D[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AYX2[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.GlobalData
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UGlobalData : public UDCDataAssetBase
	{
	public:
		TMap<struct FGameplayTag, class FText>                     AttackTypeTextMap;                                       // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		class FText GetAttackTypeText(const struct FGameplayTag& AttackType);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MonsterSpawnableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMonsterSpawnableInterface : public UInterface
	{
	public:
		class ADCMonsterBase* Spawn(class UClass* Monster);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ImpactableComponent
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UImpactableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3XFE[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ImpactEnduranceExhausted;                                // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UTagQueryData*>                               ImpactableTagQueryArray;                                 // 0x0118(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void SetImpactableQuery(TArray<struct FPrimaryAssetId> TagQueryDatas);
		TArray<class UTagQueryData*> GetImpactableTagQueryArray();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.IMUtilBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIMUtilBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetServerWorldTimeSeconds(class UObject* WorldContextObject);
		void STATIC_GetProjectVersion(class FString* OutVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InputTriggerComboAction
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UInputTriggerComboAction : public UInputTrigger
	{
	public:
		struct FComboTriggerStep                                   ComboStep;                                               // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActivationCooldown;                                      // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MRO[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InteractableTargetComponent
	 * Size -> 0x00C8 (FullSize[0x0178] - InheritedSize[0x00B0])
	 */
	class UInteractableTargetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NSJQ[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FInteractionData>         InteractableDataByStateMap;                              // 0x0108(0x0050) NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      Interacters;                                             // 0x0158(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 CurrentInteractPart;                                     // 0x0168(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ABNM[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterInteracter(class AActor* InteractingActor);
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		bool ShouldCancelOthersWhenInteractSucceed(const struct FGameplayTag& StateTag);
		void SetInteractionData(const struct FDesignDataPropsInteract& InteractionData);
		void RegisterInteracter(class AActor* InteractingActor);
		bool IsDetectable(class AActor* Interacter);
		void InteractSucceed(class AActor* InteractingActor, const struct FGameplayTag& TriggerTag, const struct FGameplayTag& StateTag, const struct FHitResult& HitResult);
		void InteractFailed(class AActor* InteractingActor, const struct FGameplayTag& TriggerTag);
		struct FGameplayTag GetStateTag(const struct FGameplayTag& TriggerTag);
		struct FInteractTargetData GetInteractTargetData();
		TMap<struct FGameplayTag, struct FInteractionData> GetInteractableDataByStateMap();
		EInteractabilityType GetInteractability(class AActor* Interacter);
		struct FInteractionData GetData(const struct FGameplayTag& StateTag);
		bool CanInteract();
		void CancelAllInteractions();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InteractData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UInteractData : public UDCDataAssetBase
	{
	public:
		class UAnimMontage*                                        MontageToPlayBothHandEquipped;                           // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayPrimaryEquipped;                            // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlaySecondaryEquipped;                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlayPrimaryEquippedInstant;                     // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlaySecondaryEquippedInstant;                   // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                IgnoreTypeArray;                                         // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventoryLootingWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class UInventoryLootingWidget : public UDCWidgetBase
	{
	public:
		class UContainerInventoryGroupWidget*                      LootingTargetContainerGroup;                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULootingPlayerInventoryWidget*                       LootingTargetPlayerInventoryGroup;                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TargetText;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                LootingChestText;                                        // 0x0308(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class FText                                                LootingPlayerText;                                       // 0x0320(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bSetLootPlayer;                                          // 0x0338(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OC2Q[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LootingChestCount;                                       // 0x033C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void RequestInventoryWidgetVisible(bool bVisible);
		void OnLootingTargetCountChanged(int32_t Count);
		void OnLootingPlayerSet(bool bSetTargetPlayer, const class FName& TargetPlayerName);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventoryPerkListWidgetBase
	 * Size -> 0x0068 (FullSize[0x0380] - InheritedSize[0x0318])
	 */
	class UInventoryPerkListWidgetBase : public UPerkListWidgetBase
	{
	public:
		class UClass*                                              PerkWidgetClass;                                         // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPanelWidget*>                                PerkWidgetParentArray;                                   // 0x0320(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class UPanelWidget*, class UPerkWidget*>              PerkWidgetMap;                                           // 0x0330(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventorySkillListWidgetBase
	 * Size -> 0x0068 (FullSize[0x0380] - InheritedSize[0x0318])
	 */
	class UInventorySkillListWidgetBase : public USkillListWidgetBase
	{
	public:
		class UClass*                                              SkillWidgetClass;                                        // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPanelWidget*>                                SkillWidgetParentArray;                                  // 0x0320(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class UPanelWidget*, class USkillWidget*>             SkillWidgetMap;                                          // 0x0330(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventoryStatusWidget
	 * Size -> 0x0040 (FullSize[0x0330] - InheritedSize[0x02F0])
	 */
	class UInventoryStatusWidget : public UDCWidgetBase
	{
	public:
		struct FInventoryStatusWidgetData                          WidgetData;                                              // 0x02F0(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0308(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LinkedAccountId;                                         // 0x0310(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0320(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPlayerCharacterName(const class FText& NewValue, const class FText& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InventoryTabWidgetBase
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UInventoryTabWidgetBase : public UDCCommonButtonBase
	{
	public:
		EWidgetPlayerInventoryTabType                              PlayerInventoryTabType;                                  // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9D68[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnClickedInventoryTab();
		void OnChangeActiveState(bool bActive);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InvitePartyUserSlotWidget
	 * Size -> 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
	 */
	class UInvitePartyUserSlotWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XE1B[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0300(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              CharacterId;                                             // 0x0310(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNickname                                           Nickname;                                                // 0x0320(0x0020) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                CharacterClassName;                                      // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		int32_t                                                    Level;                                                   // 0x0358(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDCLocationStatus                                          LocationStatus;                                          // 0x035C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TVFC[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPartyMembers;                                         // 0x0360(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumPartyMembers;                                      // 0x0364(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          Icon;                                                    // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          Portrait;                                                // 0x0370(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMine;                                                   // 0x0378(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelected;                                               // 0x0379(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WBYL[0xE];                                   // 0x037A(0x000E) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InvitePartyMemberSlotWidget
	 * Size -> 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
	 */
	class UInvitePartyMemberSlotWidget : public UInvitePartyUserSlotWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InvitePartyUserSlotWidgetData
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UInvitePartyUserSlotWidgetData : public UObject
	{
	public:
		struct FInvitePartyUserSlot                                InvitePartyUserSlot;                                     // 0x0028(0x0068) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharacterClassId;                                        // 0x0090(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDesignDataPlayerCharacter                          DesignDataPlayerCharacter;                               // 0x00A0(0x00C8) BlueprintVisible, NativeAccessSpecifierPublic
		class UInvitePartyWidget*                                  InvitePartyWidget;                                       // 0x0168(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InvitePartyUserSlotListWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInvitePartyUserSlotListWidgetData : public UObject
	{
	public:
		struct FInvitePartyUserSlotData                            InvitePartyUserSlotData;                                 // 0x0028(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.InvitePartyWidget
	 * Size -> 0x01E8 (FullSize[0x04D8] - InheritedSize[0x02F0])
	 */
	class UInvitePartyWidget : public UDCWidgetBase
	{
	public:
		class UListView*                                           PartySlotListView;                                       // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           InvitePartySlotTileView;                                 // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClassIconGroupWidget*                               ClassIconGroup;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             PartyPrivacyButton;                                      // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     PartyPrivacyWidgetSwitcher;                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentPageIndex;                                        // 0x0318(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxCharacterCount;                                       // 0x031C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxPageIndex;                                            // 0x0320(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L07R[0x1AC];                                 // 0x0324(0x01AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDCCommonButtonBase*                                 ButtonShowBlock;                                         // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TryRequestInviteParty(class UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData);
		void OnUserListFindIdClicked(const class FText& FindId);
		bool OnTextChangedFindUserId(const class FText& FindId);
		void OnRightButtonCkicked();
		void OnPopupSWidgetPartyInviteResult(EPopupResult PopupResult, const struct FInvitePartyUserSlot& TargetUser);
		void OnPartyPrivacyButtonClicked();
		void OnPageNumber(int32_t CurrentPage, int32_t MaxPage);
		void OnLocateNumber(int32_t LobbyCount, int32_t DungeonCount, int32_t BlockCount);
		void OnLeftButtonCkicked();
		void OnInvitePartyUserSlotData(const struct FInvitePartyUserSlotData& NewValue, const struct FInvitePartyUserSlotData& OldValue);
		void OnClassIconSelected(const struct FPrimaryAssetId& InCharacterClassId);
		void OnButtonShowBlock();
		void HandleBackButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.IronShield
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UIronShield : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_5VT9[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.Item
	 * Size -> 0x0488 (FullSize[0x04B0] - InheritedSize[0x0028])
	 */
	class UItem : public UObject
	{
	public:
		unsigned char                                              UnknownData_U307[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0088(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemInventorySize                                  InventorySize;                                           // 0x0090(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FItemData                                           ItemData;                                                // 0x0098(0x0090) NativeAccessSpecifierPrivate
		struct FDesignDataItem                                     ItemDesignData;                                          // 0x0128(0x0170) NativeAccessSpecifierPrivate
		class UArtDataItem*                                        ItemArtData;                                             // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDesignDataAssetItemRequirement*                     DesignDataItemRequirement;                               // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDesignDataAssetItemBundleInfo*                      DesignDataItemBundleInfo;                                // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDesignDataItemContainer                            DesignDataItemContainer;                                 // 0x02B0(0x0014) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W41T[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundData*                                          SoundData;                                               // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFunctionTrigger                                    ItemEquipTrigger;                                        // 0x02D0(0x0070) NativeAccessSpecifierPrivate
		struct FFunctionTrigger                                    ChangeAnimSetTrigger;                                    // 0x0340(0x0070) NativeAccessSpecifierPrivate
		struct FFunctionTrigger                                    ItemSheathTrigger;                                       // 0x03B0(0x0070) NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayAbilityData>                      GameplayAbilityDataArray;                                // 0x0420(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayEffectData>                       GameplayEffectDataArray;                                 // 0x0430(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayAbilityData>                      OwnerGameplayAbilityDataArray;                           // 0x0440(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayEffectData>                       OwnerGameplayEffectDataArray;                            // 0x0450(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDCPropertyEffectData>                       PropertyEffectDataArray;                                 // 0x0460(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameplayAbilitySpecHandle>                  OwnerGameplayAbilitySpecHandles;                         // 0x0470(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FActiveGameplayEffectHandle>                 OwnerGameplayEffectHandles;                              // 0x0480(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AActor>                               OwnerActor;                                              // 0x0490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AItemActor>                           ItemActor;                                               // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AItemActor>                           ItemDummyActor;                                          // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VSCT[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		bool IsItemWeaponType(const struct FGameplayTag& WeaponType);
		void Initialize(const struct FItemData& Data);
		TArray<struct FGameplayTag> GetItemWeaponTypes();
		struct FGameplayTag GetItemSlotType();
		class UTexture2D* GetItemIconTexture();
		struct FGameplayTag GetItemHandType();
		TArray<struct FGameplayTag> GetItemDataWeaponTypeTags();
		struct FGameplayTag GetItemDataUtilityTag();
		struct FItemData GetItemData();
		class UClass* GetItemActorClass();
		class AItemActor* GetItemActor();
		struct FDesignDataItem GetDesignDataItem();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemActor
	 * Size -> 0x0248 (FullSize[0x0530] - InheritedSize[0x02E8])
	 */
	class AItemActor : public ADCAbilityActorBase
	{
	public:
		unsigned char                                              UnknownData_76YJ[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               AttachedInvisibleStateTagContainer;                      // 0x02F8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G4WS[0x170];                                 // 0x0318(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDesignDataAssetItemRequirement*                     DesignDataAssetItemRequirement;                          // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArtDataItem*                                        ArtDataItem;                                             // 0x0490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundData*                                          SoundData;                                               // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FItemData                                           ItemData;                                                // 0x04A0(0x0090) Net, RepNotify, NativeAccessSpecifierPrivate

	public:
		void SetItemData(const struct FItemData& InItemData);
		void PreReduceAmmoCount(int32_t ReduceCount);
		void OnRep_ItemData(const struct FItemData& OldItemData);
		void OnAttachmentReplication();
		void OnAttachedSheathSocket();
		void OnAttachedEquipSocket();
		void ItemDataUpdated(const struct FItemData& InItemData);
		class USoundData* GetSoundData();
		struct FGameplayTag GetItemUtilityTag();
		TArray<struct FGameplayTag> GetItemTypeTags();
		struct FItemData GetItemData();
		struct FDesignDataItem GetDesignDataItem();
		void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemComponentBase
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UItemComponentBase : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5DGX[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemCountSelectWidgetData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UItemCountSelectWidgetData : public UPopupDataBase
	{
	public:
		EPopupButtonType                                           PopupButtonType;                                         // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemCountSelectWidgetType                                 ItemCountSelectType;                                     // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5S5[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxItemCount;                                            // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinItemCount;                                            // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedItemCount;                                       // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemCountSelectWidget
	 * Size -> 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
	 */
	class UItemCountSelectWidget : public UCommonPopupBase
	{
	public:
		class UCommonButtonPopupWidget*                            Btn_Single;                                              // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            Btn_Two_Left;                                            // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            Btn_Two_Right;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USlider*                                             Slider_ItemCount;                                        // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableText*                                       EditableTextBox_ItemCount;                               // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Txt_Desc;                                                // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UItemCountSelectWidgetData*                          ItemCountSelectWidgetData;                               // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnTextBlockValueChanged(const class FText& Text);
		void OnTextBlockCommitted(const class FText& Text, ETextCommit CommitMethod);
		void OnSliderValueChanged(float Value);
		void OnRemovePopup();
		void OnCreatePopup();
		void HandleRightButtonClicked();
		void HandleLeftButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCItemDataComponent
	 * Size -> 0x00D8 (FullSize[0x01B8] - InheritedSize[0x00E0])
	 */
	class UDCItemDataComponent : public UDCDataComponent
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x00E0(0x0090) NativeAccessSpecifierPrivate
		int32_t                                                    ItemCount;                                               // 0x0170(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MYQB[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PO7M[0x30];                                  // 0x0188(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnLoadData_Sound(class UObject* InLoadedObject);
		void OnLoadData_Bundle(class UObject* InLoadedObject);
		void OnLoadData_Art(class UObject* InLoadedObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemHolderActorBase
	 * Size -> 0x00C8 (FullSize[0x03B0] - InheritedSize[0x02E8])
	 */
	class AItemHolderActorBase : public ADCInteractableActorBase
	{
	public:
		unsigned char                                              UnknownData_R4ER[0x20];                                  // 0x02E8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshComponent*                                      ItemMeshComponent;                                       // 0x0308(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0310(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FItemDataMeta                                       ItemMetaData;                                            // 0x0320(0x0040) Edit, BlueprintVisible, Net, Protected, NativeAccessSpecifierProtected
		class UItem*                                               ItemObject;                                              // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UArtDataItem*                                        ArtDataItem;                                             // 0x0368(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundData*                                          SoundData;                                               // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCGlitterComponent*                                 GlitterComponent;                                        // 0x0378(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FPrimaryAssetId                                     PropInteractId;                                          // 0x0380(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0390(0x0020) NativeAccessSpecifierPrivate

	public:
		void SetItemObject(class UItem* Item);
		void OnRep_ItemId(const struct FPrimaryAssetId& OldItemId);
		void OnRep_ArtDataItem(class UArtDataItem* OldArtDataItem);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemMoveValidatorComponent
	 * Size -> 0x00D0 (FullSize[0x01E0] - InheritedSize[0x0110])
	 */
	class UItemMoveValidatorComponent : public UItemComponentBase
	{
	public:
		class AActor*                                              MoveItemOldOwner;                                        // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              MoveItemNewOwner;                                        // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FItemData                                           MoveItemOldData;                                         // 0x0120(0x0090) NativeAccessSpecifierPrivate
		TArray<struct FItemData>                                   MoveItemNewDataArray;                                    // 0x01B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FItemData>                                   SwapItemOldDataArray;                                    // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FItemData>                                   SwapItemNewDataArray;                                    // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void ServerMoveItem(const struct FItemData& OldItemData, TArray<struct FItemData> NewItemDataArray, class AActor* OldOwner, class AActor* NewOwner, bool bHasDelay);
		void ClientShowMessage(const class FText& OutPutMessage);
		void ClientMoveItemEnd(bool bMoveSucceed, TArray<struct FItemData> MovedItemDataArray);
		bool CheckEnableMoveItem(const struct FItemData& OldItemData, TArray<struct FItemData> NewItemDataArray, class AActor* OldOwner, class AActor* NewOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemRandomGenerateComponent
	 * Size -> 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
	 */
	class UItemRandomGenerateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_9X52[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemRandomGenerateData>                     ItemRandomGenerateDataArray;                             // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDesignDataAssetLootDrop*                            DesignDataAssetLootDrop;                                 // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDesignDataLootDrop                                 DesignDataLootDrop;                                      // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		int32_t                                                    GenerateCount;                                           // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGenerateAll;                                            // 0x0134(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGenerateRepeatedly;                                     // 0x0135(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2Y02[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EItemType>                                          GenerateItemTypeArray;                                   // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ItemRarityTags;                                          // 0x0148(0x0020) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AKRA[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemGenerationFinished;                                // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void GenerateItems();
		void DropItem(int64_t ItemUniqueId, class AActor* Owner);
		void DropAllItems();
		void ClearAllItems();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemRichTextBlockDecorator
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UItemRichTextBlockDecorator : public URichTextBlockDecorator
	{
	public:
		class UClass*                                              ItemTooltipWidgetClass;                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMFG[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FTextBlockStyle GetItemTextBlockStyle(const struct FGameplayTag& InRarityType);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipRequirementListEntryWidgetData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UItemTooltipRequirementListEntryWidgetData : public UObject
	{
	public:
		class FText                                                RequirementValueText;                                    // 0x0028(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         RequirementValueTextColor;                               // 0x0040(0x0014) BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2PA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipRequirementListWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class UItemTooltipRequirementListWidget : public UDCWidgetBase
	{
	public:
		TMap<EItemRequirementType, class UItemTooltipRequirementWidget*> ItemRequirementWidgetMap;                                // 0x02F0(0x0050) BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipRequirementWidget
	 * Size -> 0x0048 (FullSize[0x0338] - InheritedSize[0x02F0])
	 */
	class UItemTooltipRequirementWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_HDM1[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         CommonNameColor;                                         // 0x02F8(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FSlateColor                                         CommonValueColor;                                        // 0x030C(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FSlateColor                                         UnmetRequirementColor;                                   // 0x0320(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NCZJ[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnChangedRequirementStatus(bool bFulfilled);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipStatWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UItemTooltipStatWidgetData : public UObject
	{
	public:
		TArray<class FText>                                        DescTextArray;                                           // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipStatWidget
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UItemTooltipStatWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9RB2[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemTooltipWidget
	 * Size -> 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
	 */
	class UItemTooltipWidget : public UDCWidgetBase
	{
	public:
		struct FItemTooltipWidgetData                              WidgetData;                                              // 0x02F0(0x0090) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void SetItemData(const struct FItemData& NewItemData);
		void OnRefreshItemName();
		void OnItemData(const struct FItemData& NewItemData, const struct FItemData& OldItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ItemWeaponAnimInstanceBase
	 * Size -> 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
	 */
	class UItemWeaponAnimInstanceBase : public UDCPlayerCharacterAnimInstanceBase
	{
	public:
		unsigned char                                              UnknownData_C5J5[0x10];                                  // 0x0520(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnItemDataUpdated(const struct FItemData& ItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardClassIconWidgetData
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class ULeaderBoardClassIconWidgetData : public UObject
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharacterClassId;                                        // 0x002C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4JA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDesignDataPlayerCharacter                          DesignDataPlayerCharacter;                               // 0x0040(0x00C8) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bSelected;                                               // 0x0108(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40VA[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         OwningWidget;                                            // 0x0110(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardClassIconWidget
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class ULeaderBoardClassIconWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_Y6NF[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULeaderBoardClassIconWidgetData*                     LeaderBoardClassIconWidgetData;                          // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UUserWidget>                          OwningWidget;                                            // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnClickedClassIconButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordListWidgetData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULeaderBoardRankRecordListWidgetData : public UObject
	{
	public:
		struct FRankData                                           RankData;                                                // 0x0028(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordListWidget
	 * Size -> 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
	 */
	class ULeaderBoardRankRecordListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9VYA[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UListView*                                           RankRecordListView;                                      // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PA21[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRankData(const struct FRankData& NewValue, const struct FRankData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordMineWidgetData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULeaderBoardRankRecordMineWidgetData : public UObject
	{
	public:
		struct FRankRecord                                         RankRecordMineData;                                      // 0x0028(0x0050) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordMineWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class ULeaderBoardRankRecordMineWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_OE5O[0x50];                                  // 0x02F0(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnRankRecordMineData(const struct FRankRecord& NewValue, const struct FRankRecord& OldValue);
		void OnFMsgWidgetStreamingModeNotifyBlueprint(const struct FMsgWidgetStreamingModeNotify& InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordWidgetData
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULeaderBoardRankRecordWidgetData : public UObject
	{
	public:
		struct FRankRecord                                         RankRecordData;                                          // 0x0028(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		struct FNickname                                           NickNameMine;                                            // 0x0078(0x0020) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardRankRecordWidget
	 * Size -> 0x0058 (FullSize[0x0348] - InheritedSize[0x02F0])
	 */
	class ULeaderBoardRankRecordWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0VU5[0x58];                                  // 0x02F0(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnRankRecordData(const struct FRankRecord& NewValue, const struct FRankRecord& OldValue);
		void OnMineRankRecordData(const struct FRankRecord& MineValue, bool IsMine);
		void OnFMsgWidgetStreamingModeNotifyBlueprint(const struct FMsgWidgetStreamingModeNotify& InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LeaderBoardWidget
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class ULeaderBoardWidget : public UDCWidgetBase
	{
	public:
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_Gold;                               // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_Gold;                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_Kill;                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_Kill;                               // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_Escape;                             // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_Escape;                             // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_Adventure;                          // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_Adventure;                          // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_BossKill_Lich;                      // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_BossKill_Lich;                      // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordListWidget*                    RankRecordListWidget_BossKill_GhostKing;                 // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULeaderBoardRankRecordMineWidget*                    RankRecordMineWidget_BossKill_GhostKing;                 // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonTileView*                                     ClassIconCommonTileView;                                 // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LoadoutItemWidget
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class ULoadoutItemWidget : public UControllableItemWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LoadoutWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ULoadoutWidget : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyGroupMerchantWidget
	 * Size -> 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
	 */
	class ULobbyGroupMerchantWidget : public ULobbyGroupWidgetBase
	{
	public:
		class UTopTitleWidgetBase*                                 TopTitleWidget;                                          // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnBackButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyGroupTradeChannelWidget
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class ULobbyGroupTradeChannelWidget : public ULobbyGroupWidgetBase
	{
	public:
		class UTopTitleWidgetBase*                                 TopTitle;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCTradeInventoryWidget*                             TradeUserInventory;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnReadRulesButtonClicked();
		void OnLeaveChannelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyGroupTradingWidget
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class ULobbyGroupTradingWidget : public ULobbyGroupWidgetBase
	{
	public:
		class UTopTitleWidgetBase*                                 TopTitle;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCTradeInventoryWidget*                             TradeUserInventory;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnReadRulesButtonClicked();
		void OnLeaveChannelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyTopMenuWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ULobbyTopMenuWidget : public UDCWidgetBase
	{
	public:
		void OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady);
		void OnMatchingStateChanged(bool bMatching);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyUserSlotBase
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class ULobbyUserSlotBase : public UDCCommonButtonBase
	{
	public:
		class FText                                                UserNameText;                                            // 0x0310(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                LevelText;                                               // 0x0328(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                ClassNameText;                                           // 0x0340(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          ClassIconImage;                                          // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ClassPortraitImage;                                      // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LobbyWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ULobbyWidget : public UDCWidgetBase
	{
	public:
		void OnPopupSWidgetInvitePartyAnswerResponse(EPopupResult PopupResult, const class FString& ReturnAccountId);
		void OnPopupSWidgetInvitePartyAnswerRequest(class UPopupDataBase* PopupData, const struct FClientMsgInvitePartyNotifyBody& InvitePartyBody);
		void OnLobbySystemMessage(const class FText& AnnounceText);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LoginWidget
	 * Size -> 0x00C8 (FullSize[0x03B8] - InheritedSize[0x02F0])
	 */
	class ULoginWidget : public UDCWidgetBase
	{
	public:
		EDCLoginState                                              LoginState;                                              // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J9CD[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonPopupManageWidget*                            WB_Common_Popup_Manage;                                  // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PopupWidgetClass;                                        // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonPopupSWidget*                                 WB_CommonPopup_S;                                        // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                WelcomeText;                                             // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                ConfirmReconnectText;                                    // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                ConnectText;                                             // 0x0340(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                PrevGameClosedText;                                      // 0x0358(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UComboBoxString*                                     ServerListComboBox;                                      // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    IPTextBox;                                               // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    IDTextBox;                                               // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    PasswordTextBox;                                         // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          LoginMessage;                                            // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              PassWord;                                                // 0x0398(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBPD[0x10];                                  // 0x03A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnTextChangedPassWord(const class FText& InPassWord);
		void OnTextChangedLoginId(const class FText& InLoginId);
		void OnSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnLoginButtonClicked();
		void OnLogin();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LootComponent
	 * Size -> 0x00F8 (FullSize[0x02E8] - InheritedSize[0x01F0])
	 */
	class ULootComponent : public UInventoryComponent
	{
	public:
		class AActor*                                              LootTargetActor;                                         // 0x01F0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FHitResult                                          HitResultTargetData;                                     // 0x01F8(0x00E8) Net, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bLootTargetIsPlayer;                                     // 0x02E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0GNA[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (PADDING)

	public:
		void ServerRemoveLootTarget(class UInventoryComponent* InventoryComponent, TArray<struct FItemData> InContainingItems);
		void ServerClearLootingTargetContainingItems();
		void OnRep_LootTargetActor(class AActor* OldLootTargetActor);
		bool IsLootTargetPlayer();
		class AActor* GetLootTargetActor();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.LootingPlayerInventoryWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class ULootingPlayerInventoryWidget : public UDCWidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnSetLootTargetPlayer;                                   // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantActorBase
	 * Size -> 0x0070 (FullSize[0x0348] - InheritedSize[0x02D8])
	 */
	class AMerchantActorBase : public ADCActorBase
	{
	public:
		struct FMerchantInfo                                       CurrentMerchantInfo;                                     // 0x02D8(0x0020) NoDestructor, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class APlayerController>                    LocalPlayerController;                                   // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class APawn>                                LocalPlayerPawn;                                         // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UEquipmentInventoryComponent>         PlayerEquipmentInventory;                                // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class UInventoryComponent>>          PlayerInventoryArray;                                    // 0x0318(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FStockBuyTradeItemInfo>                      StockBuyTradeItemInfoArray;                              // 0x0328(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FStockCraftTradeItemInfo>                    StockCraftTradeItemInfoArray;                            // 0x0338(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantDealTableWidget
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class UMerchantDealTableWidget : public UDCWidgetBase
	{
	public:
		struct FMerchantInfo                                       MerchantInfo;                                            // 0x02F0(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        RemainTimeTimerHandle;                                   // 0x0310(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateMerchantRemainTime();
		void OnSetMerchantScript(const class FText& InScript);
		void OnSetMerchantRemainTime(const struct FTimespan& RemainTime);
		void OnSetMerchantPortrait(class UTexture2D* Portrait);
		void OnSetMerchantName(const class FText& Name);
		void OnSetMerchantFaction(int32_t InFaction);
		void OnMerchantServiceActiveNotify(EWidgetMerchantServiceType ActiveService);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantInventoryWidget
	 * Size -> 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
	 */
	class UMerchantInventoryWidget : public UContainerInventoryWidget
	{
	public:
		EWidgetMerchantInventoryType                               MerchantInventoryType;                                   // 0x03F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ASCS[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantItemWidget
	 * Size -> 0x01B8 (FullSize[0x0568] - InheritedSize[0x03B0])
	 */
	class UMerchantItemWidget : public UControllableItemWidget
	{
	public:
		struct FStockBuyData                                       StockBuyData;                                            // 0x03B0(0x00B8) Protected, NativeAccessSpecifierProtected
		struct FStockSellBackData                                  StockSellBackData;                                       // 0x0468(0x0040) Protected, NativeAccessSpecifierProtected
		struct FStockCraftData                                     StockCraftData;                                          // 0x04A8(0x00B8) Protected, NativeAccessSpecifierProtected
		EInventoryType                                             ParentInventoryType;                                     // 0x0560(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZO7B[0x1];                                   // 0x0561(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bWasSelected;                                            // 0x0562(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_REWG[0x5];                                   // 0x0563(0x0005) MISSED OFFSET (PADDING)

	public:
		void SetActivateStockSellBackInfo(bool bSellTabOpen);
		void OnStockSellBackDataSet(const struct FStockSellBackData& InStockSellBackData);
		void OnStockCraftDataSet(const struct FStockCraftData& InStockCraftData);
		void OnStockBuyDataSet(const struct FStockBuyData& InStockBuyData);
		void OnSelected(bool bSelected);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantListSlotWidget
	 * Size -> 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
	 */
	class UMerchantListSlotWidget : public UDCCommonButtonBase
	{
	public:
		struct FMerchantInfo                                       MerchantInfo;                                            // 0x0310(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        RemainTimeTimerHandle;                                   // 0x0330(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateMerchantRemainTime();
		void OnSetMerchantRemainTime(const struct FTimespan& RemainTime);
		void OnSetMerchantPortrait(class UTexture2D* Portrait);
		void OnSetMerchantName(const class FText& Name);
		void OnSetMerchantFaction(int32_t InFaction);
		void OnClickedDeal();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantListWidget
	 * Size -> 0x0088 (FullSize[0x0378] - InheritedSize[0x02F0])
	 */
	class UMerchantListWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              MerchantListSlotWidgetClassPtr[0x28];                    // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TMap<struct FPrimaryAssetId, class UMerchantListSlotWidget*> MerchantListSlotMap;                                     // 0x0318(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_97L7[0x10];                                  // 0x0368(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRemoveAllMerchantListSlotWidget();
		void OnAddMerchantListSlotWidget(class UUserWidget* AddedSlotWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantServiceTabWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UMerchantServiceTabWidget : public UDCCommonButtonBase
	{
	public:
		EWidgetMerchantServiceType                                 MerchantServiceType;                                     // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WXTZ[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnClickedServiceTab();
		void OnChangeActiveState(bool bActive);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantServiceGroupTabWidget
	 * Size -> 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
	 */
	class UMerchantServiceGroupTabWidget : public UMerchantServiceTabWidget
	{
	public:
		EWidgetMerchantServiceType                                 MerchantSecondaryServiceType;                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNNS[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MerchantServiceWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UMerchantServiceWidget : public UDCWidgetBase
	{
	public:
		void OnMerchantServiceActiveNotify(EWidgetMerchantServiceType ActiveService);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaClassComponent
	 * Size -> 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
	 */
	class UMetaClassComponent : public UMetaComponentBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             SpellIdArray;                                            // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAccountDataSpell>                           AccountDataSpellArray;                                   // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaDealTableInventoryComponent
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UMetaDealTableInventoryComponent : public UDealTableInventoryComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaFriendComponent
	 * Size -> 0x0040 (FullSize[0x0150] - InheritedSize[0x0110])
	 */
	class UMetaFriendComponent : public UMetaComponentBase
	{
	public:
		unsigned char                                              UnknownData_W6UQ[0x40];                                  // 0x0110(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaInventoryComponent
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UMetaInventoryComponent : public UInventoryComponent
	{
	public:
		void OnLobbyCharacterInfoUupdated();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaItemComponent
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UMetaItemComponent : public UItemComponentBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaLeaderBoardComponent
	 * Size -> 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
	 */
	class UMetaLeaderBoardComponent : public UMetaComponentBase
	{
	public:
		unsigned char                                              UnknownData_3PY4[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaMerchantActor
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class AMetaMerchantActor : public AMerchantActorBase
	{
	public:
		TArray<struct FMerchantInfo>                               MerchantInfoArray;                                       // 0x0348(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<TWeakObjectPtr<class UMetaStorageComponent>>        PlayerMetaStorageArray;                                  // 0x0358(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		void OnSetMerchantInfoArray();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaPartyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMetaPartyInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaPlayComponent
	 * Size -> 0x0070 (FullSize[0x0180] - InheritedSize[0x0110])
	 */
	class UMetaPlayComponent : public UMetaComponentBase
	{
	public:
		unsigned char                                              UnknownData_3A2G[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EWidgetPartyUserLocate, class ADCCharacterLobbyCapture*> CharacterLobbyCaptureMap;                                // 0x0130(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.StockBuyInventoryComponent
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UStockBuyInventoryComponent : public UInventoryComponent
	{
	public:
		TArray<struct FStockBuyData>                               StockBuyDataArray;                                       // 0x01F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TBYV[0x20];                                  // 0x0200(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetStockBuyDataArray(const struct FMerchantInfo& InMerchantInfo);
		void RequestStockBuy(const struct FStockBuyData& InStockBuyData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaStockBuyInventoryComponent
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class UMetaStockBuyInventoryComponent : public UStockBuyInventoryComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.StockCraftInventoryComponent
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UStockCraftInventoryComponent : public UInventoryComponent
	{
	public:
		TArray<struct FStockCraftData>                             StockCraftDataArray;                                     // 0x01F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y2EX[0x20];                                  // 0x0200(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetStockCraftDataArray(const struct FMerchantInfo& InMerchantInfo);
		void RequestStockCraft(const struct FStockCraftData& InStockCraftData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaStockCraftInventoryComponent
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class UMetaStockCraftInventoryComponent : public UStockCraftInventoryComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.StockSellBackInventoryComponent
	 * Size -> 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])
	 */
	class UStockSellBackInventoryComponent : public UInventoryComponent
	{
	public:
		TArray<struct FStockSellBackData>                          StockSellBackDataArray;                                  // 0x01F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetStockSellBackItemArray(const struct FMerchantInfo& InMerchantInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaStockSellInventoryComponent
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class UMetaStockSellInventoryComponent : public UStockSellBackInventoryComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MetaStorageComponent
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UMetaStorageComponent : public UInventoryComponent
	{
	public:
		void OnLobbyCharacterInfoUupdated();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.MiniMapData
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UMiniMapData : public UDCDataAssetBase
	{
	public:
		TMap<class FString, struct FDCMiniMapDataContainer>        MiniMapData;                                             // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.NickNameWidgetBase
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UNickNameWidgetBase : public UDCWidgetBase
	{
	public:
		struct FNickNameWidgetData                                 WidgetData;                                              // 0x02F0(0x0010) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N1VI[0x20];                                  // 0x0300(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetNickName(const struct FNickname& InNickName);
		void OnNickNameStr(const class FString& NewValue, const class FString& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.OnlineSystemSteam
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UOnlineSystemSteam : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_2MM8[0x70];                                  // 0x0030(0x0070) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PartyChatWidget
	 * Size -> 0x0040 (FullSize[0x0350] - InheritedSize[0x0310])
	 */
	class UPartyChatWidget : public UChatSetWidgetBase
	{
	public:
		struct FPartyChatWidgetData                                WidgetData;                                              // 0x0310(0x0040) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void OnChatAccountData(const struct FChatAccountData& NewItemData, const struct FChatAccountData& OldItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PartySession
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPartySession : public UObject
	{
	public:
		unsigned char                                              UnknownData_2O3D[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MFXZ[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PerkWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class UPerkWidget : public UDCWidgetBase
	{
	public:
		class UImage*                                              PerkIconImage;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPerkWidgetData                                     PerkWidgetData;                                          // 0x02F8(0x0030) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UClass*                                              PerkToolTipWidgetClass;                                  // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0330(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetPerkData(const class FText& PerkName, const class FText& PerkDesc);
		void OnSetPerkData();
		void InitializePerkWidget(const struct FPrimaryAssetId& InPerkId);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PlayerCharacterCaptureActor
	 * Size -> 0x0138 (FullSize[0x0410] - InheritedSize[0x02D8])
	 */
	class APlayerCharacterCaptureActor : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_KY2H[0x20];                                  // 0x02D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCAccountId                                        TargetAccount;                                           // 0x02F8(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADCPlayerCharacterBase*                              TargetPlayerCharacter;                                   // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7PH[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0318(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartHead;                                                // 0x0320(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartHelmet;                                              // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartGloves;                                              // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartChest;                                               // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartPants;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              PartBoots;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     DefaultIdleAnimation;                                    // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StartRotateLocation;                                     // 0x0358(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AF29[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     ItemStandIdleAnimation;                                  // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAccountLink*                                        AccountLink;                                             // 0x0370(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              LinkedAccountId;                                         // 0x0378(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0388(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UEquipmentInventoryComponent>         CapturedEquipmentComponent;                              // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCharacterDataComponent*                           DataComponent;                                           // 0x03A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCharacterPartsComponent*                          PartsComponent;                                          // 0x03A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int64_t, class AActor*>                               ContainingActorMap;                                      // 0x03B0(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SHPF[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStartRotateLocation(float InStartPosition);
		void SetMeshRotation(float InYaw);
		void ResetMeshRotation();
		void OnItemEquipped(class UAnimationAsset* ItemStandIdle, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
		class UAnimInstance* GetCharacterMeshAnimInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.PlayWidget
	 * Size -> 0x00C8 (FullSize[0x03B8] - InheritedSize[0x02F0])
	 */
	class UPlayWidget : public UDCWidgetBase
	{
	public:
		unsigned char                                              UnknownData_ZGT4[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLobbyCharacterInfo                                 LobbyCharacterData;                                      // 0x0300(0x0088) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonPopupSWidget*                                 WB_CommonPopup_S;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QOCD[0xC];                                   // 0x0398(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     HighRollerFeeGold;                                       // 0x03A4(0x0010) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2PJA[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnUpdateLobbyCharacterData(const struct FLobbyCharacterInfo& LobbyInfo);
		void OnUpdateDungeonSelectBtn(EGameDifficultyType GameDifficultyType, bool bLeader);
		void OnStartButtonClicked();
		void OnSoloRegionUpdate(int32_t RegionIndex);
		void OnRegionSelected(int32_t RegionIndex);
		void OnRegionDataSet(int32_t RegionIndex, bool IsPartyLeader);
		void OnPopupSWidgetInvitePartyResponse(EPopupResult PopupResult, const class FString& ReturnAccountId);
		void OnPopupSWidgetInvitePartyRequest(class UPopupDataBase* PopupData, const class FString& ReturnAccountId);
		void OnPlayPartyUserInfoData(const struct FPlayPartyUserInfoData& NewValue, const struct FPlayPartyUserInfoData& OldValue);
		void OnPlayPartyUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo);
		void OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady);
		void OnPartyReadyButtonClicked(bool IsReady);
		void OnPartyLocationSet(const struct FPlayPartyUserInfo& PartyUser, int32_t MetaLocationIndex, bool IsReady);
		void OnPartyExitButtonClicked();
		void OnPartyCheckAndRegionButtonUpdate(int32_t RegionIndex);
		void OnMatchStart(bool InbCanCancel, float InMatchCancelDelayTimeSec);
		void OnMatchCancel();
		void OnInvitePartyButtonClicked(EWidgetPartyUserLocate UserLocate);
		void OnDungeonSelectListPopupOpen(EGameDifficultyType GameDifficultyType, int32_t EntranceFeeGold);
		void OnDungeonSelect(EGameDifficultyType GameDifficultyType);
		void OnClickedDungeonSelect();
		void OnChangedMatchingState(bool IsInMatching);
		void OnCancelButtonClicked();
		void AutoTeamRegisterSingle(bool IsRegister);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ProjectileActor
	 * Size -> 0x02B8 (FullSize[0x05A0] - InheritedSize[0x02E8])
	 */
	class AProjectileActor : public ADCAbilityActorBase
	{
	public:
		unsigned char                                              UnknownData_56KA[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0300(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0308(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsHomingProjectile;                                     // 0x0310(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6940[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HomingMagnitude;                                         // 0x0314(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     HomingTargetComponent;                                   // 0x0318(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             ProjectileMovementComponentLocalVelocity;                // 0x0320(0x0018) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDesignDataAssetProjectile*                          DesignDataAssetProjectile;                               // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PierceCount;                                             // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsObstaclePierce;                                        // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OD32[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ObstaclePierceDecrease;                                  // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Lifetime;                                                // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                AbilityTriggerTagsWhenLifeTimeExpired;                   // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ITAC[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AddEffectToTargetHit;                                    // 0x0368(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FPrimaryAssetId>                             AddEffectToGroundHit;                                    // 0x0378(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YBB0[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0390(0x0060) Edit, BlueprintVisible, Config, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected
		struct FItemData                                           ProjectileItemData;                                      // 0x03F0(0x0090) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         AccelerationCurve;                                       // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StartTime_AccelTimeline;                                 // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate_AccelTimeline;                                  // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsLoop_AccelTimeline;                                    // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AHNL[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeline                                           AccelrationTimeline;                                     // 0x0498(0x0098) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class USoundData*                                          SoundData;                                               // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGameplayAbilitySpecHandle>                  GameplayAbilitySpecHandles;                              // 0x0538(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FActiveGameplayEffectHandle>                 GameplayEffectHandles;                                   // 0x0548(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O7E8[0x20];                                  // 0x0558(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldAttachWhenHitCharacter;                           // 0x0578(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldAttachWhenHitShield;                              // 0x0579(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldAttachWhenHitStaticObject;                        // 0x057A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OIRT[0x25];                                  // 0x057B(0x0025) MISSED OFFSET (PADDING)

	public:
		void StopPierce();
		void SetHomingTargetComponent(class USceneComponent* InHomingTargetComponent);
		void SetHomingMagnitude(float InHomingMagnitude);
		void SetAddEffectToTargetHit(TArray<struct FPrimaryAssetId> AddEffectList);
		void SetAddEffectToGroundtHit(TArray<struct FPrimaryAssetId> AddEffectList);
		void ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform);
		void PlayPierce(float SetPierceCount, bool SetObstaclePierce, float SetObstaclePierceDecrease);
		void OnRep_ProjectileMovementComponentLocalVelocity();
		void OnRep_IsHomingProjectile();
		void OnRep_HomingTargetComponent();
		void OnRep_HomingMagnitude();
		void OnLifeTimeExpired();
		void LifeTimeExpired();
		void InitVelocity(float FirePower);
		float InitialSpeed();
		void InitArrivalVelocity(const struct FVector& Velocity);
		void HandleTimelineUpdate(float Value);
		void HandleTimelineFinished();
		TArray<struct FPrimaryAssetId> GetAddEffectToTargetHit();
		TArray<struct FPrimaryAssetId> GetAddEffectToGroundHit();
		void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.DCPropDataComponent
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UDCPropDataComponent : public UDCDataComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SampleSubObject
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class USampleSubObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_63HQ[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void InitializeSampleSubObject();
		void BroadcastMsgBlueprint(int32_t InMsg);
		void BeginSampleSubObject();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SampleObject
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class USampleObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_60JL[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseObject*                                         BaseObject;                                              // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SampleSubObjectClass;                                    // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USampleSubObject*                                    SampleSubObject;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void InitializeSampleObject();
		void BroadcastMsgBlueprint(int32_t InMsg);
		void BeginSampleObject();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.ServerAccountSubsystem
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UServerAccountSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_Q9BF[0xD0];                                  // 0x0030(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStartGameSessionState                              StartGameSessionState;                                   // 0x0100(0x0001) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_431P[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProcessTerminateState                              ProcessTerminateState;                                   // 0x0104(0x0008) NoDestructor, NativeAccessSpecifierPrivate
		struct FHealthCheckState                                   HealthCheckState;                                        // 0x010C(0x0001) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RT7V[0xC3];                                  // 0x010D(0x00C3) MISSED OFFSET (PADDING)

	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SkeletalMeshItemHolderActor
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class ASkeletalMeshItemHolderActor : public AItemHolderActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SkillActor
	 * Size -> 0x0120 (FullSize[0x03F8] - InheritedSize[0x02D8])
	 */
	class ASkillActor : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_CFT5[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     SkillRequiredRechargeAmountPerTierConstant;              // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BCOI[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSkillData                                          SkillData;                                               // 0x02F8(0x002C) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K6IJ[0xC4];                                  // 0x0324(0x00C4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArtDataSkill*                                       ArtDataSkill;                                            // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundData*                                          SoundData;                                               // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSkillData(const struct FSkillData& NewSkillData);
		void RechargeSkill(int32_t ChargeAmount);
		void OnRep_SkillData(const struct FSkillData& OldSkillData);
		class USoundData* GetSoundDataSkill();
		struct FSkillData GetSkillData();
		struct FDesignDataSkill GetDesignDataSkill();
		class UArtDataSkill* GetArtDataSkill();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SkillComponent
	 * Size -> 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
	 */
	class USkillComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ZN5G[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     CharacterStopMovementThresholdConstant;                  // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASkillActor*>                                 SkillActors;                                             // 0x0118(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FSkillDataInfo>                              CurSkillDataList;                                        // 0x0128(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8YPK[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAsyncTaskEffectStackChanged*                        EffectStackAsyncTask;                                    // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool UpdateSkillCount(const struct FGameplayTag& SkillTag, int32_t Count);
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void OnRep_SkillDataList(TArray<struct FSkillDataInfo> OldSkillDataList);
		void OnRep_SkillActorList(TArray<class ASkillActor*>* OldSkillActors);
		void InitSkillData();
		void HandleSkillInput(const struct FGameplayTag& InputTag);
		struct FSkillData GetSkillDataByTriggerTag(const struct FGameplayTag& TriggerTag);
		struct FSkillData GetSkillDataByIndex(ESkillIndex SkillIndex);
		void GetSkillAllCurrentSkillData(TArray<struct FSkillData>* SkillDataList, TArray<float>* MaxDurationList, TArray<float>* RemainDurationList);
		class ASkillActor* GetSkillActor(const struct FGameplayTag& SkillTag);
		ESkillActivatableType GetSkillActivatabilityByTriggerTag(const struct FGameplayTag& TriggerTag);
		void GameplayEffectStackChanged(const struct FGameplayTag& EffectGameplayTag, const struct FActiveGameplayEffectHandle& EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount);
		bool CheckSkillReduceCount(const struct FGameplayTag& SkillTag, float ReduceCount);
		float CalSkillCooldownRemainTime(float StartTime, float RemainDuration, float MaxDuration);
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SkillWidget
	 * Size -> 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
	 */
	class USkillWidget : public UDCWidgetBase
	{
	public:
		class UImage*                                              SkillIconImage;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSkillWidgetData                                    SkillWidgetData;                                         // 0x02F8(0x0030) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UClass*                                              SkillToolTipWidgetClass;                                 // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0330(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSkillData(const class FText& SkillName, const class FText& SkillDesc);
		void OnSetSkillData();
		void InitializeSkillWidget(const struct FPrimaryAssetId& InSkillId);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SoundBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_PlaySoundWithTag(class UObject* InSoundPlayer, class UObject* InSoundProvider, const struct FGameplayTag& Tag);
		bool STATIC_PlaySoundWithSwitch(class UObject* InSoundPlayer, class UAkAudioEvent* AkEvent, class UObject* InSoundProvider, const struct FGameplayTag& Tag, EPhysicalSurface Surface, const class FString& SwitchGroup, const class FString& SwitchState);
		bool STATIC_PlaySoundOnPlayerController(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent);
		bool STATIC_PlaySound(class UObject* InSoundPlayer, class UAkAudioEvent* AkEvent);
		bool STATIC_IsSoundPlayable(class UObject* InSoundPlayer, class UObject* InSoundProvider, const struct FGameplayTag& InSoundEventTag);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SoundData
	 * Size -> 0x00F0 (FullSize[0x0128] - InheritedSize[0x0038])
	 */
	class USoundData : public UDCDataAssetBase
	{
	public:
		TMap<struct FGameplayTag, class UAkAudioEvent*>            AkEventByGameplayTag;                                    // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FDCSoundDataContainer>    AkSwitchesByGameplayTag;                                 // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayTagQuery>        SoundPlayableTagQuery;                                   // 0x00D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SoundProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundProvider : public UInterface
	{
	public:
		struct FGameplayTagQuery GetTagQuery(const struct FGameplayTag& Tag);
		TMap<struct FGameplayTag, struct FGameplayTagQuery> GetTagQueries();
		TMap<struct FGameplayTag, struct FDCSoundDataContainer> GetSwitches();
		class UAkSwitchValue* GetSwitch(const struct FGameplayTag& Tag, EPhysicalSurface Surface);
		struct FPrimaryAssetId GetLastPrimaryAssetId();
		TMap<struct FGameplayTag, class UAkAudioEvent*> GetEvents();
		class UAkAudioEvent* GetEvent(const struct FGameplayTag& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellActor
	 * Size -> 0x0110 (FullSize[0x03E8] - InheritedSize[0x02D8])
	 */
	class ASpellActor : public ADCActorBase
	{
	public:
		unsigned char                                              UnknownData_UUOZ[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     SpellRequiredRechargeAmountPerTierConstant;              // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8G0Z[0xB8];                                  // 0x02F0(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpellData                                          SpellData;                                               // 0x03A8(0x002C) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5JEG[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArtDataSpell*                                       ArtDataSpell;                                            // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundData*                                          SoundData;                                               // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool UpdateSpellCount(int32_t Count);
		void SetSpellData(const struct FSpellData& NewSpellData);
		void RechargeSpell(int32_t ChargeAmount);
		void OnRep_SpellData(const struct FSpellData& OldSpellData);
		struct FSpellData GetSpellData();
		class USoundData* GetSoundDataSpell();
		struct FDesignDataSpell GetDesignDataSpell();
		class UArtDataSpell* GetArtDataSpell();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.SpellMemorizeComponent
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class USpellMemorizeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GTHO[0x70];                                  // 0x00B0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASpellActor*>                                 SpellActors;                                             // 0x0120(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BYFL[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpellCurrentCapacity;                                    // 0x0138(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JEKS[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UpdateSpellCount(const struct FGameplayTag& SpellTag, int32_t Count);
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		bool TryUseSpell(const struct FGameplayTag& SpellTriggerTag);
		void TerminateBase();
		void ServerSetCurrentSpell(const struct FGameplayTag& SpellTag);
		void OnRep_SpellActors(TArray<class ASpellActor*> OldASpellActors);
		void InitSpellData(const struct FAccountData& InAccountData);
		TArray<struct FSpellData> GetSpellDatas();
		ESpellCastabilityType GetCurrentSpellCastability();
		class ASpellActor* GetCurrentSpellActor();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.StaticMeshItemHolderActor
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class AStaticMeshItemHolderActor : public AItemHolderActorBase
	{
	public:
		static UClass* StaticClass();
	};


	/**
	 * BlueprintGeneratedClass BP_StaticMeshItemHolder.BP_StaticMeshItemHolder_C
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class ABP_StaticMeshItemHolder_C : public AStaticMeshItemHolderActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.StorageWidget
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UStorageWidget : public UDCWidgetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TagQueryData
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UTagQueryData : public UDCDataAssetBase
	{
	public:
		struct FGameplayTagQuery                                   SourceTagQuery;                                          // 0x0038(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   TargetTagQuery;                                          // 0x0080(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TopTitleWidgetBase
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UTopTitleWidgetBase : public UDCWidgetBase
	{
	public:
		class UTextBlock*                                          Text_Title;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 Btn_Left;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDCCommonButtonBase*                                 Btn_Right;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TotalGoldCountWidgetBase
	 * Size -> 0x0088 (FullSize[0x0378] - InheritedSize[0x02F0])
	 */
	class UTotalGoldCountWidgetBase : public UDCWidgetBase
	{
	public:
		class UTextBlock*                                          GoldCountText;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAccountLink*                                        AccountLink;                                             // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class UInventoryComponent>, int32_t>   InventoryGoldCountMap;                                   // 0x0300(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                LinkedPlayerPawn;                                        // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LinkedAccountId;                                         // 0x0358(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CheckTargetAccountId;                                    // 0x0368(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeChannelButtonBase
	 * Size -> 0x0030 (FullSize[0x0340] - InheritedSize[0x0310])
	 */
	class UTradeChannelButtonBase : public UDCCommonButtonBase
	{
	public:
		class UTextBlock*                                          Text_Title;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Text_Member;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_47S1[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnChannelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeChannelChatWidget
	 * Size -> 0x00A8 (FullSize[0x03B8] - InheritedSize[0x0310])
	 */
	class UTradeChannelChatWidget : public UChatSetWidgetBase
	{
	public:
		class FText                                                ChannelName;                                             // 0x0310(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FTradeChannelChatWidgetData                         WidgetData;                                              // 0x0328(0x0048) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G1FH[0x48];                                  // 0x0370(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnChatType(EChatType NewItemData, EChatType OldItemData);
		void OnChatAccountData(const struct FChatAccountData& NewItemData, const struct FChatAccountData& OldItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeChannelListWidget
	 * Size -> 0x0070 (FullSize[0x0360] - InheritedSize[0x02F0])
	 */
	class UTradeChannelListWidget : public UDCWidgetBase
	{
	public:
		class UClass*                                              ChannelButtonWidgetClass;                                // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ChannelCategoryWidgetClass;                              // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScrollBox*                                          ScrollBox_ChannelList;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            Overlay_DisableSelection;                                // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EPJT[0x50];                                  // 0x0310(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeChatWidget
	 * Size -> 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
	 */
	class UTradeChatWidget : public UChatSetWidgetBase
	{
	public:
		struct FTradeChatWidgetData                                WidgetData;                                              // 0x0310(0x0040) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z2GC[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnChatAccountData(const struct FChatAccountData& NewItemData, const struct FChatAccountData& OldItemData);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeMasterWidget
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UTradeMasterWidget : public UDCWidgetBase
	{
	public:
		class UCommonButtonLWidget*                                WB_CommonBtn_BecomeTrader;                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Text_TradingMasterConversation;                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SendTradeSubscriptionWidgetBeginNotify();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeSubscriptionWidget
	 * Size -> 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
	 */
	class UTradeSubscriptionWidget : public UDCWidgetBase
	{
	public:
		class FText                                                RequirementLevelText;                                    // 0x02F0(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                RequirementFeeText;                                      // 0x0308(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                RequirementMonthDueText;                                 // 0x0320(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                RequirementTradeCostText;                                // 0x0338(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                TraderName;                                              // 0x0350(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            CommonBtn_Cancel;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            CommonBtn_Confirm;                                       // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonPopupWidget*                            CommonBtn_Done;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     WidgetSwitcher_Subscription;                             // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SendMsgWidgetTradeSubscriptionButtonClicked();
		void OnClikedButtonDone();
		void CloseSelf();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeUserListEntryWidgetData
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UTradeUserListEntryWidgetData : public UObject
	{
	public:
		struct FCharacterTradeInfo                                 CharacterTradeInfo;                                      // 0x0028(0x0060) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeUserListEntryWidget
	 * Size -> 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
	 */
	class UTradeUserListEntryWidget : public ULobbyUserSlotBase
	{
	public:
		unsigned char                                              UnknownData_8I4C[0x10];                                  // 0x0368(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRightClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawler.TradeUserListWidget
	 * Size -> 0x0060 (FullSize[0x0350] - InheritedSize[0x02F0])
	 */
	class UTradeUserListWidget : public UDCWidgetBase
	{
	public:
		class FText                                                TraderNumText;                                           // 0x02F0(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class ULobbyUserSlotBase*                                  TradeUser_Local;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTileView*                                           TileView_UserList;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    FindUserEditableTextBox;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2O31[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTradeUserListEntryWidgetData*>               TradeUserList;                                           // 0x0340(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void OnTextChanged(const class FText& FindId);
		void OnBlockUpdated();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
