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
	 * Enum Animation.ECharacterIKLimb
	 */
	enum class ECharacterIKLimb : uint8_t
	{
		None      = 0,
		LeftHand  = 1,
		RightHand = 2,
		LeftFoot  = 3,
		RightFoot = 4,
		MAX       = 5
	};

	/**
	 * Enum Animation.EAthenaAnimationSocketGroupCharacterSize
	 */
	enum class EAthenaAnimationSocketGroupCharacterSize : uint8_t
	{
		Default = 0,
		Large   = 1,
		Thin    = 2,
		MAX     = 3
	};

	/**
	 * Enum Animation.EAthenaAnimationSocketGroup
	 */
	enum class EAthenaAnimationSocketGroup : uint8_t
	{
		Male   = 0,
		Female = 1,
		MAX    = 2
	};

	/**
	 * Enum Animation.ELimbIKSpace
	 */
	enum class ELimbIKSpace : uint8_t
	{
		Local     = 0,
		World     = 1,
		Character = 2,
		MAX       = 3
	};

	/**
	 * Enum Animation.ECustomAnimationMontageType
	 */
	enum class ECustomAnimationMontageType : uint8_t
	{
		OneShot        = 0,
		LoopingOneShot = 1,
		LoopingStaged  = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Animation.CharacterAnimationIKUpdateParams
	 * Size -> 0x0040
	 */
	struct FCharacterAnimationIKUpdateParams
	{
	public:
		float                                                      CurrentAlpha;                                            // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TranslationStrength;                                     // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationStrength;                                        // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZEG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0020(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor
		EHIKEffectorSpace                                          EffectorSpace;                                           // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R9Z6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentBone;                                              // 0x0034(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZYEE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.LimbIK
	 * Size -> 0x0060
	 */
	struct FLimbIK
	{
	public:
		unsigned char                                              UnknownData_UT0B[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.AnimDataEntryStructWrapper
	 * Size -> 0x0018
	 */
	struct FAnimDataEntryStructWrapper
	{
	public:
		unsigned char                                              UnknownData_DOXZ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.AnimationDataStoreEntry
	 * Size -> 0x0018
	 */
	struct FAnimationDataStoreEntry
	{
	public:
		class UClass*                                              AnimDataId;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimationData*                                      AnimData;                                                // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationServerData*                                AnimServerData;                                          // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimationDataStoreLoadingEntry
	 * Size -> 0x0040
	 */
	struct FAnimationDataStoreLoadingEntry
	{
	public:
		unsigned char                                              UnknownData_6V7P[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AnimDataId;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimationDataStoreAssetEntry
	 * Size -> 0x0018
	 */
	struct FAnimationDataStoreAssetEntry
	{
	public:
		class UClass*                                              AnimDataId;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              AnimDataTypeCooked;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimationServerData*                                AnimServerData;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimationDataStoreAssetWeakReferenceEntry
	 * Size -> 0x0028
	 */
	struct FAnimationDataStoreAssetWeakReferenceEntry
	{
	public:
		class UClass*                                              AnimDataId;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    AnimData;                                                // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_MRGZ[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Animation.CurveUpdateValues
	 * Size -> 0x000C
	 */
	struct FCurveUpdateValues
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalValue;                                              // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.CosmeticItems
	 * Size -> 0x0010
	 */
	struct FCosmeticItems
	{
	public:
		TArray<class AActor*>                                      CosmeticItemArray;                                       // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Animation.CosmeticItemAnimationSetLoopData
	 * Size -> 0x0020
	 */
	struct FCosmeticItemAnimationSetLoopData
	{
	public:
		class UAnimSequenceBase*                                   Into;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Loop;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IntoSyncGroup;                                           // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LoopSyncGroup;                                           // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.CustomAnimationMontageId
	 * Size -> 0x0008
	 */
	struct FCustomAnimationMontageId
	{
	public:
		class FName                                                CustomAnimationMontageId;                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.CustomAnimationMontageComponentReplicatedData
	 * Size -> 0x000C
	 */
	struct FCustomAnimationMontageComponentReplicatedData
	{
	public:
		struct FCustomAnimationMontageId                           CustomMontageId;                                         // 0x0000(0x0008)
		int32_t                                                    AnimationCallId;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.CustomAnimationMontageStagedLoopingData
	 * Size -> 0x0028
	 */
	struct FCustomAnimationMontageStagedLoopingData
	{
	public:
		class UAnimMontage*                                        Into;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAnimMontage*>                                LoopAnims;                                               // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                OutOfAnims;                                              // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Animation.CustomAnimationMontageDefinitionEntry
	 * Size -> 0x0018
	 */
	struct FCustomAnimationMontageDefinitionEntry
	{
	public:
		class FName                                                MontageId;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Definition;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Animation.ActorVelocityData
	 * Size -> 0x0018
	 */
	struct FActorVelocityData
	{
	public:
		struct FVector                                             ActorsVelocityVector;                                    // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ActorSpeed;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCharacterMoving;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JMN9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WantedMovementSpeed;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.TransformBlendCurve
	 * Size -> 0x0500
	 */
	struct FTransformBlendCurve
	{
	public:
		bool                                                       UseLocationCurve;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_05DW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeVectorCurve                                 LocationCurve;                                           // 0x0008(0x0170) Edit
		bool                                                       UseRotationCurve;                                        // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OGR0[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeVectorCurve                                 RotationCurve;                                           // 0x0180(0x0170) Edit
		bool                                                       UseScaleCurve;                                           // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMWU[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeVectorCurve                                 ScaleCurve;                                              // 0x02F8(0x0170) Edit
		unsigned char                                              UnknownData_MDU0[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SourceTransform;                                         // 0x0470(0x0030) Edit, IsPlainOldData, NoDestructor
		struct FTransform                                          TargetTransform;                                         // 0x04A0(0x0030) Edit, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S0CD[0x30];                                  // 0x04D0(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.WeightedAnimationData
	 * Size -> 0x0018
	 */
	struct FWeightedAnimationData
	{
	public:
		struct FStringAssetReference                               Animation;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      Weighting;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AAF9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.DockableInfo
	 * Size -> 0x0018
	 */
	struct FDockableInfo
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SceneComponent;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDockableSocketOverlapUpdates                              ShouldOverlapsUpdateOnParentUpdate;                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DMAP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.HitReactionAnimationData
	 * Size -> 0x0008
	 */
	struct FHitReactionAnimationData
	{
	public:
		class UBlendSpace1D*                                       HitReactBlendSpace;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.EventCosmeticItemAttachmentSwitched
	 * Size -> 0x0008
	 */
	struct FEventCosmeticItemAttachmentSwitched
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.EventCosmeticItemSpawnedOwnerNotification
	 * Size -> 0x0008
	 */
	struct FEventCosmeticItemSpawnedOwnerNotification
	{
	public:
		class AActor*                                              CosmeticItemActor;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.EventCosmeticItemSpawned
	 * Size -> 0x0010
	 */
	struct FEventCosmeticItemSpawned
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticItemAnimationSetDataAsset*                  CosmeticData;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.EventAnimationResetHappyReact
	 * Size -> 0x0001
	 */
	struct FEventAnimationResetHappyReact
	{
	public:
		unsigned char                                              UnknownData_S8EW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventAnimationHappyReact
	 * Size -> 0x0001
	 */
	struct FEventAnimationHappyReact
	{
	public:
		unsigned char                                              UnknownData_32QA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventHitReactAnimationFinished
	 * Size -> 0x0001
	 */
	struct FEventHitReactAnimationFinished
	{
	public:
		unsigned char                                              UnknownData_A7EE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventHitReactAnimationRequested
	 * Size -> 0x001C
	 */
	struct FEventHitReactAnimationRequested
	{
	public:
		struct FVector                                             HitNormal;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HitVelocity;                                             // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		ECharacterHitReactionAnimType                              ReactionAnimType;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BBSR[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.HitReactionAnimationState
	 * Size -> 0x0028
	 */
	struct FHitReactionAnimationState
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditiveBlend;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterHitReactionAnimType                              ReactType;                                               // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActivateNewHitReact;                                     // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AU9B[0x1E];                                  // 0x000A(0x001E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.AnimationLookAtParams
	 * Size -> 0x000C
	 */
	struct FAnimationLookAtParams
	{
	public:
		float                                                      ActivationSpeed;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalLimit;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VerticalLimit;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimationLookAt
	 * Size -> 0x0098
	 */
	struct FAnimationLookAt
	{
	public:
		unsigned char                                              UnknownData_0VHY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationLookAtParams                              Params;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly
		struct FVector                                             LookAtTarget;                                            // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IKLookAtActive;                                          // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQDU[0x77];                                  // 0x0021(0x0077) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventAnimationLookAtUpdated
	 * Size -> 0x0001
	 */
	struct FEventAnimationLookAtUpdated
	{
	public:
		unsigned char                                              UnknownData_8W6R[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.IKLookAtParams
	 * Size -> 0x000C
	 */
	struct FIKLookAtParams
	{
	public:
		float                                                      ActivationSpeed;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalLimit;                                         // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VerticalLimit;                                           // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimNode_WeightedLoadOnDemandSquencePlayer
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      PlayRate;                                                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MVXN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeightedAnimSequenceLoadOnDemand*                   WeightedAnimSequenceLoadOnDemand;                        // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupIndex;                                              // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             GroupRole;                                               // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O31K[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CurrentSequence;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       NextSequence;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZXWA[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventCustomAnimationMontageExitRequested
	 * Size -> 0x000C
	 */
	struct FEventCustomAnimationMontageExitRequested
	{
	public:
		unsigned char                                              UnknownData_A65D[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventCustomAnimationMontageRequested
	 * Size -> 0x0008
	 */
	struct FEventCustomAnimationMontageRequested
	{
	public:
		unsigned char                                              UnknownData_KFLS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.CustomAnimationMontageStateMachine
	 * Size -> 0x00D8
	 */
	struct FCustomAnimationMontageStateMachine
	{
	public:
		class UCustomAnimationMontageDefinitionDataAsset*          ActiveState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomAnimationMontageDefinitionDataAsset*          PendingState;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ActiveMontage;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7GZM[0xC0];                                  // 0x0018(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Animation.EventPreviewCharacterAnimationRequest
	 * Size -> 0x0008
	 */
	struct FEventPreviewCharacterAnimationRequest
	{
	public:
		class UAnimationAsset*                                     AnimationToPlay;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.AnimationStateCompleteEvent
	 * Size -> 0x0008
	 */
	struct FAnimationStateCompleteEvent
	{
	public:
		class UClass*                                              CompletedStateId;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.WeightedAnimationTimeout
	 * Size -> 0x0014
	 */
	struct FWeightedAnimationTimeout
	{
	public:
		struct FFloatRange                                         TimeoutRange;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Weighting;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Animation.WeightedAnimationTimeoutSelector
	 * Size -> 0x0010
	 */
	struct FWeightedAnimationTimeoutSelector
	{
	public:
		TArray<struct FWeightedAnimationTimeout>                   Weightings;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Animation.Docker
	 * Size -> 0x0050
	 */
	struct FDocker
	{
	public:
		unsigned char                                              UnknownData_Q7EY[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
