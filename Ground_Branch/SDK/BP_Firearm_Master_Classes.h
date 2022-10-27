#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Firearm_Master.BP_Firearm_Master_C
	 * Size -> 0x00B4 (FullSize[0x065C] - InheritedSize[0x05A8])
	 */
	class ABP_Firearm_Master_C : public AGBFirearm
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		unsigned char                                              FirearmAnimType;                                         // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDustCoverOpen;                                          // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NZEH[0x2];                                   // 0x05B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FrontSightPostOffset;                                    // 0x05B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RearSightVec;                                            // 0x05C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RearSightRot;                                            // 0x05CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SafetyAlpha;                                             // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AudioFirearmType;                                        // 0x05DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AudioSuppressor;                                         // 0x05E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAudioValuesSet;                                         // 0x05EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X3ND[0x3];                                   // 0x05ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      FirearmActions;                                          // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                ReloadType;                                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasOnTarget;                                            // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T5D1[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FiringSoundPlayingID;                                    // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShakeClass;                                        // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       bInsigatorIsLocallyViewed;                               // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3DF3[0x7];                                   // 0x0619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                NoMoreAmmo;                                              // 0x0620(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DryFireTriggerPulls;                                     // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDryFireTriggerPulls;                                  // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Out_Range_A;                                             // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WKZL[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       LeftHandOverlayRefOverride;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftHandRelativeOffsetOverride;                          // 0x0650(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLeftHandOverlay(class UAnimSequence** OutLeftHandOverlay, struct FVector* OutLeftHandOffset);
		void GetBoltHeldOpen(bool* bBoltHeldOpen);
		void SetBoltHeldOpen(bool bNewBoltHeldOpen);
		float GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition);
		void ShowReloadHint();
		void ShowSightHintMaybe();
		void HasAttachedSight(bool* OutHasSIght);
		void GetFireModeAudioSwitchName(class FName* FireMode);
		void LockOnEmpty(bool* bShouldLock);
		void GetCharAnimInstance(class UAnimInstance** AnimInstance);
		void NotifyEnum(unsigned char InEnumAsByte);
		void NotifyStateBeginEnum(unsigned char InEnumAsByte);
		void NotifyStateBeginName(const class FName& InName);
		void NotifyStateEndEnum(unsigned char InEnumAsByte);
		void NotifyStateEndName(const class FName& InName);
		void NotifyStateTickEnum(unsigned char InEnumAsByte, float FrameDeltaTime);
		void NotifyStateTickName(const class FName& InName, float FrameDeltaTime);
		void ReceiveBeginPlay();
		void OnSetFiringModeIndexEvent();
		void UpdateSafetyAlpha();
		void OnStoppedFiringEvent();
		void UpdateAudioValues();
		void OnEmptyShotEvent();
		void OnReloadDoubleTappedEvent();
		void OnReloadTappedEvent();
		void DisplayReloadMenuEvent();
		void PlayerReload(const struct FGameplayTag& FalseSection, const struct FGameplayTag& TrueSection);
		void UseOffHandPressed();
		void ReadyAndShootHint();
		void UseMainHandReleased();
		void OnFiringEvent(int32_t RecoilCount);
		void OnSpatialSoundTagChangedEvent(const class FName& OldSpatialSoundTag, const class FName& NewSpatialSoundTag);
		void PositionAlphaMet();
		void PlayFiringSound(int32_t Selection);
		void OnBeingEquipped();
		void PlayCameraShake();
		void OnEndViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character);
		void OnBecomeViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character);
		void BindViewTargetDelegates();
		void UnbindViewTargetDelegates(class AGBCharacter* OldParentCharacter);
		void OnBeingUnequipped();
		void StopFiringSound();
		void PlayFiringAnim();
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void NotifyName(const class FName& InName);
		void ShowAmmoRelatedMessage(const class FText& AmmoRelatedMessage);
		void OnChangeFiringModeEvent();
		void AIReload(class AGBAIController* AIController, const class FName& ReloadType);
		void SetLeftHandOverlayOverrideRef(class UAnimSequence* NewLeftHandOverlayRefOverride, const struct FVector& NewLeftHandRelativeOffsetOverride);
		void ExecuteUbergraph_BP_Firearm_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
