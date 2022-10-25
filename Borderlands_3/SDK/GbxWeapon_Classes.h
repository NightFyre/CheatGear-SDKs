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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxWeapon.Weapon
	 * Size -> 0x0480 (FullSize[0x08D8] - InheritedSize[0x0458])
	 */
	class AWeapon : public AActor
	{
	public:
		unsigned char                                              UnknownData_7VT0[0x18];                                  // 0x0458(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponFireComponent*                                CurrentFireComponent;                                    // 0x0470(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponTypeAsset*                                    WeaponDisplayData;                                       // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponTypeData*                                     WeaponType;                                              // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  SwitchModeTimeScale;                                     // 0x0488(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchModeTime;                                          // 0x0494(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchModeCompletePercent;                               // 0x0498(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QQD[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WeaponUser[0x10];                                        // 0x04A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxWeapon.Weapon.WeaponUser
		class FScriptMulticastDelegate                             BegunPlay;                                               // 0x04B0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyGivenTo;                                           // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyAttached;                                          // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyDetached;                                          // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyEquipped;                                          // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyPutDown;                                           // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifySwitchedMode;                                      // 0x0510(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyFirstPersonCreated;                                // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyUseInput;                                          // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyReloadStarted;                                     // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyReloadEnded;                                       // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyTargetLockChanged;                                 // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyHidden;                                            // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      PostSprintDelayUseTime;                                  // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelFOV;                                            // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldZoomedForegroundNearRegion;                  // 0x0588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J47W[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDamageScaleConditionalData>                 DamageScaleConditionals;                                 // 0x0590(0x0010) Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxObjectReplicatorProxy                           ReplicationProxy;                                        // 0x05A0(0x0068) Net, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNWK[0x8];                                   // 0x0608(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAttachState                                  PendingAttachState;                                      // 0x0610(0x0018) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAttachState                                  AttachState;                                             // 0x0628(0x0018) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  EquipTime;                                               // 0x0640(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SZBR[0x18];                                  // 0x064C(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  PutDownTime;                                             // 0x0664(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_28J7[0xA];                                   // 0x0670(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PendingUseModeIndex;                                     // 0x067A(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0ZAE[0x15];                                  // 0x067B(0x0015) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurrentUseModeIndex;                                     // 0x0690(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CurrentSlotIndex;                                        // 0x0691(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              NextSlotIndex;                                           // 0x0692(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A9NV[0x5];                                   // 0x0693(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponUseModeState>                         UseModeState;                                            // 0x0698(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QN6L[0x28];                                  // 0x06A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAimAssistParameters*                                AimAssetParameters;                                      // 0x06D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTargetLocked;                                         // 0x06D8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P3YF[0x3];                                   // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AttributeResolverUseModeBitmask;                         // 0x06DC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTFM[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bForceUnzoomWhenSwitchingModes;                          // 0x06F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X04C[0xF];                                   // 0x06F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachmentSlot*>                       AttachmentSlots3P;                                       // 0x0700(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UWeaponAttachmentSlot*>                       AttachmentSlots1P;                                       // 0x0710(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bWeaponAttached;                                         // 0x0720(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PU6W[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponRegisterMaterialEffectData>           RegisteredMaterialEffects;                               // 0x0728(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GDJJ[0x58];                                  // 0x0738(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponRegisterSkeletalControlData>          RegisteredSkeletalControls;                              // 0x0790(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q0LL[0x8];                                   // 0x07A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponTriggerFeedbackAsset*                         CachedFireTriggerFeedback;                               // 0x07A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWeaponTriggerFeedbackAsset*                         CachedZoomTriggerFeedback;                               // 0x07B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowCrosshair;                                          // 0x07B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlwaysTickAttachedMeshes;                               // 0x07B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3C09[0x6];                                   // 0x07BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BodyWeaponHoldName;                                      // 0x07C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        AnimSetGenericNames;                                     // 0x07C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYV1[0x8];                                   // 0x07D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageModifierCompClass;                                 // 0x07E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XNPR[0x10];                                  // 0x07E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentState;                                            // 0x07F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V798[0x98];                                  // 0x0800(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponRegisterAttachmentEffectData>         UnregisteredFirstPersonOnlyAttachmentEffects;            // 0x0898(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UTexture2D*>                                  UseModeIcons;                                            // 0x08A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      UseModeIconFrameNames;                                   // 0x08B8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class FName                                                MainHandGripSocketName;                                  // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OffHandGripSocketName;                                   // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Unlock(bool bReplicate);
		void TryAutoReload();
		void ToggleMode(unsigned char InputChannel);
		void SwitchPendingUseMode();
		void SwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced);
		void StopZooming(bool bSkipTransitions, bool bClearInput);
		void StopWeaponAction(EWeaponActionType WeaponAction);
		void StopUsing(unsigned char InputChannel, bool bForced);
		void StopReloading();
		void StopModeSwitch();
		void StopEffects(EWeaponEffectType EffectType, unsigned char UseModeIndex);
		void StopDynamicMaterialEffect(int32_t EffectID);
		void StopAnimation(class UAnimMontage* Anim, bool bFirstPerson);
		void StartZooming();
		void StartUsing(unsigned char InputChannel);
		void StartReloading(bool bAuto);
		void SetTargetLocked(bool bIsLocked);
		void SetPreUseState(unsigned char UseModeIndex, bool bEnabled);
		void SetMaterialVectorParameterValue(const class FName& ParamName, const struct FLinearColor& ParamValue);
		void SetMaterialScalarParameterValue(const class FName& ParamName, float ParamValue);
		void SetEffectVectorParameter(const class FName& ParamName, const struct FVector& ParamValue, const struct FWeaponEffectQueryData& QueryData);
		void SetEffectMaterialParameter(const class FName& ParamName, class UMaterialInterface* ParamValue, const struct FWeaponEffectQueryData& QueryData);
		void SetEffectFloatParameter(const class FName& ParamName, float ParamValue, const struct FWeaponEffectQueryData& QueryData);
		void SetEffectEmitterState(const class FName& EmitterName, bool bEnabled, const struct FWeaponEffectQueryData& QueryData);
		void SetEffectColorParameter(const class FName& ParamName, const struct FLinearColor& ParamValue, const struct FWeaponEffectQueryData& QueryData);
		void SetBoneVisibility(const class FName& BoneName, bool bVisible, EWeaponAttachmentVisibilityType AttachmentType);
		void ServerUnlock();
		void ServerSwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced);
		void ServerStopUsing(unsigned char InputChannel, bool bForced);
		void ServerStopModeSwitch(unsigned char InputChannel, unsigned char ClientUseModeIndex);
		void ServerStartUsing(unsigned char InputChannel, unsigned char ClientPatternSeed);
		void ServerStartReloading(unsigned char UseModeIndex, bool bAuto);
		void ServerSetZoomState(unsigned char UseModeIndex, const struct FWeaponZoomState& NewState, float ZoomStartOffset);
		void ServerSetPatternSeed(unsigned char ClientPatternSeed);
		void ServerRestartAutoUse();
		void ServerLock(float Duration);
		void ServerInterruptReloadToUse(int32_t ClientLoadedAmmo);
		void ServerEquipInterruptible();
		void RegisterTrinketAttachment(const struct FWeaponRegisterTrinketAttachmentData& Data);
		void RegisterSkeletalControl(const struct FWeaponRegisterSkeletalControlData& Data);
		void RegisterSimpleEffect(EWeaponEffectType EffectType, class UParticleSystem* Effect, const class FName& EffectSocket);
		void RegisterMaterialEffect(const struct FWeaponRegisterMaterialEffectData& Data);
		void RegisterEffect(const struct FWeaponRegisterAttachmentEffectData& Data);
		void ReevaluateConditionalEffects();
		void PrevZoomLevel();
		void PlayEffects(EWeaponEffectType EffectType, unsigned char UseModeIndex, int32_t EffectID);
		int32_t PlayDynamicMaterialEffect(const struct FWeaponMaterialEffectData& Data);
		float PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration);
		void OnZoomedOut();
		void OnUseStarted();
		void OnUseFinished();
		void OnUpdateSkeletalControlsWhenUseFinishes();
		void OnUpdateSkeletalControlsWhenUsed();
		void OnUpdateSkeletalControlsWhenAmmoChanges();
		void OnRep_TargetLockedChanged();
		void OnRep_PendingUseModeIndex();
		void OnRep_PendingAttachState();
		void OnRep_CurrentUseModeIndex(unsigned char PreviousUseModeIndex);
		void OnReloadEnded(bool bCompleted);
		void OnAmmoGivenToEmptyWeapon();
		void NotifySkeletalControl(EWeaponEffectType ControlType, const class FName& ControlName, EWeaponSkeletalControlEvent Event, float EventValue);
		void NextZoomLevel();
		void Lock(float Duration, bool bReplicate);
		void K2_StopWeaponActionObj(class UGbxAction* WeaponAction);
		class UGbxAction* K2_PlayWeaponActionEx(EWeaponActionType WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy);
		class UGbxAction* K2_PlayWeaponAction(EWeaponActionType WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy);
		bool IsZoomedIn(bool bIncludeTransitions);
		bool IsZoomed();
		bool IsUsing();
		bool IsTargetLocked();
		bool IsSwitchingModes();
		bool IsReloading();
		bool IsPuttingDown();
		bool IsPendingUse(unsigned char InputChannel);
		bool IsLocked();
		bool IsLocalAuthority();
		bool IsInactive();
		bool IsEquipping();
		bool IsAuthorityUsing();
		bool IsAuthoritySwitchingModes();
		bool IsAuthorityReloading();
		bool IsAuthorityPuttingDown();
		bool IsAuthorityEquipping();
		bool IsActive();
		void GivenTo(class APawn* NewOwner);
		float GetZoomFOVScale();
		float GetZoomEffect();
		float GetZoomDuration();
		class UActorComponent* GetUseModeComponentByClass(class UClass* ComponentClass, unsigned char UseModeIndex);
		float GetMuteADSAlpha();
		float GetMaxZoomFOVScale();
		unsigned char GetLastInputChannel();
		unsigned char GetCurrentReloadPartType();
		class UMeshComponent* GetAttachmentMesh(bool bFirstPerson, unsigned char SlotIndex);
		class UActorComponent* GetAssociatedUseModeComponentByClass(class UClass* ComponentClass, class UActorComponent* ReferenceComponent);
		class UAimAssistParameters* GetAimAssistParameters();
		void EquipInterruptible();
		void Dropped();
		void CycleZoomLevel();
		void ClientUnlock();
		void ClientStopReloading();
		void ClientLock(float Duration);
		unsigned char AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*> OtherComponents, int32_t InputChannels);
		void Activate(class APawn* WeaponOwner, unsigned char InSlot, EWeaponEquipType InEquipType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponPreUseComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UWeaponPreUseComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             NotifyPreUseFinished;                                    // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N9U8[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void K2_OnDeactivated();
		void K2_OnActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponUseComponent
	 * Size -> 0x00A0 (FullSize[0x0218] - InheritedSize[0x0178])
	 */
	class UWeaponUseComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YV51[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UseMode;                                                 // 0x0180(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoSwitchModeWhenOutOfAmmo : 1;                        // 0x0181(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bClearUseInputWhenSwitchingModes : 1;                    // 0x0181(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bActivateModeWhenZoomed : 1;                             // 0x0181(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseAnimationSwitchModeTime : 1;                         // 0x0181(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJ63[0x6];                                   // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCrosshairDataAsset*                              CrosshairData;                                           // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCrosshairDataAsset*                              ZoomedCrosshairData;                                     // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x01A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAttributeEffectData>                        InstigatorAttributeEffects;                              // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyUseStarted;                                        // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyUseFinished;                                       // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyUsed;                                              // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FGbxAttributeModifierHandle>                 InstigatorAttributeModifiers;                            // 0x01F0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UWeaponPreUseComponent*                              PreUseComponent;                                         // 0x0200(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SQKA[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x0210(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool ToggleMode();
		void SwitchToZoomedMode(unsigned char ZoomLevel);
		void SwitchFromZoomedMode(unsigned char ZoomLevel);
		void OnPreUseFinished(bool bInterrupted);
		void K2_OnDeactivated();
		void K2_OnActivated();
		bool CanActivateMode();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponFireComponent
	 * Size -> 0x06E8 (FullSize[0x0900] - InheritedSize[0x0218])
	 */
	class UWeaponFireComponent : public UWeaponUseComponent
	{
	public:
		struct FGbxAttributeFloat                                  FireRate;                                                // 0x0218(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeInteger                                AutomaticBurstCount;                                     // 0x0224(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  BurstFireDelay;                                          // 0x0230(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoBurst;                                              // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8J6[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FireSocket;                                              // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        FireSockets;                                             // 0x0248(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       FullFireSocketCycle;                                     // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0259(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5E8[0x2];                                   // 0x025A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFireRateScale;                                        // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  FireRateAccelDuration;                                   // 0x0260(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  FireRateDecelDuration;                                   // 0x026C(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFireRatePercentToFire;                                // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LII4[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FireRateCurve;                                           // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseShotStrengthFormula;                                 // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK6Z[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ShotStrengthFormula;                                     // 0x0290(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    FireSequenceLength;                                      // 0x02C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ResetFireSequenceTime;                                   // 0x02CC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResetFireSequenceCompletePercent;                        // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdvanceFireSequenceAtEndOfBurst;                        // 0x02DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTotalShotCostRequiredToFire;                            // 0x02DD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTG4[0x2];                                   // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeInteger                                ShotAmmoCost;                                            // 0x02E0(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinShotAmmoCost;                                         // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  Spread;                                                  // 0x02F0(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  AccuracyImpulse;                                         // 0x02FC(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  BurstAccuracyImpulseScale;                               // 0x0308(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelShotOffsetScale;                                // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  Damage;                                                  // 0x0318(0x000C) BlueprintVisible, BlueprintReadOnly, Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED49[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageFormula;                                           // 0x0328(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ShotStrengthDamageCurve;                                 // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  DamageRadius;                                            // 0x0368(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2T8[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageRadiusFormula;                                     // 0x0378(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ShotStrengthDamageRadiusCurve;                           // 0x03B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ImpactForce;                                             // 0x03B8(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7B6[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForceSelection                                     ImpactForceSelection;                                    // 0x03C8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ShotStrengthImpactForceCurve;                            // 0x03E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MuzzleFXSequenceLength;                                  // 0x0408(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundPerceptionProperties                          FireSoundPerception;                                     // 0x040C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UFeedbackData*                                       FireFeedback;                                            // 0x0418(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayFeedbackAtLocation : 1;                             // 0x0420(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleFeedbackWithFireRate : 1;                          // 0x0420(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8MV[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       ScaledFeedback;                                          // 0x0428(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  FeedbackFireRateScalar;                                  // 0x0430(0x0078) Edit, NativeAccessSpecifierPublic
		class FName                                                FeedbackSocket;                                          // 0x04A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncAnimationToFireRate;                                // 0x04B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFB4[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireAnimationBlendSpace;                                 // 0x04B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponEffectType                                          SkeletalControlType;                                     // 0x04B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAHN[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SkeletalControlName;                                     // 0x04C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkeletalControlFireInput;                                // 0x04C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOntoBestTarget;                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHLY[0x3];                                   // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayInitializeAttribute;                                // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPET[0xD];                                   // 0x04D4(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_5TVZ : 1;                                    // 0x04E1(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bFireRateAccelActive : 1;                                // 0x04E1(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SWM5[0x2];                                   // 0x04E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWeaponFireRateState                                       FireRateState;                                           // 0x04E4(0x0001) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I6EL[0x3];                                   // 0x04E5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    CurrentBurstShotCount;                                   // 0x04E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CurrentFireSequenceIndex;                                // 0x04EC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_00JR[0x10];                                  // 0x04ED(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClientFireSequenceState;                                 // 0x04FD(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BRLK[0x22];                                  // 0x04FE(0x0022) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireRatePercent;                                         // 0x0520(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DY5J[0x14];                                  // 0x0524(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FlashSlot;                                               // 0x0538(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              FlashCount;                                              // 0x0539(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G7Q8[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 ImpactLocation;                                          // 0x0540(0x000C) Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageAmount;                                            // 0x054C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxParam                                           AIBurstCount;                                            // 0x0550(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIBurstFireDelay;                                        // 0x05D0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIFireInterval;                                          // 0x0650(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIAccuracy;                                              // 0x06D0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIProjectileSpeedScale;                                  // 0x0750(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FNumericRange                                       AIDesiredRange;                                          // 0x07D0(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIMinDesiredRange;                                       // 0x07D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           AIMaxDesiredRange;                                       // 0x0858(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxForceFeedbackEffect                             ScaledEffect;                                            // 0x08D8(0x0018) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DBD[0x10];                                  // 0x08F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void ServerResetFireSequence();
		void OnStopFireRateDeceleration();
		void OnStopFireRateAcceleration();
		void OnStartFireRateDeceleration();
		void OnStartFireRateAcceleration();
		void OnRep_ImpactLocation();
		void OnRep_FlashCount();
		void OnRep_FireRateAccelChanged();
		void OnRep_ClientFireSequenceState();
		void OnReloadAmmoGiven();
		void OnLoopingFireActionEnd(EGbxActionEndState EndState);
		void OnGivenTo();
		bool IsFireRateAccelEnabled();
		class AActor* GetLockedTarget();
		float GetFireRatePercent();
		void ClientStopResetFireSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponFireProjectileComponent
	 * Size -> 0x0058 (FullSize[0x0958] - InheritedSize[0x0900])
	 */
	class UWeaponFireProjectileComponent : public UWeaponFireComponent
	{
	public:
		struct FGbxAttributeInteger                                ProjectilesPerShot;                                      // 0x0900(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ProjectileSpeedScale;                                    // 0x090C(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ShotStrengthProjectileSpeedCurve;                        // 0x0918(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileTemplate;                                      // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAttributeBaseValueData>                     ProjectileBaseValues;                                    // 0x0928(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              LightProjectileData;                                     // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFiringPattern*                                      FiringPatternData;                                       // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAU7[0xC];                                   // 0x094C(0x000C) MISSED OFFSET (PADDING)

	public:
		class UClass* GetShotProjectileData();
		class UClass* GetShotLightProjectileData();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.Projectile
	 * Size -> 0x0228 (FullSize[0x0680] - InheritedSize[0x0458])
	 */
	class AProjectile : public AActor
	{
	public:
		unsigned char                                              UnknownData_WBVN[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIgnoreCollisionWithInstigator : 1;                      // 0x0468(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCollisionWithInstigatorTeam : 1;                  // 0x0468(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopBlockingPawnsAfterCollidingWithOne : 1;             // 0x0468(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bServerControlsProjectileLifetime : 1;                   // 0x0468(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y88H[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageInfo                                         DamageInfo;                                              // 0x0470(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UImpactData*                                         DefaultImpact;                                           // 0x04C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultImpactEffectDelay;                                // 0x04D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponShotModifierType                                    SpawnModifierType;                                       // 0x04D4(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVLZ[0x13];                                  // 0x04D5(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnModifierValue;                                      // 0x04E8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00T2[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxProjectileMovementComponent*                     MovementComponent;                                       // 0x04F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KKEN[0x1];                                   // 0x0500(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClientExplodeAtLeastOnce;                               // 0x0501(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AH7T[0xA6];                                  // 0x0502(0x00A6) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplodeOnHit;                                           // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExplodeOnHitWorld;                                      // 0x05A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExplodeOnHitDamagable;                                  // 0x05AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExplodeOnHitEnemy;                                      // 0x05AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExplodeAfterLifetime;                                   // 0x05AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDestroyAfterExplode;                                    // 0x05AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDamageOnExplode;                                        // 0x05AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I9ZQ[0x1];                                   // 0x05AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageData;                                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTeam*                                               ProjectileTeam;                                          // 0x05B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DamageSourceOverride;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageTypeOverride;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExplosionData*                                      ExplosionData;                                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseQuickPopExplosion;                                   // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWEF[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExplosionData*                                      QuickPopExplosion;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DamageOverride;                                          // 0x05F0(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DamageAreaRadius;                                        // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DamageAreaBoxExtent;                                     // 0x062C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FForceSelection                                     ImpactForceOverride;                                     // 0x0638(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x0658(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      OverrideIgnoreActors;                                    // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AWeapon*                                             WeaponFiredFrom;                                         // 0x0670(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpawnSpeedScale;                                         // 0x0678(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6RVH[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (PADDING)

	public:
		void StopBlockingPawns();
		void SetProjectileDamageType(class UClass* DamageType);
		void SetProjectileDamageSource(class UClass* DamageSource);
		void SetProjectileDamageRadius(float DamageRadius);
		void SetProjectileDamage(float Damage);
		void ResetCollisionWith(class AActor* ActorToCollide);
		void OnRep_SpawnModifierType();
		void OnLastBounce(const struct FHitResult& ImpactResult);
		void OnHitWorld(const struct FHitResult& Hit);
		void OnHitNeutral(const struct FHitResult& Hit);
		void OnHitFriendly(const struct FHitResult& Hit);
		void OnHitEnemy(const struct FHitResult& Hit);
		void OnHitDamagableObject(const struct FHitResult& Hit);
		void OnExplode();
		void OnComponentDetachedFromParent(class USceneComponent* SceneComponent);
		void OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void OnBeginExplode();
		void IgnoreCollisionWith(class AActor* ActorToIgnore);
		void HandleDetachRequest();
		class UGbxProjectileMovementComponent* GetProjectileMovementComponent();
		class UClass* GetProjectileDamageType();
		class UClass* GetProjectileDamageSource();
		float GetProjectileDamageRadius();
		float GetProjectileDamage();
		class UExplosionComponent* GetExplosionComponent();
		void Explode();
		void CheckProjectileAttachment();
		void BounceDelegate(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxProjectileMovementComponent
	 * Size -> 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
	 */
	class UGbxProjectileMovementComponent : public UProjectileMovementComponent
	{
	public:
		class FScriptMulticastDelegate                             PostLastBounceDelegate;                                  // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      ProjectileAcceleration;                                  // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedWhenDecelerating;                                // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4P7[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProjectile*                                         OwningProjectile;                                        // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSmoothedRotationFollowsVelocity;                        // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KO0Y[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothedRotationSpeed;                                   // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDontStopSimulatingAfterHittingAnotherProjectile;        // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAPY[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumBounces;                                           // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBounceParallelToHitNormal;                              // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CXNF[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentNumBounces;                                       // 0x0294(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFreezeMovementAfterLastBounce;                          // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5YMM[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBulletPerceptionProperties                         BulletSensePerception;                                   // 0x029C(0x0008) Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSoundPerceptionProperties                          ImpactSoundPerception;                                   // 0x02A4(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanTriggerGrenadeDodges;                                // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisablePhysicsWhenAttached;                             // 0x02B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_48DJ[0xE];                                   // 0x02B2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialProjectileGravity;                                // 0x02C0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_51QL[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	public:
		void ScaleVelocity(float InScale);
		void OnRep_InitialProjectileGravity();
		void OnProjectilePostLastBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileManager
	 * Size -> 0x0168 (FullSize[0x05C0] - InheritedSize[0x0458])
	 */
	class ALightProjectileManager : public AActor
	{
	public:
		TArray<class ULightProjectile*>                            ActiveProjectiles;                                       // 0x0458(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q7EK[0x18];                                  // 0x0468(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULightProjectile*>                            ProjectilesWaitingBatch;                                 // 0x0480(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULightProjectile*>                            ProjectilePool;                                          // 0x0490(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UParticleSystemComponent*>                    ActiveParticles;                                         // 0x04A0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FLightProjectileParticlePoolData>            ParticlesPool;                                           // 0x04B0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TITY[0xD4];                                  // 0x04C0(0x00D4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAsyncSpawnTime;                                       // 0x0594(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B3TL[0x28];                                  // 0x0598(0x0028) MISSED OFFSET (PADDING)

	public:
		void ServerSendDebugProjectileImpact(int32_t ProjSyncID, class AActor* HitActor, const class FName& BoneName, uint16_t ProjFlags);
		void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectile
	 * Size -> 0x0448 (FullSize[0x0470] - InheritedSize[0x0028])
	 */
	class ULightProjectile : public UObject
	{
	public:
		unsigned char                                              UnknownData_YBDL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SyncID;                                                  // 0x0030(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80F6[0x74];                                  // 0x0034(0x0074) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightProjectileData*                                Data;                                                    // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Damage;                                                  // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageRadius;                                            // 0x00B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DamageType;                                              // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DamageSource;                                            // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ImpactForce;                                             // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SO2O[0x18];                                  // 0x00CC(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bActive : 1;                                             // 0x00E4(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L16A[0x23];                                  // 0x00E5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedLightProjectileInitializationData        InitialClientState;                                      // 0x0108(0x00B8) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLightProjectileAttachment                          AttachmentData;                                          // 0x01C0(0x0040) BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FLightProjectileExplodeData                         ExplodeData;                                             // 0x0200(0x0010) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLightProjectileImpactData                          ImpactInfo;                                              // 0x0210(0x0010) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ShutdownID;                                              // 0x0220(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IANV[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x0224(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LifeTime;                                                // 0x0228(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HomingStartTime;                                         // 0x022C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x0230(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M466[0x2C];                                  // 0x0234(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               LastHitActor;                                            // 0x0260(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D00N[0x40];                                  // 0x0268(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x02A8(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ComponentLocation;                                       // 0x02B4(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            ComponentRotation;                                       // 0x02C0(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_THDX[0xC];                                   // 0x02CC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocalStartLocation;                                      // 0x02D8(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LocalStartDirection;                                     // 0x02E4(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Velocity;                                                // 0x02F0(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GravityScale;                                            // 0x02FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                BodyComponent;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            TracerComponent;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         Components;                                              // 0x0310(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPW9[0x38];                                  // 0x0320(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumBounces;                                              // 0x0358(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VXNV[0x1C];                                  // 0x035C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageModifierComponent*                            DamageModifierComp;                                      // 0x0378(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9U7D[0xF0];                                  // 0x0380(0x00F0) MISSED OFFSET (PADDING)

	public:
		void SetLifetime(float NewLifetime);
		void SetHomingTargetLocation(const struct FVector& HomingLocation);
		void SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset);
		void PlayFeedbackSoundEvent(class UWwiseEvent* Event);
		void OnRep_Shutdown();
		void OnRep_InitialClientState();
		void OnRep_Impact();
		void OnRep_Exploded();
		void OnRep_Attached();
		void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
		void OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent);
		void OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent);
		void OnAttachedActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection);
		void OnAttachedActorDestroyed(class AActor* DestroyedActor);
		void K2_ApplyImpactDamage(const struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect);
		bool IsHomingMovingDirectlyTowardsTarget();
		bool IsHoming();
		void InitChildData(struct FLightProjectileInitializationData* InitData);
		class AActor* GetTarget();
		class AActor* GetSource();
		float GetModifierValue();
		EWeaponShotModifierType GetModifierType();
		class APawn* GetInstigator();
		class UImpactData* GetImpactDataOverride();
		class UImpactData* GetImpactData();
		float GetHomingStartTime();
		unsigned char GetFiringPatternID();
		class UGbxDamageType* GetDamageType();
		class AActor* GetDamageCauser();
		ETeamAttitude GetAttitudeTowards(class AActor* TargetActor);
		struct FVector GetAttachedImpactNormal();
		class AActor* GetAttachedDamageReceiverActor();
		class AActor* GetAttachedActor();
		class AActor* GetAssociatedActor(ELightProjectileQueryActorType ActorType);
		void Explode(float Delay);
		void EnableHoming();
		void DisableHoming();
		void Destroy();
		void ApplyAreaDamage(const struct FVector& Origin, class AActor* HitActor, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileData
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class ULightProjectileData : public UObject
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         BodyMesh;                                                // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYOT[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BodyTransform;                                           // 0x0040(0x0030) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxSignificanceEvent                               TracerSignificanceEvent;                                 // 0x0070(0x0008) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		ELightProjectileTracerThrottleLevel                        MaxTracerThrottleLevel;                                  // 0x0078(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JCG[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     TracerFX;                                                // 0x0080(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TracerFXCollection;                                      // 0x0088(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TracerFXBodySocket;                                      // 0x0090(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UC3N[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TracerFXTransform;                                       // 0x00A0(0x0030) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x00D0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayImpactEffectOnExplode : 1;                          // 0x00D8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFQZ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExplosionData*                                      ExplosionData;                                           // 0x00E0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       DamageInstigatorFeedback;                                // 0x00E8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     AttachedFX;                                              // 0x00F0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AttachedFXCollection;                                    // 0x00F8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachedFXBodySocket;                                    // 0x0100(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR5S[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          AttachedFXTransform;                                     // 0x0110(0x0030) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BounceEffectDelay;                                       // 0x0140(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0144(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0148(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            InitialRelativeRotation;                                 // 0x014C(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0158(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x015C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x0160(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RicochetFriction;                                        // 0x0164(0x0004) BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceFriction;                                          // 0x0168(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bounciness;                                              // 0x016C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ULightProjectileMoveModifier*>                MoveModifiers;                                           // 0x0170(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x0180(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachedLifetimeEnabled : 1;                            // 0x0184(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HKA[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttachedLifetime;                                        // 0x0188(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x018C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Z4A[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceInterval;                                           // 0x0190(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x0194(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRicochet;                                             // 0x0198(0x0004) BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBounces;                                              // 0x019C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxReflections;                                          // 0x01A0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProxyRadius;                                             // 0x01A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ProxyTraceChannel;                                       // 0x01A8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCollisionWithInstigator : 1;                      // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetTeamCollision : 1;                                   // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCollisionWithInstigatorTeam : 1;                  // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPenetratesTargetables : 1;                              // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPenetratesWorld : 1;                                    // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBounceOffTargetables : 1;                               // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCollideWithSource : 1;                                  // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableProxyCollisionEvents : 1;                         // 0x01A9(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0RW[0x2];                                   // 0x01AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollideWithSourceDelay;                                  // 0x01AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLightProjectileTimedEvent>                  TimedEvents;                                             // 0x01B0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBulletPerceptionProperties                         BulletSensePerception;                                   // 0x01C0(0x0008) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundPerceptionProperties                          ImpactSoundPerception;                                   // 0x01C8(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bCanTriggerBulletDodges : 1;                             // 0x01D4(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTargetedImpactRadiusDamage : 1;                         // 0x01D4(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HL6[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageRadius;                                            // 0x01D8(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0210(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageAreaData;                                          // 0x0218(0x0008) BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageData;                                              // 0x0220(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAreaHitOffset;                                     // 0x0228(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDamageFalloff : 1;                                      // 0x022C(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresInstigatorToDoDamage : 1;                       // 0x022C(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L76Y[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttachDamageScale;                                       // 0x0230(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VTF[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ImpactedActorDamageScale;                                // 0x0238(0x0038) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UConditionalDamageModifier*>                  ConditionalDamageModifiers;                              // 0x0270(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLightProjectileAudioProperties                     AudioProperties;                                         // 0x0280(0x0040) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         AttachedSound;                                           // 0x02C0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanAttachToTargetables : 1;                             // 0x02C8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanAttachToFriendlies : 1;                              // 0x02C8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanAttachToWorld : 1;                                   // 0x02C8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideBodyOnAttach : 1;                                   // 0x02C8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDeactivateTracerFXOnAttach : 1;                         // 0x02C8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0DS[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeactivateTracerFXEmitterOnAttach;                       // 0x02D0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableHomingOnSpawn : 1;                                // 0x02D8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAimAssistSettings : 1;                          // 0x02D8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP97[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MagnetismRate;                                           // 0x02DC(0x0008) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMagnetismDeflection;                                  // 0x02E4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightProjectileRingSettings                        RingSettings;                                            // 0x02E8(0x0030) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bMakeProjectileRing : 1;                                 // 0x0318(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQYJ[0xF];                                   // 0x0319(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCallOnDamageEventOncePerHit;                            // 0x0328(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKFL[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void OnProxyImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		void OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit);
		void OnExplode(class ULightProjectile* Projectile);
		void OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical);
		void OnBegin(class ULightProjectile* Projectile);
		void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
		void GetTimedEventNameList(TArray<class FName>* FuncList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightBeamManager
	 * Size -> 0x00B0 (FullSize[0x0508] - InheritedSize[0x0458])
	 */
	class ALightBeamManager : public AActor
	{
	public:
		TArray<class ULightBeam*>                                  ActiveBeams;                                             // 0x0458(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULightBeam*>                                  BeamPool;                                                // 0x0468(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UParticleSystemComponent*>                    ActiveParticles;                                         // 0x0478(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FLightBeamParticlePoolData>                  ParticlesPool;                                           // 0x0488(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F2H6[0x70];                                  // 0x0498(0x0070) MISSED OFFSET (PADDING)

	public:
		void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightBeam
	 * Size -> 0x05E8 (FullSize[0x0610] - InheritedSize[0x0028])
	 */
	class ULightBeam : public UObject
	{
	public:
		unsigned char                                              UnknownData_LWWM[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightBeamData*                                      Data;                                                    // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Component;                                               // 0x00B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            AltViewComponent;                                        // 0x00C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageInterval;                                          // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LockOnContactTime;                                       // 0x00CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LockOnBreakRadius;                                       // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LockOnBreakAngle;                                        // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YD0M[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClientLightBeamState                               ClientState;                                             // 0x00E0(0x00C8) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		EWeaponShotModifierType                                    ModifierType;                                            // 0x01A8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LZXV[0x17];                                  // 0x01A9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x01C0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector_NetQuantize10                               ServerSourcePoint;                                       // 0x01C4(0x000C) Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector_NetQuantize10                               ServerTargetPoint;                                       // 0x01D0(0x000C) Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1LD7[0x20];                                  // 0x01DC(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x01FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U0HX[0x30];                                  // 0x0200(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               LastDamagedActor;                                        // 0x0230(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class AActor>>                       DamagedActors;                                           // 0x0238(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		float                                                      LastDamagedActorContinuousContact;                       // 0x0248(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UXP6[0xDC];                                  // 0x024C(0x00DC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          LastImpact;                                              // 0x0328(0x0090) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U7DV[0x18];                                  // 0x03B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightBeam*                                          ParentBeam;                                              // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULightBeam*                                          RootParentBeam;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ULightBeam*>                                  ChildBeams;                                              // 0x03E0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G3QN[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLightBeamImpactFXTrackingData>              TrackingImpactEffects;                                   // 0x0400(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S7G2[0x200];                                 // 0x0410(0x0200) MISSED OFFSET (PADDING)

	public:
		void SetTargetSocket(const class FName& Socket);
		void OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC);
		void OnRep_ModifierValue();
		void OnRep_ModifierType();
		void OnRep_ClientState();
		void LockOntoTarget(const struct FLightBeamAttachment& Target);
		void InitChildData(struct FLightBeamInitializationData* InitData);
		class AActor* GetTargetActor();
		struct FLightBeamAttachment GetTarget();
		class AActor* GetSourceActor();
		struct FLightBeamAttachment GetSource();
		class APawn* GetInstigator();
		float GetImpactForce();
		class UGbxDamageType* GetDamageType();
		class AActor* GetDamageCauser();
		float GetDamage();
		class AActor* GetAssociatedActor(ELightBeamQueryActorType ActorType);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightBeamData
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class ULightBeamData : public UObject
	{
	public:
		class UClass*                                              BeamClass;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SBU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     BeamFX;                                                  // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BeamFXCollection;                                        // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ViewerBeamFX;                                            // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ViewerBeamFXCollection;                                  // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         LoopingImpactAudio;                                      // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AudioFXCollection;                                       // 0x0060(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceTangentStrengthOverDistance;                       // 0x0068(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetTangentStrengthOverDistance;                       // 0x006C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BeamEmitterName;                                         // 0x0070(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExplosionData*                                      ExplosionData;                                           // 0x0078(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x0080(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactFXFrequency;                                       // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowPenetrationImpacts : 1;                             // 0x008C(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNoImpactDecals : 1;                                     // 0x008C(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x008D(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5FZ[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionRadius;                                         // 0x0090(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceInterval;                                           // 0x0094(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTraceSteps;                                           // 0x0098(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLength;                                               // 0x009C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartLength;                                             // 0x00A0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrowSpeed;                                               // 0x00A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGrowOverTime : 1;                                       // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetTeamCollision : 1;                                   // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreCollisionWithInstigatorTeam : 1;                  // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPenetratesTargetables : 1;                              // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPenetratesWorld : 1;                                    // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTriggerBulletDodges : 1;                             // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightBeamLock                                             LockType;                                                // 0x00A9(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanAcquireLock : 1;                                     // 0x00AA(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlignToLockedTarget : 1;                                // 0x00AA(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanLockOntoFriendlies : 1;                              // 0x00AA(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWorldCollisionBreaksLock : 1;                           // 0x00AA(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O55T[0x1];                                   // 0x00AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageInterval;                                          // 0x00AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDamageDirectTargetOnce : 1;                             // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RMB[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageData;                                              // 0x00B8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UConditionalDamageModifier*>                  ConditionalDamageModifiers;                              // 0x00C0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDamageProxy : 1;                                  // 0x00D0(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTAE[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageProxyRadius;                                       // 0x00D4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DamageProxyTraceChannel;                                 // 0x00D8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEVE[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  DamageProxyRadiusCurve;                                  // 0x00E0(0x0078) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              bScaleDamageProxyRadiusByCurve : 1;                      // 0x0158(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableDragWhenLocked : 1;                              // 0x0158(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Z8P[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DragSpeed;                                               // 0x015C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDragRadius;                                           // 0x0160(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3L6[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2DWaveform>                           SpreadWaveforms;                                         // 0x0168(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bSpreadWaveformIsAngle : 1;                              // 0x0178(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UECC[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpreadWaveformTimeScale;                                 // 0x017C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockOnSpreadScale;                                       // 0x0180(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAccuracyToSpread : 1;                              // 0x0184(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_351B[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxChains;                                               // 0x0188(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxChainDepth;                                           // 0x018C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ChainBeamData;                                           // 0x0190(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnvQuery*                                           ChainTargetsQuery;                                       // 0x0198(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChainTargetsQueryMaxRangeParam;                          // 0x01A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChainDelay;                                              // 0x01A8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChainInterval;                                           // 0x01AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxChainDistance;                                        // 0x01B0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChainBreakDistance;                                      // 0x01B4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetUpdateTime;                                           // 0x01B8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34HJ[0xC];                                   // 0x01BC(0x000C) MISSED OFFSET (PADDING)

	public:
		float UpdateTarget(class ULightBeam* Beam);
		bool CanLockOn(class ULightBeam* Beam, class AActor* TargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAnimInstance
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UWeaponAnimInstance : public UAnimInstance
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0440(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponAttachmentSlot*                               Slot;                                                    // 0x0448(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomDuration;                                            // 0x0450(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomEffect;                                              // 0x0454(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsZoomedIn;                                             // 0x0458(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRVM[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (PADDING)

	public:
		void BlueprintSwitchedMode(int32_t NewMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAudioProviderComponent
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UWeaponAudioProviderComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WalkingProjectileMovementComponent
	 * Size -> 0x0090 (FullSize[0x0358] - InheritedSize[0x02C8])
	 */
	class UWalkingProjectileMovementComponent : public UGbxProjectileMovementComponent
	{
	public:
		bool                                                       bGravityAffectsSlopeWalking;                             // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB2I[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkAngle;                                            // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFallOffLedges;                                          // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKNX[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStepUpHeight;                                         // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementFrozenMaxTime;                                   // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBounceOffWalls;                                         // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYFW[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxWallBounces;                                          // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallBounciness;                                          // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWalkingSpeed;                                   // 0x02E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHI9[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingSpeedOverride;                                    // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIHK[0x38];                                  // 0x02F0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHitUnwalkableSurface;                                  // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnBecomeAirborne;                                        // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLanded;                                                // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAmmoComponent
	 * Size -> 0x0038 (FullSize[0x01B0] - InheritedSize[0x0178])
	 */
	class UWeaponAmmoComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_46G9[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAmmoTypeData*                                    AmmoTypeData;                                            // 0x0180(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayAmmoInHUD;                                       // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06D3[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NotifyAmmoChanged;                                       // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZBM[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ClientRefillAmmo(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponHeatComponent
	 * Size -> 0x00C0 (FullSize[0x0238] - InheritedSize[0x0178])
	 */
	class UWeaponHeatComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4PMJ[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  HeatCoolDownRate;                                        // 0x0188(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  HeatCoolDownDelay;                                       // 0x0194(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  UseHeatImpulse;                                          // 0x01A0(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ActiveHeatRate;                                          // 0x01AC(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulateOnClients;                                      // 0x01B8(0x0001) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSimulateOnAI : 1;                                       // 0x01B9(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVisibleInHUD : 1;                                       // 0x01B9(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartCoolDownEffectOnEndUse : 1;                        // 0x01B9(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanOverheat : 1;                                        // 0x01B9(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseWhenOverheated;                                   // 0x01BA(0x0001) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HZY[0x1];                                   // 0x01BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  OverheatTime;                                            // 0x01BC(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  OverheatCoolDownDelay;                                   // 0x01C8(0x000C) Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGJ4[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponHeatEventNotify>                      HeatEvents;                                              // 0x01D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                HeatMaterialParamName;                                   // 0x01E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         HeatMaterialParamCurve;                                  // 0x01F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponEffectType                                          CoolDownEffectType;                                      // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1RB[0x3];                                   // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoolDownEffectOnThreshold;                               // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoolDownEffectOffThreshold;                              // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NB0V[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NotifyHeatChanged;                                       // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      Heat;                                                    // 0x0218(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RIU[0xC];                                   // 0x021C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ReplicatedHeat;                                          // 0x0228(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverheated : 1;                                         // 0x0229(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MJ4X[0x6];                                   // 0x022A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x0230(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetCanUseWhenOverheated(bool bEnabled);
		void OnUseFinished();
		void OnUsed();
		void OnStopOverheat();
		void OnStartOverheat();
		void OnRep_ReplicatedHeat();
		void OnRep_Overheated(bool bWasOverheated);
		void OnPutDown();
		void OnEquipped();
		void OnDetached();
		void OnAttached();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponReloadComponent
	 * Size -> 0x0060 (FullSize[0x01D8] - InheritedSize[0x0178])
	 */
	class UWeaponReloadComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MAAT[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ReloadPartType;                                          // 0x0188(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFJR[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NotifyReloadStarted;                                     // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyReloadEnded;                                       // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyAmmoGiven;                                         // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ReloadTime;                                              // 0x01C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K3ON[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x01D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponZoomComponent
	 * Size -> 0x0170 (FullSize[0x02E8] - InheritedSize[0x0178])
	 */
	class UWeaponZoomComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NVXP[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponZoomLevel>                            ZoomLevels;                                              // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      InstigatorAccuracyScale;                                 // 0x0198(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelShotOffsetScale;                                // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewModelLeadingScale;                                   // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementAnimationAlpha;                                  // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlinchAnimationMagnitudeScale;                           // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUnzoomWhenSwitchingModes;                          // 0x01AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZN5[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModeFOVScale;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModeTransitionDuration;                                  // 0x01B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyeSocket;                                               // 0x01B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScopeSocket;                                         // 0x01C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GZ4[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FrontScopeSocket;                                        // 0x01C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FrontSightSocket;                                        // 0x01D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RearSightSocket;                                         // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVScale;                                                // 0x01E0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationScale;                                           // 0x01E4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCrosshairWhenZoomed;                                // 0x01E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAttributesWhenFullyZoomed;                         // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKHO[0x6];                                   // 0x01EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAttributeEffectData>                        AttributeEffects;                                        // 0x01F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAttributeEffectData>                        InstigatorAttributeEffects;                              // 0x0200(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                DepthOfFieldFocusSocket;                                 // 0x0210(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableBlurVignetteSize : 1;                             // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideStartBlurVignetteSize : 1;                      // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideBlurVignetteSharpness : 1;                      // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableColorVignetteSize : 1;                            // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideStartColorVignetteSize : 1;                     // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideColorVignetteSharpness : 1;                     // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideLongitudinalMotionScale : 1;                    // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideLateralMotionScale : 1;                         // 0x0218(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTQ9[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurVignetteSize;                                        // 0x021C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartBlurVignetteSize;                                   // 0x0220(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlurVignetteSharpness;                                   // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorVignetteSize;                                       // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartColorVignetteSize;                                  // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorVignetteSharpness;                                  // 0x0230(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongitudinalMotionScale;                                 // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralMotionScale;                                      // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0VM[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       UseFeedback;                                             // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseFeedbackScale;                                        // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JADE[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NotifyZoomingIn;                                         // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyZoomedIn;                                          // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyZoomingOut;                                        // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyZoomedOut;                                         // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bApplyWeaponModeZoom;                                    // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponZoomState                                    ZoomState;                                               // 0x0291(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponZoomState                                    ReplicatedZoomState;                                     // 0x0293(0x0002) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              DesiredZoomLevel;                                        // 0x0295(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W1S9[0x2];                                   // 0x0296(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomStartTime;                                           // 0x0298(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ZoomTransitionStartTime;                                 // 0x029C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGbxAttributeModifierHandle>                 AttributeModifiers;                                      // 0x02A0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FGbxAttributeModifierHandle>                 InstigatorAttributeModifiers;                            // 0x02B0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              CachedWeaponModeIndex;                                   // 0x02C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GZQA[0x1F];                                  // 0x02C1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x02E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSwitchedWeaponMode();
		void OnRep_ReplicatedZoomState();
		void OnDetached();
		void OnAttached();
		float GetMaxZoomFOVScaleWithMode(unsigned char ModeIndex);
		float GetMaxZoomFOVScale();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.AmmoProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAmmoProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAnimNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UWeaponAnimNotify : public UAnimNotify
	{
	public:
		bool                                                       bTriggerOnFirstPerson;                                   // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D440[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.AnimNotify_AmmoReloaded
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAnimNotify_AmmoReloaded : public UWeaponAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.AnimNotify_EquipInterruptible
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAnimNotify_EquipInterruptible : public UWeaponAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAnimNotify_WeaponSkeletalControlEvent : public UWeaponAnimNotify
	{
	public:
		EWeaponEffectType                                          ControlType;                                             // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TK27[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ControlName;                                             // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponSkeletalControlEvent                                ControlEvent;                                            // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1X0[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControlInput;                                            // 0x0054(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.BodyWeaponHoldData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UBodyWeaponHoldData : public UGbxDataAsset
	{
	public:
		class FName                                                HoldName;                                                // 0x0030(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        HoldNames;                                               // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBodyWeaponActionInfo>                       WeaponActions;                                           // 0x0048(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      DepthOfFieldForegroundFocusDistance;                     // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DepthOfFieldForegroundFocusNearRegionPct;                // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.BodyWeaponHoldManagerComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UBodyWeaponHoldManagerComponent : public UActorComponent
	{
	public:
		class UBodyWeaponHoldData*                                 DefaultWeaponHold;                                       // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UBodyWeaponHoldData*>                         WeaponHolds;                                             // 0x0180(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FName                                                UnarmedHoldName;                                         // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.EnvQueryContext_ProjectileProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_ProjectileProxy : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_FindProjectileTargets : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           Range;                                                   // 0x0060(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       TargetSkipRangeCheckCondition;                           // 0x0090(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowHostiles;                                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFriendlies;                                        // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNeutrals;                                          // 0x009A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlsoFindTargetableComponents;                           // 0x009B(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreNonHostileAttachedParent;                         // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W98U[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.EnvQueryItemType_ProjectileProxy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_ProjectileProxy : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.FiringPattern
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFiringPattern : public UGbxDataAsset
	{
	public:
		TArray<struct FFiringPatternSample>                        Samples;                                                 // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, NoClear, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bFireRandomlyFromPattern : 1;                            // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bResetPatternAfterEachShot : 1;                          // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bScalePattern : 1;                                       // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1; // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSuppressWeaponSpread : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSingleWeaponSpread : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableTracerThrottling : 1;                            // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HMTC[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BasePatternScale;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinPatternScale;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RequiredProjectilesPerShot;                              // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.FiringPatternData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UFiringPatternData : public UObject
	{
	public:
		TArray<struct FFiringPatternSample>                        Samples;                                                 // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bFireRandomlyFromPattern : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bResetPatternAfterEachShot : 1;                          // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScalePattern : 1;                                       // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1; // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSuppressWeaponSpread : 1;                               // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSingleWeaponSpread : 1;                                 // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEG0[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BasePatternScale;                                        // 0x003C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPatternScale;                                         // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredProjectilesPerShot;                              // 0x0044(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxAmmoTypeData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UGbxAmmoTypeData : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          DisplayIcon;                                             // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScaleformDisplayFrameID;                                 // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameResourceData*                                   ResourceData;                                            // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerationRate;                                        // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S6S[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxProjectileManager
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxProjectileManager : public UIGbxProjectileManager
	{
	public:
		TArray<class UProjectileHomingComponent*>                  HomingComponents;                                        // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxTrajectometerComponent
	 * Size -> 0x01C8 (FullSize[0x0340] - InheritedSize[0x0178])
	 */
	class UGbxTrajectometerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WPE7[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxTrajectometerProjectile*                         SimulatorProjectile;                                     // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystemComponent*                            TrailParticle;                                           // 0x0188(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BNOS[0x10];                                  // 0x0190(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ProjectileUpdatedComp;                                   // 0x01A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2R6V[0x40];                                  // 0x01A8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableOnStart;                                          // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTHX[0x3];                                   // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulationStepTime;                                      // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationMaxTime;                                       // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BBE[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SimulatorTemplate;                                       // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ProjectileSpeed;                                         // 0x0200(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ProjectileMaxSpeed;                                      // 0x0238(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ProjectileAcceleration;                                  // 0x0270(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ProjectileGravityScale;                                  // 0x02A8(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ProjectileInitialDirection;                              // 0x02E0(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxTrajectometerTraceData                          TraceSettings;                                           // 0x02EC(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUWK[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileToSimulate;                                    // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     TrailEmitterTemplate;                                    // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OverrideSocket;                                          // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartFromWeapon : 1;                                    // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartFromViewLocation : 1;                              // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSocketAsStartRotation : 1;                           // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSimulateWeaponProjectile : 1;                           // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseProjectileForCollision : 1;                          // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bConvergeTowardsAimLocation : 1;                         // 0x0328(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01QF[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPostSimulation;                                        // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UpdateCollisionShape();
		void SimulationResultEvent__DelegateSignature(const struct FHitResult& HitResult);
		void SetTrajectometerEnabled(bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxTrajectometerProjectile
	 * Size -> 0x0098 (FullSize[0x0718] - InheritedSize[0x0680])
	 */
	class AGbxTrajectometerProjectile : public AProjectile
	{
	public:
		class UParticleSystemComponent*                            TrailParticle;                                           // 0x0680(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J0XP[0x90];                                  // 0x0688(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxWeaponUserInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxWeaponUserInterface : public UWeaponUserInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightBeamStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULightBeamStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetBeamFlag(struct FLightBeamInitializationData* InitData, ELightBeamFlag Flag);
		void STATIC_RemoveLightBeamsBySource(class AActor* Source, const class FName& NameId);
		void STATIC_RemoveLightBeamsByActor(const struct FLightBeamQueryData& Query);
		bool STATIC_IsBeamFlagSet(const struct FLightBeamInitializationData& InitData, ELightBeamFlag Flag);
		void STATIC_ForEachLightBeam(const struct FLightBeamQueryData& Query, const class FScriptDelegate& Callback);
		bool STATIC_DoesLightBeamExist(const struct FLightBeamQueryData& Query);
		void STATIC_CreateLightBeamFromData(const struct FLightBeamInitializationData& InitData);
		void STATIC_CreateLightBeam(class UClass* Data, class APawn* Instigator, const struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, const class FName& NameId, float Damage, class UClass* DamageType, class UClass* DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent);
		void STATIC_ClearBeamFlag(struct FLightBeamInitializationData* InitData, ELightBeamFlag Flag);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileMoveModifier
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULightProjectileMoveModifier : public UObject
	{
	public:
		unsigned char                                              FiringPatternID;                                         // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictFiringPattern;                                  // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6L4Q[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileAimViewPointHomingModifier
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class ULightProjectileAimViewPointHomingModifier : public ULightProjectileMoveModifier
	{
	public:
		float                                                      LookAheadDistance;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEAP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileCurveModifier
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class ULightProjectileCurveModifier : public ULightProjectileMoveModifier
	{
	public:
		float                                                      StartTangentMultiplier;                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8Y1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileHomingModifier
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class ULightProjectileHomingModifier : public ULightProjectileMoveModifier
	{
	public:
		struct FRotator                                            MaxTurnRate;                                             // 0x0030(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartApproachDistance;                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalApproachDistance;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachTurnRateScale;                                   // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      ApproachEaseInFunc;                                      // 0x0048(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBreakHomingWhenPassingTargetDuringFinalApproach;        // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCM0[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EaseInTime;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EaseInFunc;                                              // 0x005C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StopHomingDistance;                                      // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEJT[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileRandomDrunkenModifier
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULightProjectileRandomDrunkenModifier : public ULightProjectileMoveModifier
	{
	public:
		float                                                      PathCorrectionInterval;                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnSpeed;                                               // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpreadAngle;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDepartureAngle;                                       // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGravityAffectsDrunkenness;                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQFJ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrunkenGravityScalar;                                    // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartApproachDistance;                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelayTime;                                          // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseInTime;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizedEaseTime;                                     // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UO8[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxEasingFunc                                      EaseInFunc;                                              // 0x0058(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REJY[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULightProjectileStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SplitLightProjectile(class ULightProjectile* Projectile, class UClass* Data, ELightProjectileSplitPattern Pattern, int32_t Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource);
		void STATIC_SetProjectileFlag(struct FLightProjectileInitializationData* InitData, ELightProjectileFlag Flag);
		void STATIC_SetHomingState(const struct FLightProjectileQueryData& Query, bool bIsHoming);
		void STATIC_RemoveLightProjectilesByActor(const struct FLightProjectileQueryData& Query);
		bool STATIC_IsProjectileFlagSet(const struct FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag);
		void STATIC_ForEachLightProjectile(const struct FLightProjectileQueryData& Query, const class FScriptDelegate& Callback);
		void STATIC_DetonateLightProjectiles(const struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay);
		void STATIC_CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, class UClass* Data, const struct FVector& Location, const struct FVector& Direction, float Damage);
		void STATIC_CreateLightProjectileFromDataAsync(const struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer);
		void STATIC_CreateLightProjectileFromData(const struct FLightProjectileInitializationData& InitData);
		void STATIC_CreateLightProjectile(class UClass* Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, class UClass* DamageType, class UClass* DamageSource, class UImpactData* ImpactDataOverride);
		void STATIC_ClearProjectileFlag(struct FLightProjectileInitializationData* InitData, ELightProjectileFlag Flag);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.LightProjectileWaveModifier
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULightProjectileWaveModifier : public ULightProjectileMoveModifier
	{
	public:
		TArray<struct FVector2DWaveform>                           Waveforms;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      GlobalWaveformScale;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorWaveform                                     Waveform;                                                // 0x0044(0x0024) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EaseInTime;                                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizedEaseTime;                                     // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ7Q[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxEasingFunc                                      EaseInFunc;                                              // 0x0070(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRandomize;                                              // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H3M[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.ProjectileBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProjectileBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request);
		void STATIC_ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
		void STATIC_PredictProjectilePathAsync(class UObject* WorldContext, const struct FPredictProjectilePathAsyncRequest& Request);
		struct FTransform STATIC_GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, const class FName& SocketName, TArray<class AActor*> IgnoreActors, ECollisionChannel TraceChannel);
		struct FTransform STATIC_GetSafeProjectileThrowTransform(class AActor* SourceActor, const class FName& SocketName, TArray<class AActor*> IgnoreActors, bool bThrowFromFirstPersonSocket, ECollisionChannel TraceChannel);
		TArray<struct FTransform> STATIC_GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int32_t SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
		TArray<struct FTransform> STATIC_GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int32_t SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
		void STATIC_DetachProjectilesFromActor(class AActor* BaseActor);
		struct FVector STATIC_CalculateConeVector(float Fraction, const struct FVector& Origin, const struct FVector& Direction, float AngleWidth, float AngleHeight);
		void STATIC_CalcThrowVelocityAtActor(struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
		void STATIC_CalcThrowVelocity(class UObject* WorldContextObject, struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.ProjectileEQSProxy
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UProjectileEQSProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_1M6Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0030(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class AActor*                                              ReferenceActor;                                          // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.ProjectileSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProjectileSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.RecoilControlComponent
	 * Size -> 0x0060 (FullSize[0x01D8] - InheritedSize[0x0178])
	 */
	class URecoilControlComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             NotifyRecoveryFinished;                                  // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyResetRecoil;                                       // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bServerSimulatesRecoil;                                  // 0x0198(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N12K[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CurrentRotation;                                         // 0x019C(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            TargetRotation;                                          // 0x01A8(0x000C) Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            InputPassthroughThreshold;                               // 0x01B4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H4RD[0x18];                                  // 0x01C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void ServerApplyInput(uint32_t CompressedInputRot);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.RecoilPatternData
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class URecoilPatternData : public UGbxDataAsset
	{
	public:
		TArray<struct FVector2D>                                   Samples;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bRandom;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecoilEndOfPatternAction                                  EndOfPatternAction;                                      // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RGA[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RepeatPatternStartIndex;                                 // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOfPatternRise;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0CM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ShotSequenceScaleCurve;                                  // 0x0050(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bAutoGenerateGoodness;                                   // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MLL[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PatternHeightGoodness;                                   // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatternWidthGoodness;                                    // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWU4[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UWeaponAccuracyPoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
	{
	public:
		class UGameResourceData*                                   DefaultResource;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSkeletalControlBase
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UWeaponSkeletalControlBase : public UObject
	{
	public:
		class FName                                                ControlName;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysUpdate : 1;                                       // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateWhenAmmoChanges : 1;                              // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartPaused : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSyncToFireRate : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAddInputOnUse : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHTN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        UseInputValue;                                           // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinFireRate;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFireRate;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UseModeContextBitmask;                                   // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A16U[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         ReceivedInputSound;                                      // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachToBone : 1;                                       // 0x0088(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseDefaultAudioComponent : 1;                           // 0x0088(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESL5[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAmmoChamberBoneControl
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UWeaponAmmoChamberBoneControl : public UWeaponSkeletalControlBase
	{
	public:
		TArray<class FName>                                        AmmoBoneNames;                                           // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponConsumedLoadedAmmoValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAmmoPoolComponent
	 * Size -> 0x00B0 (FullSize[0x0260] - InheritedSize[0x01B0])
	 */
	class UWeaponAmmoPoolComponent : public UWeaponAmmoComponent
	{
	public:
		struct FGbxAttributeInteger                                MaxLoadedAmmo;                                           // 0x01B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxStoredAmmo;                                           // 0x01BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LoadedAmmo;                                              // 0x01C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    StoredAmmo;                                              // 0x01C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpareAmmo;                                               // 0x01C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteAmmo : 1;                                       // 0x01CC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteAmmoForAI : 1;                                  // 0x01CC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCreateAmmoResourceForAI : 1;                            // 0x01CC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bGiveAmmoOnPickup : 1;                                   // 0x01CC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T9G2[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameResourceData*                                   ResourceData;                                            // 0x01D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        PickupAmmoFormula;                                       // 0x01D8(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		EAmmoRegenType                                             AmmoRegenType;                                           // 0x0210(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KYEM[0x3];                                   // 0x0211(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AmmoRegenRate;                                           // 0x0214(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ConsumeAmmoRegenDelay;                                   // 0x0218(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2GUQ[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0220(0x0018) BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		int32_t                                                    ServerSyncedLoadedAmmo;                                  // 0x0238(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0LQH[0x24];                                  // 0x023C(0x0024) MISSED OFFSET (PADDING)

	public:
		void ServerSendAmmoState();
		void OnRep_SpareAmmo();
		void OnRep_ServerSyncedLoadedAmmo();
		void OnMaxLoadedAmmoChanged(float OldValue, float NewValue);
		void OnGivenTo();
		void ClientSetLoadedAmmo(int32_t NewLoadedAmmo);
		void ClientConsumeAmmo(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponAmmoRegenAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAttachmentSlot
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UWeaponAttachmentSlot : public UObject
	{
	public:
		unsigned char                                              UnknownData_BJT0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSocket;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      Mesh;                                                    // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1GQT[0x4];                                   // 0x0040(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWeaponTextureMipsSetting                                  TextureMipsSetting;                                      // 0x0044(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HMB9[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture*>                                    CachedForceMipTextures;                                  // 0x0048(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_78B0[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponEffectAttachment>                     AttachmentEffects;                                       // 0x0060(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2B6[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponMaterialEffectInstance>               ActiveMaterialEffects;                                   // 0x0080(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FWeaponSkeletalControlInstance>              ActiveSkeletalControls;                                  // 0x0090(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FWeaponTrinketAttachment>                    TrinketAttachments;                                      // 0x00A0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UMeshComponent*>                              SecondaryMeshes;                                         // 0x00B0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HN37[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetMesh(class UMeshComponent* InMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponAttributeContextResolver
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UWeaponAttributeContextResolver : public UAttributeContextResolver
	{
	public:
		uint32_t                                                   UseModeContextBitmask;                                   // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5HOI[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponChargePercentValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponChargePercentValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponChargeComponent
	 * Size -> 0x0168 (FullSize[0x0300] - InheritedSize[0x0198])
	 */
	class UWeaponChargeComponent : public UWeaponPreUseComponent
	{
	public:
		struct FGbxAttributeFloat                                  ChargeTime;                                              // 0x0198(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  DischargeTime;                                           // 0x01A4(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  CancelChargeDelay;                                       // 0x01B0(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequiredUseChargePct;                                    // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CommitUseChargePct;                                      // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  OverchargeHoldTime;                                      // 0x01C4(0x000C) Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseWhenCharged : 1;                                     // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChargeBeforeEachUse : 1;                                // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopChargingEffectsOnCharged : 1;                       // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopChargedEffectsOnOvercharged : 1;                    // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateChargeActionBlendSpace : 1;                       // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bZoomModifiesBlendSpaceY : 1;                            // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3DL[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ChargePercentParamName;                                  // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomChargeActionBlendSpaceScale;                         // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8SD[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeaponChargeAttributeEffect>                AttributeEffects;                                        // 0x01E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UFeedbackData*                                       ChargeFeedback;                                          // 0x01F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       OverchargeFeedback;                                      // 0x0200(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayFeedbackAtLocation : 1;                             // 0x0208(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWJX[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FeedbackSocket;                                          // 0x0210(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWeaponChargeEventNotify>                    ChargeEvents;                                            // 0x0218(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWeaponChargeEventNotify>                    DischargeEvents;                                         // 0x0228(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyChargeStarted;                                     // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyChargeStopped;                                     // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyFullyCharged;                                      // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyChargeCanceled;                                    // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyOvercharged;                                       // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyDischargeStarted;                                  // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyDischargeStopped;                                  // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyFullyDischarged;                                   // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EWeaponChargeState                                         ChargeState;                                             // 0x02B8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0MAF[0x47];                                  // 0x02B9(0x0047) MISSED OFFSET (PADDING)

	public:
		void StopEffects();
		void Overcharged();
		void OnRep_ChargeState(EWeaponChargeState PrevChargeState);
		void OnChargeActionEnd(EGbxActionEndState EndState);
		float GetDischargeDuration();
		float GetChargePercent();
		float GetChargeDuration();
		void FullyDischarged();
		void FullyCharged();
		void DelayChargeFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponClipReloadComponent
	 * Size -> 0x0030 (FullSize[0x0208] - InheritedSize[0x01D8])
	 */
	class UWeaponClipReloadComponent : public UWeaponReloadComponent
	{
	public:
		float                                                      ReloadCompletePercent;                                   // 0x01D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  TapedReloadTime;                                         // 0x01DC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TapedReloadCompletePercent;                              // 0x01E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TapedClipCount;                                          // 0x01EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GNDA[0x11];                                  // 0x01F0(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClientReloadState;                                       // 0x0201(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              CurrentClip;                                             // 0x0202(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L0IU[0x5];                                   // 0x0203(0x0005) MISSED OFFSET (PADDING)

	public:
		void OnRep_ClientReloadState();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.GbxCondition_ZoomState
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_ZoomState : public UGbxCondition
	{
	public:
		unsigned char                                              bIsZoomedIn : 1;                                         // 0x0088(0x0001) BIT_FIELD Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeTransitions : 1;                                 // 0x0088(0x0001) BIT_FIELD Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NSU[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponDebugInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponDebugInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponFireBeamComponent
	 * Size -> 0x0038 (FullSize[0x0938] - InheritedSize[0x0900])
	 */
	class UWeaponFireBeamComponent : public UWeaponFireComponent
	{
	public:
		float                                                      DamageRateScale;                                         // 0x0900(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CBU[0x4];                                   // 0x0904(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LightBeamData;                                           // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFollowPlayerCrosshair;                                  // 0x0910(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QD1K[0x3];                                   // 0x0911(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LockOnContactTime;                                       // 0x0914(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockOnBreakRadius;                                       // 0x0918(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockOnBreakAngle;                                        // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DamageRampCurve;                                         // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  DamageRampScale;                                         // 0x0928(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09QB[0x4];                                   // 0x0934(0x0004) MISSED OFFSET (PADDING)

	public:
		class UClass* GetShotLightBeamData();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponFireRateAccelPercentValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponFireRateAccelPercentValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponRecoilComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UWeaponRecoilComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VNPD[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URecoilControlComponent*                             CachedControlComponent;                                  // 0x0188(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AWeapon*                                             WeaponPrivate;                                           // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnUsed();
		void OnDetached();
		void OnAttached();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponRecoilGoodnessValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponRecoilGoodnessValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponRecoilPatternComponent
	 * Size -> 0x0068 (FullSize[0x0200] - InheritedSize[0x0198])
	 */
	class UWeaponRecoilPatternComponent : public UWeaponRecoilComponent
	{
	public:
		unsigned char                                              UnknownData_8UBR[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URecoilPatternData*                                  Pattern;                                                 // 0x01A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  PatternWidthScale;                                       // 0x01A8(0x000C) Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  PatternHeightScale;                                      // 0x01B4(0x000C) Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  PatternZoomScale;                                        // 0x01C0(0x000C) Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScalePatternByFOV;                                      // 0x01CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetPatternWhenFiringEnds;                             // 0x01CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WWWX[0x2];                                   // 0x01CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RecoilSpeed;                                             // 0x01D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecoilRecoveryTime;                                      // 0x01D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecoilRecoveryDelayTime;                                 // 0x01D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartRecoilRecoveryWhenFiringEnds;                      // 0x01DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0SNT[0x23];                                  // 0x01DD(0x0023) MISSED OFFSET (PADDING)

	public:
		void ResetPattern();
		void OnUseFinished();
		float GetRecoilPatternWidthGoodness();
		float GetRecoilPatternHeightGoodness();
		float GetRecoilPatternGoodness();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSettings
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UWeaponSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FWeaponEffectTypeName>                       WeaponEffectTypes;                                       // 0x0038(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FWeaponActionTypeName>                       WeaponActionTypes;                                       // 0x0048(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FLightProjectileFlagName>                    LightProjectileFlags;                                    // 0x0058(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FLightBeamFlagName>                          LightBeamFlags;                                          // 0x0068(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FWeaponShotModifierTypeName>                 WeaponShotModifierTypes;                                 // 0x0078(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponShotModifier
	 * Size -> 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
	 */
	class UWeaponShotModifier : public UGbxDataAsset
	{
	public:
		bool                                                       bTriggerEveryXShots;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WMO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        TriggerEveryXShots;                                      // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		EWeaponShotModifierType                                    ModifierType;                                            // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyDamage;                                           // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHAK[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageModifier;                                          // 0x0078(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		EWeaponShotDamageModifierType                              DamageModifierType;                                      // 0x00B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBOH[0x3];                                   // 0x00B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bDistributeBetweenProjectiles;                           // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP6W[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ImpactData;                                              // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECriticalHitDamageOverride                                 CriticalHitModifier;                                     // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultCriticalHitMultiplier;                        // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D71W[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        AdditionalCriticalMultiplier;                            // 0x00D0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        GoreModifier;                                            // 0x0108(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        GibModifier;                                             // 0x0140(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UConditionalDamageModifier*                          ConditionalDamageModifier;                               // 0x0178(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassConditionalDamageModifierToChildProjectiles;        // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefundShotCostWhenTriggered;                            // 0x0181(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressRefundThatWouldPreventReload;                   // 0x0182(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZEL[0x5];                                   // 0x0183(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSimpleMotionControlBase
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class UWeaponSimpleMotionControlBase : public UWeaponSkeletalControlBase
	{
	public:
		unsigned char                                              bStartActive : 1;                                        // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoActivate : 1;                                       // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimpleMotionInputHandler                                  InputHandler;                                            // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9KZ[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ControlValue;                                            // 0x0098(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bLimitMinControlValue : 1;                               // 0x00D0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitMaxControlValue : 1;                               // 0x00D0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C72[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinControlValue;                                         // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxControlValue;                                         // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseSpeed;                                     // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseMaxValue;                                  // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseDecayDelay;                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseDecaySpeed;                                // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGED[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSimpleMotionBlendControl
	 * Size -> 0x0068 (FullSize[0x0158] - InheritedSize[0x00F0])
	 */
	class UWeaponSimpleMotionBlendControl : public UWeaponSimpleMotionControlBase
	{
	public:
		unsigned char                                              bUseExistingNode : 1;                                    // 0x00F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMeshSpaceBlend : 1;                                     // 0x00F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4WP[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationAsset*                                     Animation;                                               // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputBlendPose                                     BlendLayerSetup;                                         // 0x0100(0x0010) Edit, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveState;                                             // 0x0110(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActiveBlendTarget;                                       // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FQU[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  RecoveryState;                                           // 0x0138(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSimpleMotionBoneControl
	 * Size -> 0x0188 (FullSize[0x0278] - InheritedSize[0x00F0])
	 */
	class UWeaponSimpleMotionBoneControl : public UWeaponSimpleMotionControlBase
	{
	public:
		class FName                                                BoneName;                                                // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IK0[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IdleTranslation;                                         // 0x00FC(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActiveTranslation;                                       // 0x0108(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F20H[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  IdleTranslationState;                                    // 0x0118(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveTranslationState;                                  // 0x0138(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryTranslationState;                                // 0x0158(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QORY[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            IdleRotation;                                            // 0x017C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ActiveRotation;                                          // 0x0188(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAI2[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  IdleRotationState;                                       // 0x0198(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveRotationState;                                     // 0x01B8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryRotationState;                                   // 0x01D8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x01F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYXV[0x2];                                   // 0x01FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IdleScale;                                               // 0x01FC(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActiveScale;                                             // 0x0208(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRWS[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  IdleScaleState;                                          // 0x0218(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveScaleState;                                        // 0x0238(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryScaleState;                                      // 0x0258(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponSingleFeedReloadComponent
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UWeaponSingleFeedReloadComponent : public UWeaponReloadComponent
	{
	public:
		bool                                                       bDisableInterruptedToUse;                                // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EUGN[0x3];                                   // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SingleFeedIncrement;                                     // 0x01DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SingleFeedCompletePercent;                               // 0x01E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6P9X[0x25];                                  // 0x01E4(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClientReloadState;                                       // 0x0209(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3GH[0x6];                                   // 0x020A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnUserInput(unsigned char InputChannel);
		void OnRep_ClientReloadState();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponEffectShotStrengthValueResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponEffectShotStrengthValueResolver : public UAttributeValueResolver
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateVisibleAmmo(class AWeapon* Weapon);
		void STATIC_UnhideWeapons(class AActor* WeaponUser, const class FName& Reason);
		void STATIC_UnhideWeapon(class AActor* WeaponUser, unsigned char Slot, const class FName& Reason);
		void STATIC_SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
		void STATIC_SetVisibleAmmoState(class AWeapon* Weapon, EWeaponVisibleAmmoState NewState);
		void STATIC_ResetVisibleAmmoState(class AWeapon* Weapon);
		void STATIC_RefillAmmo(class AWeapon* Weapon, int32_t Amount, bool bAsPercent);
		class UGbxAction* STATIC_K2_PlayWeaponHoldActionEx(class AActor* Actor, EWeaponActionType WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams);
		class UGbxAction* STATIC_K2_PlayWeaponHoldAction(class AActor* Actor, EWeaponActionType WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration);
		void STATIC_HideWeapons(class AActor* WeaponUser, const class FName& Reason);
		void STATIC_HideWeapon(class AActor* WeaponUser, unsigned char Slot, const class FName& Reason);
		void STATIC_GiveAmmo(class AWeapon* Weapon, int32_t Amount, bool bLoaded, bool bAsPercent);
		class AWeapon* STATIC_GetWeapon(class UObject* Context);
		float STATIC_GetMaxZoomFOVScale(class AWeapon* Weapon, unsigned char UseMode);
		int32_t STATIC_GetLoadedAmmo(class AWeapon* Weapon, unsigned char UseMode);
		float STATIC_GetFireRateAccelPercent(class AWeapon* Weapon, unsigned char UseMode);
		float STATIC_GetFireRate(class AWeapon* Weapon, unsigned char UseMode);
		class UGbxDamageType* STATIC_GetDamageType(class AWeapon* Weapon, unsigned char UseMode);
		class UProjectileEQSProxy* STATIC_CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponTriggerFeedbackAsset
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UWeaponTriggerFeedbackAsset : public UGbxDataAsset
	{
	public:
		EWeaponTriggerFeedbackMode                                 Mode;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJPD[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponTriggerFeedbackData                          Feedback;                                                // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponTriggerWeaponData                            Weapon;                                                  // 0x003C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponTriggerVibrationData                         Vibration;                                               // 0x0048(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponTriggerFireThreasholdData                    FireThreshold;                                           // 0x0054(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponTypeAsset
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UWeaponTypeAsset : public UGbxDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              ScaleformDisplayFrameID;                                 // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EquipAudioEventName;                                     // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponTypeData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UWeaponTypeData : public UGbxDataAsset
	{
	public:
		struct FDataTableRowHandle                                 BaseWeaponBalanceTableRow;                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ManufacturerDamageScaleRow;                              // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UWeaponTypeDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
	{
	public:
		EWeaponTypeDataTableType                                   DataTableFromWeaponType;                                 // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GH3U[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponVisibleAmmoComponent
	 * Size -> 0x00D8 (FullSize[0x0250] - InheritedSize[0x0178])
	 */
	class UWeaponVisibleAmmoComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AZ2A[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AmmoBoneNames;                                           // 0x0180(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EWeaponAttachmentVisibilityType                            MeshType;                                                // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWeaponVisibleAmmoState                                    InitialState;                                            // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWeaponVisibleAmmoUpdateMethod                             UpdateMethod;                                            // 0x0192(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RV5M[0xD];                                   // 0x0193(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponVisibleAmmoEffectData                        HideAmmoEffect;                                          // 0x01A0(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponVisibleAmmoEffectData                        ShowAmmoEffect;                                          // 0x01E0(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		EWeaponVisibleAmmoState                                    VisibleAmmoState;                                        // 0x0220(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JFLC[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServerAmmoCount;                                         // 0x0224(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWeaponAmmoComponent*                                CachedAmmoComponent;                                     // 0x0228(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9B5S[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             WeaponPrivate;                                           // 0x0248(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateBoneVisibility(bool bForce);
		void SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
		void SetVisibleAmmoState(EWeaponVisibleAmmoState NewState);
		void ResetVisibleAmmoState();
		void OnRep_ServerAmmoCount();
		void OnDetached();
		void OnAttached();
		void OnAmmoChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWeaponMaxZoomFOVScaleValueResolver : public UAttributeValueResolver
	{
	public:
		unsigned char                                              bInvertValue : 1;                                        // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyWeaponModeZoom : 1;                                // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F78Z[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
