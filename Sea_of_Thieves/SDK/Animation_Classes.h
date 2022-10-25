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
	 * Class Animation.CharacterAnimationInstance
	 * Size -> 0x0220 (FullSize[0x0660] - InheritedSize[0x0440])
	 */
	class UCharacterAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9WIS[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimationIKUpdateParams                   IKLeftHandUpdateParams;                                  // 0x0450(0x0040) BlueprintVisible, BlueprintReadOnly, Protected
		struct FCharacterAnimationIKUpdateParams                   IKRightHandUpdateParams;                                 // 0x0490(0x0040) BlueprintVisible, BlueprintReadOnly, Protected
		class FName                                                RightHandIKSocketName;                                   // 0x04D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FName                                                LeftHandIKSocketName;                                    // 0x04D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FLimbIK                                             RightHandIK;                                             // 0x04E0(0x0060) Protected
		struct FLimbIK                                             LeftHandIK;                                              // 0x0540(0x0060) Protected
		struct FLimbIK                                             RightFootIK;                                             // 0x05A0(0x0060) Protected
		struct FLimbIK                                             LeftFootIK;                                              // 0x0600(0x0060) Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationServerData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationServerData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AIAnimationInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIAnimationInstanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataConsumerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataConsumerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataFunctionLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataFunctionLib : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
		class UAnimationData* STATIC_MakeAnimationData(class UClass* Class);
		struct FAnimDataEntryStructWrapper STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
		void STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataOverriderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataOverriderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreOverrideId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreOverrideId : public UAnimationDataStoreId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStore
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAnimationDataStore : public UObject
	{
	public:
		unsigned char                                              UnknownData_CG1N[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimationDataStoreEntry>                    Data;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, EditConst
		TArray<struct FAnimationDataStoreLoadingEntry>             LoadingData;                                             // 0x0050(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreAsset : public UDataAsset
	{
	public:
		TArray<struct FAnimationDataStoreAssetEntry>               AssetRefs;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
		class UClass* STATIC_GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreWeakReferenceAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreWeakReferenceAsset : public UDataAsset
	{
	public:
		TArray<struct FAnimationDataStoreAssetWeakReferenceEntry>  AssetWeakRefs;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreLoaderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreLoaderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreComponent
	 * Size -> 0x00C8 (FullSize[0x0190] - InheritedSize[0x00C8])
	 */
	class UAnimationDataStoreComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PZGQ[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataStoreWeakReferenceAsset*               AnimationDataStoreWeakReferences;                        // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L95W[0xB8];                                  // 0x00D8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationDataStoreInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationDataStoreInterface : public UInterface
	{
	public:
		class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationEditorSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimationEditorSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               CustomAnimationMontageIdListings;                        // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationLookAtInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationLookAtInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimationStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationStateId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_DestroyAllCosmeticItems
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_DestroyAllCosmeticItems : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_DestroyCosmeticItem
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_DestroyCosmeticItem : public UAnimNotify
	{
	public:
		EWieldAnimationLocation                                    DestroyLocation;                                         // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLUB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_DetachAndMaintainWorldPosition
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAnimNotify_DetachAndMaintainWorldPosition : public UAnimNotify
	{
	public:
		EWieldAnimationLocation                                    CurrentLocation;                                         // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KCEK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviewLocationOffset;                                   // 0x003C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PreviewScaleMultiplier;                                  // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FVKW[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_PlayAnimationForCosmetic
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayAnimationForCosmetic : public UAnimNotify
	{
	public:
		EWieldAnimationLocation                                    CosmeticLocation;                                        // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WH8J[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CosmeticItemAnimation;                                   // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Looping;                                                 // 0x0048(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PY9[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_PlayMontage
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayMontage : public UAnimNotify
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_SetCosmeticItemVisibility
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SetCosmeticItemVisibility : public UAnimNotify
	{
	public:
		EWieldAnimationLocation                                    ItemLocation;                                            // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Visible;                                                 // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RenderShadow;                                            // 0x003A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RenderShadowWhenHidden;                                  // 0x003B(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UpdateForRole;                                           // 0x003C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ENetRole                                                   UpdateRole;                                              // 0x003D(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_50DW[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_SetLookAtEnabled
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SetLookAtEnabled : public UAnimNotify
	{
	public:
		bool                                                       Enabled;                                                 // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4CZL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_SpawnCosmeticItem
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SpawnCosmeticItem : public UAnimNotify
	{
	public:
		class UClass*                                              ItemSpawnClass;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EWieldAnimationLocation                                    SpawnLocation;                                           // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7QUC[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItemAnimationSetDataAsset*                  CosmeticItemAnimationDataSet;                            // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnHidden;                                             // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SpawnForRole;                                            // 0x0051(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ENetRole                                                   SpawnRole;                                               // 0x0052(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H6NB[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_StateComplete
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_StateComplete : public UAnimNotify
	{
	public:
		class UClass*                                              CompletedStateId;                                        // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_SwitchCosmeticItemAttachment
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SwitchCosmeticItemAttachment : public UAnimNotify
	{
	public:
		EWieldAnimationLocation                                    PreviousLocation;                                        // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWieldAnimationLocation                                    NewLocation;                                             // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WRS3[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotify_ToggleIK
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAnimNotify_ToggleIK : public UAnimNotify
	{
	public:
		TArray<ECharacterIKLimb>                                   IKLimbsToAdjust;                                         // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor
		bool                                                       Enabled;                                                 // 0x0048(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5R7G[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyCondition_FeatureConfigValidation
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAnimNotifyCondition_FeatureConfigValidation : public UAnimNotifyCondition
	{
	public:
		class FName                                                Feature;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TriggerWhenDisabled;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ONYG[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_HideMeshByBoneForDuration
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_HideMeshByBoneForDuration : public UAnimNotifyState
	{
	public:
		class FName                                                BoneName;                                                // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_PropagateCurveValuesToMaterials
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_PropagateCurveValuesToMaterials : public UAnimNotifyState
	{
	public:
		TArray<struct FCurveUpdateValues>                          CurveValues;                                             // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor
		bool                                                       DoNotPropagteCurveValues;                                // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CE8[0x17];                                  // 0x0039(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_SetLookAtDisabledForDuration
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_SetLookAtDisabledForDuration : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_SetLookAtEnabledForDuration
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_SetLookAtEnabledForDuration : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_SetMeshInvisibleForDuration
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_SetMeshInvisibleForDuration : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_SpawnCosmeticItem
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_SpawnCosmeticItem : public UAnimNotifyState
	{
	public:
		class UClass*                                              CosmeticItemToSpawn;                                     // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EWieldAnimationLocation                                    SpawnLocation;                                           // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y5BH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItemAnimationSetDataAsset*                  CosmeticItemAnimationDataSet;                            // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnHidden;                                             // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DestroyOnEnd;                                            // 0x0041(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideDestroyLocation;                                 // 0x0042(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		EWieldAnimationLocation                                    DestroyLocation;                                         // 0x0043(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7VL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AnimNotifyState_ToggleIK
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_ToggleIK : public UAnimNotifyState
	{
	public:
		TArray<ECharacterIKLimb>                                   IKLimbsToAdjust;                                         // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor
		bool                                                       Enabled;                                                 // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JWRX[0x57];                                  // 0x0039(0x0057) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.AthenaAnimationControllableSocketsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAnimationControllableSocketsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CharacterIKInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterIKInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.PreviewCharacterAnimationInstance
	 * Size -> 0x0080 (FullSize[0x06E0] - InheritedSize[0x0660])
	 */
	class UPreviewCharacterAnimationInstance : public UCharacterAnimationInstance
	{
	public:
		class UAnimMontage*                                        ActiveMontage;                                           // 0x0660(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TKJK[0x78];                                  // 0x0668(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.ClientSkeletalMeshComponent
	 * Size -> 0x0000 (FullSize[0x09C0] - InheritedSize[0x09C0])
	 */
	class UClientSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemActor
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class ACosmeticItemActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_10WI[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1KMG[0xA0];                                  // 0x03D8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticItemAnimationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationComponent
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	class UCosmeticItemAnimationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_COLO[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class USkeletalMeshComponent*, struct FCosmeticItems> CosmeticItems;                                           // 0x00D0(0x0050) ZeroConstructor
		class UCosmeticItemAnimationDataAsset*                     DataAsset;                                               // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_23FH[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SpawnCosmeticItem(class USkeletalMeshComponent* MeshComponent, class UClass* ObjectToSpawn, EWieldAnimationLocation SpawnLocation, class UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden);
		void DestroyAllCosmeticItems();
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationDataAsset
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCosmeticItemAnimationDataAsset : public UDataAsset
	{
	public:
		class FName                                                WieldSockets[0x7];                                       // 0x0028(0x0038) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationDataConsumerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticItemAnimationDataConsumerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationInstance
	 * Size -> 0x00B0 (FullSize[0x04F0] - InheritedSize[0x0440])
	 */
	class UCosmeticItemAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GL0L[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItemAnimationSetDataAsset*                  AnimationDataSet;                                        // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ActiveMontage;                                           // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7H4C[0x98];                                  // 0x0458(0x0098) MISSED OFFSET (PADDING)

	public:
		void UnregisterEvents();
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CosmeticItemAnimationSetDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UCosmeticItemAnimationSetDataAsset : public UDataAsset
	{
	public:
		struct FCosmeticItemAnimationSetLoopData                   LoopData;                                                // 0x0028(0x0020) Edit, DisableEditOnInstance
		TArray<class UAnimSequenceBase*>                           OneShotSequences;                                        // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomAnimationHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomAnimationInstanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationInstanceProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomAnimationInstanceProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationMontageInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomAnimationMontageInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationMontageComponent
	 * Size -> 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
	 */
	class UCustomAnimationMontageComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8D0B[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomAnimationMontageComponentReplicatedData      ReplicatedData;                                          // 0x00D0(0x000C) Net, RepNotify
		unsigned char                                              UnknownData_8SGH[0x5C];                                  // 0x00DC(0x005C) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedData(const struct FCustomAnimationMontageComponentReplicatedData& PriorData);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationMontageDefinitionDataAsset
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UCustomAnimationMontageDefinitionDataAsset : public UDataAsset
	{
	public:
		class FName                                                MontageId;                                               // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECustomAnimationMontageType                                MontageType;                                             // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CU6Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MontageData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCustomAnimationMontageStagedLoopingData            LoopingData;                                             // 0x0040(0x0028) Edit, DisableEditOnInstance
		bool                                                       Interrupts;                                              // 0x0068(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_192N[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationMontageDefinitionListingDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomAnimationMontageDefinitionListingDataAsset : public UDataAsset
	{
	public:
		TArray<struct FCustomAnimationMontageDefinitionEntry>      Entries;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.CustomAnimationMontageIdListingDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomAnimationMontageIdListingDataAsset : public UDataAsset
	{
	public:
		TArray<class FName>                                        MontageIds;                                              // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.DockingAnimationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDockingAnimationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.EmotePropDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmotePropDataInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.IndexedPlayableMontagesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIndexedPlayableMontagesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.LimbIKFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULimbIKFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetTranslationStrength(struct FLimbIK* LimbIK, float InRotationStrength);
		void STATIC_SetTransform(struct FLimbIK* LimbIK, const struct FTransform& InTransform);
		void STATIC_SetRotationStrength(struct FLimbIK* LimbIK, float InRotationStrength);
		void STATIC_SetParentBone(struct FLimbIK* LimbIK, const class FName& Bone);
		void STATIC_SetIKSpace(struct FLimbIK* LimbIK, ELimbIKSpace IKSpace);
		void STATIC_SetEnabled(struct FLimbIK* LimbIK, bool Enabled, ELimbIKSpace IKSpace, const class FName& ParentBone);
		void STATIC_SetBlendOutSpeed(struct FLimbIK* LimbIK, float BlendOutSpeed);
		void STATIC_SetBlendInSpeed(struct FLimbIK* LimbIK, float BlendInSpeed);
		void STATIC_SetAnimationOverride(struct FLimbIK* LimbIK, bool AnimationOverride);
		void STATIC_SetAlphaTarget(struct FLimbIK* LimbIK, float AlphaTarget);
		bool STATIC_IsEnabled(struct FLimbIK* LimbIK);
		float STATIC_GetTranslationStrength(struct FLimbIK* LimbIK);
		struct FTransform STATIC_GetTransform(struct FLimbIK* LimbIK);
		float STATIC_GetRotationStrength(struct FLimbIK* LimbIK);
		class FName STATIC_GetParentBone(struct FLimbIK* LimbIK);
		ELimbIKSpace STATIC_GetIKSpace(struct FLimbIK* LimbIK);
		float STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK);
		bool STATIC_GetAnimationOverride(struct FLimbIK* LimbIK);
		float STATIC_GetAlphaTarget(struct FLimbIK* LimbIK);
		float STATIC_ConvertBoolToAlpha(bool InBool);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.LoadableAnimationsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULoadableAnimationsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.LocomotionFunctionLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
		struct FActorVelocityData STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone);
		float STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float* CurrentCharacterYaw, float DeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.NetworkSyncedAnimationInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetworkSyncedAnimationInstanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.NetworkSyncedAnimationComponent
	 * Size -> 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
	 */
	class UNetworkSyncedAnimationComponent : public UActorComponent
	{
	public:
		float                                                      PlayRateAdjustMaxTimeDelta;                              // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRateAdjustMaxPercentageToSpeedUpPlayRate;            // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRateAdjustMaxPercentageToSlowDownPlayRate;           // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReplicatedAnimationProgression;                          // 0x00D4(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReplicatedPlayingAnimationIndex;                         // 0x00D8(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		float                                                      ReplicatedPlayRate;                                      // 0x00DC(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BW5M[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       AnimInstance;                                            // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W3Q3[0x20];                                  // 0x00F0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRep_PlayingAnimationIndex();
		void OnRep_AnimationProgression();
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.RemoteAnimPlayableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemoteAnimPlayableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.ServerAnimationDataStoreInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServerAnimationDataStoreInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.SyncGroupAnimMetaData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USyncGroupAnimMetaData : public UAnimMetaData
	{
	public:
		class FName                                                SyncGroup;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.TransformBlendCurveComponent
	 * Size -> 0x0508 (FullSize[0x05D0] - InheritedSize[0x00C8])
	 */
	class UTransformBlendCurveComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EZKT[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransformBlendCurve                                Curve;                                                   // 0x00D0(0x0500) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.TurningFunctionLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurningFunctionLib : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, bool* DeadZone, float TurnRate, float* DelayedCounter, float CounterMax, bool* TurningLeft);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.WaitForAnimationStateEntryProxy
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UWaitForAnimationStateEntryProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnReachedState;                                          // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_H31E[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnEnteredState(const class FName& path);
		void OnAnimationUpdated();
		class UWaitForAnimationStateEntryProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const class FName& TargetPath);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.WaitForAnimationStateExitProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWaitForAnimationStateExitProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnStateExit;                                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_YZWX[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnExitState(const class FName& path);
		void OnAnimationUpdated();
		class UWaitForAnimationStateExitProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const class FName& TargetPath);
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.WeightedAnimationLoadOnDemandDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWeightedAnimationLoadOnDemandDataAsset : public UDataAsset
	{
	public:
		TArray<struct FWeightedAnimationData>                      WeightedAnimationList;                                   // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UAnimSequence*                                       FallBackAnimation;                                       // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.WeightedAnimSequenceLoadOnDemand
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UWeightedAnimSequenceLoadOnDemand : public UObject
	{
	public:
		class UAnimSequence*                                       FallBackAnimation;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWeightedAnimationData>                      WeightedAnimationList;                                   // 0x0030(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_L6IE[0xE0];                                  // 0x0040(0x00E0) MISSED OFFSET (PADDING)

	public:
		void Initialise(class UWeightedAnimationLoadOnDemandDataAsset* InAnimationData);
		class UWeightedAnimSequenceLoadOnDemand* STATIC_CreateNewWeightedAnimSequenceLoadOnDemand();
		static UClass* StaticClass();
	};

	/**
	 * Class Animation.DockableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDockableInterface : public UInterface
	{
	public:
		void HandleDestroy();
		struct FDockableInfo GetDockableInfo();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
