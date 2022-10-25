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
	 * Class Reviving.ReviveSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UReviveSettings : public UDeveloperSettings
	{
	public:
		float                                                      HealthRegained;                                          // 0x0038(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumReviveDistance;                                   // 0x003C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FadeColour;                                              // 0x0040(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldFadeAudio;                                         // 0x0050(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J76X[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ServerWaitTimeBeforeFullyReviving;                       // 0x0054(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveTime;                                              // 0x0058(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveTimeOnEnemyShip;                                   // 0x005C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRevertEvaporateDuration;                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CF9M[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPlayMode>                                          UnsupportedPlayModes;                                    // 0x0068(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<struct FModeSpecificReviveSettings>                 ModeSpecificSettings;                                    // 0x0078(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		float                                                      GiveUpHoldTime;                                          // 0x0088(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GiveUpFadeDuration;                                      // 0x008C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GiveUpEvaporateDuration;                                 // 0x0090(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQJU[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.DeathSelfInteractionComponent
	 * Size -> 0x0060 (FullSize[0x0188] - InheritedSize[0x0128])
	 */
	class UDeathSelfInteractionComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_UGX6[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HasGivenUp;                                              // 0x0130(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_AFPE[0x57];                                  // 0x0131(0x0057) MISSED OFFSET (PADDING)

	public:
		void SetGiveUpAvaliable();
		void OnRep_HasGivenUp();
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.PostReviveLocomotionActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPostReviveLocomotionActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.RevivableStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URevivableStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveableActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReviveableActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveableCharacterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReviveableCharacterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveableRepresentationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReviveableRepresentationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveAudioComponent
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UReviveAudioComponent : public UWwiseEmitterComponent
	{
	public:
		class UReviveEffectsDataAsset*                             ReviveEffectsDataAsset;                                  // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7Q9M[0x18];                                  // 0x0318(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReviveInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveComponent
	 * Size -> 0x0148 (FullSize[0x0270] - InheritedSize[0x0128])
	 */
	class UReviveComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_HUBB[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          OwningCharacter;                                         // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ReviveableRepresentationActor;                           // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EReviveState                                               ReviveState;                                             // 0x0148(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EInteractableState                                         InteractionState;                                        // 0x0149(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FC1N[0x6];                                   // 0x014A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReviveableRepresentationClass;                           // 0x0150(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_6GC2[0x12];                                  // 0x0158(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ReviveWindowIsOpen;                                      // 0x016A(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C8XQ[0xD5];                                  // 0x016B(0x00D5) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatus                                             RevivableStatus;                                         // 0x0240(0x0018) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_KFNC[0x18];                                  // 0x0258(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReviveState(EReviveState PreviousReviveState);
		void HandleOwningCharacterEndPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UReviveConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.RevivedActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URevivedActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveDebugComponent
	 * Size -> 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
	 */
	class UReviveDebugComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EF7I[0x98];                                  // 0x00C8(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveEffectsDataAsset
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UReviveEffectsDataAsset : public UDataAsset
	{
	public:
		class UMaterialParameterCollection*                        ReviveMaterialParameterCollection;                       // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AstralCordReviveInProgressMaterialCollectionScalarParameterName; // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AstralCordFadeMaterialCollectionScalarParameterName;     // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AstralCordBorderMaterialCollectionScalarParameterName;   // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         AstralCordBorderParamValueByAbsoluteTimeSinceDeath;      // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           ReviveePostProcessMaterial;                              // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GhostShaderGhostEffectInterpolationValue;                // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveSuccessfulEffectDuration;                          // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ReviveSuccessfulOneShotVFX;                              // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ReviveSuccessfulOneShotVFX_Revivee;                      // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ReviveInProgressLoopingVFX;                              // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AstralCordReviveInProgressInterpolationSpeed;            // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AstralCordReviveNotInProgressInterpolationSpeed;         // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ContinuousBodyLoopingVFX;                                // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AstralCordFadeInInterpolationSpeed;                      // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AstralCordFadeOutInterpolationSpeed;                     // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultAstralCordHeight;                                 // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AstralCordHeightOffsetFromTheGhost;                      // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             DeadPlayerBodyEvaporatesOneShotVFX;                      // 0x0098(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         OtherPlayers_ReviveGhostAmbientStart;                    // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         OtherPlayers_ReviveGhostAmbientStop;                     // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         DeadPlayer_ReviveInProgressStart;                        // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         DeadPlayer_ReviveInProgressStop;                         // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         OtherPlayers_ReviveInProgressStart;                      // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         OtherPlayers_ReviveInProgressStop;                       // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.ReviveGhost
	 * Size -> 0x0260 (FullSize[0x0628] - InheritedSize[0x03C8])
	 */
	class AReviveGhost : public AActor
	{
	public:
		unsigned char                                              UnknownData_5DQE[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    CorpseMaterials;                                         // 0x03D8(0x0010) ZeroConstructor, Protected
		class USceneComponent*                                     Root;                                                    // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x03F0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AstralCordContainer;                                     // 0x03F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationDataStoreComponent*                        AnimationDataStoreComponent;                             // 0x0400(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcessComponent;                                    // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDitherComponent*                                    DitherComponent;                                         // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UReviveAudioComponent*                               AudioComponent;                                          // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJJ1[0x10];                                  // 0x0420(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENetRole                                                   RevivableOwnerNetRole;                                   // 0x0430(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EOH8[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGhostDataAsset*                                     ReviveGhostDataAsset;                                    // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UReviveEffectsDataAsset*                             ReviveEffectsDataAsset;                                  // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FReviveEffectsValues                                ReviveEffectsValues;                                     // 0x0448(0x0020)
		struct FModeSpecificReviveSettings                         ReviveSettings;                                          // 0x0468(0x0038)
		unsigned char                                              UnknownData_F56A[0x13C];                                 // 0x04A0(0x013C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UParticleSystemComponent>             ContinuousOnTheBodyLoopingVFX;                           // 0x05DC(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class UParticleSystemComponent>             ReviveInProgressLoopingVFX;                              // 0x05E4(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_L2YG[0x1C];                                  // 0x05EC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    AstralCordDynamicMaterials;                              // 0x0608(0x0010) ZeroConstructor, Transient
		struct FGhostPlayModeParameters                            GhostPlayModeSpecificParameters;                         // 0x0618(0x000C) Transient
		unsigned char                                              UnknownData_ON40[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Reviving.RevivePlayerActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URevivePlayerActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
