#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C
	 * Size -> 0x0245 (FullSize[0x0C15] - InheritedSize[0x09D0])
	 */
	class ABP_HDPlayerCharacterBase_C : public AHDPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     TargetCameraPoint;                                       // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RefPoint;                                                // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_B;                                           // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_A;                                           // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_L;                                           // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Suppression_R;                                           // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_HDVOIPTalker_C*                                  VOIPTalker;                                              // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                PlayerNameTextRender;                                    // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDFPOIComponent*                                     POI;                                                     // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      LerpTimeline_Lerp_5E919E724A951192A68B8180576AB695;      // 0x0A28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         LerpTimeline__Direction_5E919E724A951192A68B8180576AB695; // 0x0A2C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MJ37[0x3];                                   // 0x0A2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LerpTimeline;                                            // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DamageEffectTimeline_DamageEffect_BEBC6E9841C4A26EF0A22DA008BD6CA4; // 0x0A38(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DamageEffectTimeline__Direction_BEBC6E9841C4A26EF0A22DA008BD6CA4; // 0x0A44(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3C83[0x3];                                   // 0x0A45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DamageEffectTimeline;                                    // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SuppressionTimeline_SuppressionCurve_83869DB54889A3FECCAF0E83EA19C04B; // 0x0A50(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SuppressionTimeline__Direction_83869DB54889A3FECCAF0E83EA19C04B; // 0x0A5C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NW5L[0x3];                                   // 0x0A5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SuppressionTimeline;                                     // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDamageDivisor;                                       // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDamageThreshold;                                     // 0x0A6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EquipmentTimerDelay;                                     // 0x0A70(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEquipmentKeyPressed;                                    // 0x0A74(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSelectingEquipmentBySlot;                               // 0x0A75(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNextItem;                                               // 0x0A76(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GPJM[0x1];                                   // 0x0A77(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerState*                                        LastValidPlayerState;                                    // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTintTeamColorForPlayerPOIs;                             // 0x0A80(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSpecialSymbolForLocalPlayerPOIs;                     // 0x0A81(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T815[0x6];                                   // 0x0A82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          LocalPlayerPOISymbol;                                    // 0x0A88(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundAttenuation*                                   VOIPSpatializedAttenuation;                              // 0x0A90(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundEffectSourcePresetChain*                       VOIPSpatializedSrcEffectChain;                           // 0x0A98(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HealthRegenTimer;                                        // 0x0AA0(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       bHealthRegenEnabled;                                     // 0x0AA8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NUK[0x3];                                   // 0x0AA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthRegenAmount;                                       // 0x0AAC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthRegenTimerInterval;                                // 0x0AB0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LocalPlayerPOITint;                                      // 0x0AB4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              RedTeamColor;                                            // 0x0AC4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              BlueTeamColor;                                           // 0x0AC8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              NoTeamColor;                                             // 0x0ACC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRadialMenuEnabled;                                      // 0x0AD0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6OP5[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HDRadialMenu_C*                                 RadialMenu;                                              // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          RadialMenuExitSnd;                                       // 0x0AE0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          RadialMenuOptions;                                       // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRallypointsEnabled;                                     // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PX4N[0x3];                                   // 0x0AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialMenuRallypointTimeDeployed;                        // 0x0AF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpatializedVOIPTalker;                                  // 0x0AF8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bOutpostsEnabled;                                        // 0x0AF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MCUP[0x2];                                   // 0x0AFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialMenuOutpostTimeDeployed;                           // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SuppressionSound;                                        // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SuppressionSoundVolume;                                  // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBracedAim;                                              // 0x0B0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bWantsMount;                                             // 0x0B0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bMounted;                                                // 0x0B0E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SB22[0x1];                                   // 0x0B0F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MountDirection;                                          // 0x0B10(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MountPosition;                                           // 0x0B1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X6R0[0x8];                                   // 0x0B28(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MountTransform;                                          // 0x0B30(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SmoothSightDirection;                                    // 0x0B60(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SmoothSightOffset;                                       // 0x0B6C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimSpeed;                                                // 0x0B78(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightDirectionSmoothingSpeed;                            // 0x0B7C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SightPositionSmoothingSpeed;                             // 0x0B80(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MountDistance;                                           // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlpha;                                                // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MountHeight;                                             // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  EquippedWeapon;                                          // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDProj_SPDeployableBase_C*                       SpawnedFOB;                                              // 0x0B98(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDProj_SPDeployableBase_C*                       SpawnedRallypoint;                                       // 0x0BA0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSuppression;                                           // 0x0BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHitDamage;                                             // 0x0BB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSpottingEnabled;                                        // 0x0BC8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XEYT[0x7];                                   // 0x0BC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        SuppressionCurve;                                        // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        HitDamageCurve;                                          // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SuppressionCameraShake;                                  // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ReceiveDamageCameraShake;                                // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HitEffectValues;                                         // 0x0BF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BleedingEffectValues;                                    // 0x0C00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageEffectStartPercent;                                // 0x0C10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bVariationDataSet;                                       // 0x0C14(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FVector EventGetFocalPoint();
		void UpdateCharMesh(class USkeletalMesh* NewMesh, bool bUpdateFPPMesh);
		void SetSuppressionCompIsActive(class UPrimitiveComponent* PrimComp, bool bNewActive);
		void SetSuppressionActive(bool bActive);
		void CalcOutpostEnemiesNearbyRestriction(bool* bAreEnemiesNearby);
		void CalcRallypointEnemiesNearbyRestriction(bool* bAreEnemiesNearby);
		void IsOutpostNumberLimitReached(bool* bNumberLimitReached);
		void IsRallypointNumberLimitReached(bool* bNumberLimitReached);
		void CalcOutpostDistanceRestriction(bool* bIsOutpostDistanceRestricted);
		void CalcRallypointDistanceRestriction(bool* bIsRallypointDistanceRestricted);
		void GetIsSpawnedRallypointValid(bool* bIsSpawnedRallypointValid);
		void GetIsSpawnedOutpostValid(bool* bIsSpawnedOutpostValid);
		void GetProneMountPosition(const struct FVector& BoxSize, float Distance, float MaxHeight, float MinHeight, float MinSpace, bool* bCouldMount, struct FVector* MountPosition);
		void AlignSights(float MinSightDistance);
		void GetMountPosition(const struct FVector& Direction, float WallDistance, float TraceRadius, float CornerDistance, float CapsuleHeight, bool* bCouldMount, struct FVector* Position, struct FTransform* Transform);
		void OnRep_bSpatializedVOIPTalker();
		void HasSquadLeaderKit(bool bRequireRallyPointAbility, bool* bUsingSquadLeaderKit);
		void IsSquadLeader(bool* bSquadLeader);
		void GetSquadState(class AHDSquadState** SquadState);
		void CanSelectAnyRadialMenuOption(bool* bSelectable);
		void RadialMenuCanSelectOutpost(bool* bSelectable);
		void RadialMenuCanSelectRallypoint(bool* bSelectable);
		void RadialMenuCanSelectSpot(bool* bSelectable);
		void RadialMenuSelectOutpost();
		void RadialMenuSelectRallypoint();
		void RadialMenuSelectSpot();
		void SelectRadialMenuItem(const class FName& Category, const class FName& SubItem);
		void SpawnAndInitDeployableSPAtPawn(class UClass* SPDeployableClass, const struct FVector& SpawnOffset, class ABP_HDProj_SPDeployableBase_C** SpawnedDeployableSP);
		void LeanDebug();
		void IsMatchingTeam(class AController* LocalController, bool* bMatchingTeam);
		void GetPlayerFactionInfoClass(EHDTeam PlayerTeam, class UClass** FactionInfoClass);
		void ClearHealthRegenTimer();
		void SetHealthRegenTimerIfInvalid(float NewHealth);
		void HealthRegenTimerElapsed();
		void CleanupVOIPTalker(bool* bDestroyedComp);
		void SetupVOIPTalker();
		void EquipSelectedItemFromInventory(bool bSwitchFireModeForSelected);
		void GetMostValidLoadout(class UHDKit** PlayerLoadout);
		void GetMostValidTeamFactionInfo(class UClass** FactionInfoClass);
		void GetMostValidTeamState(class ADFTeamState** TeamState);
		void GetMostValidPlayerState(class APlayerState** PlayerState);
		class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
		void UpdateEquipmentItems();
		void UpdatePOIState();
		void GetMinimapWidget(class AController* Controller, class UDFMinimap** MinimapWidget);
		void ApplyCharacterVariation(const struct FDFCharacterVariationDataHandle& VariationHandle, bool bApplyToFPP);
		void UpdateCharMeshes(class USkeletalMesh* MeshFPP, class USkeletalMesh* MeshTPP);
		void UpdateCharMeshesFromFaction();
		void SelectEquipmentBySlotNum(int32_t EquipSlotNum, bool bEquipImmediately);
		void SetEquipmentTimer();
		void StartEquipmentTimer();
		void FreeAiming();
		void UserConstructionScript();
		void SuppressionTimeline__FinishedFunc();
		void SuppressionTimeline__UpdateFunc();
		void DamageEffectTimeline__FinishedFunc();
		void DamageEffectTimeline__UpdateFunc();
		void LerpTimeline__FinishedFunc();
		void LerpTimeline__UpdateFunc();
		void InpActEvt_NextItem_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_PreviousItem_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_CameraToggle_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_EqpSlot0_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_EqpSlot1_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_EqpSlot2_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_EqpSlot3_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_EqpSlot4_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_EqpSlot5_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_EqpSlot6_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_EqpSlot7_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_EqpSlot8_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_EqpSlot9_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_RadialMenu_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_RadialMenu_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_BracedAim_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ServerRadialMenuSelectSpot();
		void ServerRadialMenuSelectRallypoint();
		void ServerRadialMenuSelectOutpost();
		void Hit_Damage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void SuppressionEffect(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup, class UPrimitiveComponent* SuppressionVolume);
		void BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void EnterRadialMenu();
		void EventResetHealthEffect();
		void GenericDamageFeedback();
		void ReceiveTick(float DeltaSeconds);
		void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnEquipmentTimerElapsed();
		void ReceiveCurrentLoadout();
		void RetryLoadout();
		void ReceivePossessed(class AController* NewController);
		void OnPCFirePressed();
		void OnLanded(const struct FHitResult& Hit);
		void ExitRadialMenu();
		void ReceiveRestart();
		void ReceiveDestroyed();
		void SubmenuCommited(const class FName& Category, const class FName& SubItem);
		void ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveFreeAim(float DeltaSeconds);
		void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
		void ReceiveBeginPlay();
		void FirstPersonToggled(bool bFirstPerson);
		void OnPCFireReleased();
		void PlayerNameChanged(class APlayerState* PS, const class FString& NewPlayerName);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveUnpossessed(class AController* OldController);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void ReceiveOnStartAim();
		void ReceiveOnEndAim();
		void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
		void ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation);
		void ExecuteUbergraph_BP_HDPlayerCharacterBase(int32_t EntryPoint);
		void OnHitDamage__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void OnSuppression__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
