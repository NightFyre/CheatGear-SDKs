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
	 * BlueprintGeneratedClass BP_Door_Swinging.BP_Door_Swinging_C
	 * Size -> 0x023C (FullSize[0x045C] - InheritedSize[0x0220])
	 */
	class ABP_Door_Swinging_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                InsideChargeSphere;                                      // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                OutsideChargeSphere;                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     InsideChargeArrow;                                       // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     OutsideChargeArrow;                                      // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AkTransformRefRear;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AkTransformRefFront;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Plane;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     NavDoorCoreLocationMarker;                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       NavDoorCore;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       NavDoorWay;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FrameComp;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutsideChargeLocation;                                   // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InsideChargeLocation;                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InsideHandleComp;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                OutsideHandleComp;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CoreComp;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HandleUse_Locked_Pitch_480912364CB70777E1E7519082D3EC61; // 0x02A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HandleUse_Locked__Direction_480912364CB70777E1E7519082D3EC61; // 0x02AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZTT[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HandleUse_Locked;                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_HandleUse_Normal_Pitch_0E1D547F4F380482212686B16CB9A2CE; // 0x02B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HandleUse_Normal__Direction_0E1D547F4F380482212686B16CB9A2CE; // 0x02BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CK7W[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HandleUse_Normal;                               // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMesh*                                         CoreMesh;                                                // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  CoreMaterial;                                            // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         FrameMesh;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviewYaw;                                              // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxYaw;                                                  // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartingYaw;                                             // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomOpen;                                              // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D827[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomOpenChance;                                        // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevYaw;                                                 // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentYaw;                                              // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetYaw;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FReplicatedAlpha                                    ReplicatedYaw;                                           // 0x0304(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		bool                                                       bIsClosed;                                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bKicked;                                                 // 0x0311(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3TSH[0x6];                                   // 0x0312(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  FrameMaterial;                                           // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanKick;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P1WY[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserKickSpeed;                                           // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      UserSpeed;                                               // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_0AO2[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CoreMesh_Breached;                                       // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsLocked;                                               // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsLockBlownOut;                                         // 0x0339(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RTYB[0x2];                                   // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShotsRegistered;                                         // 0x033C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BulletHits;                                              // 0x0340(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AI_Open_Noise_Volume;                                    // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AILockedHandleUseNoiseVolume;                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AI_Max_Noise_Range;                                      // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AI_Kick_Noise_Volume;                                    // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AI_Breach_Noise_Volume;                                  // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         LockMesh;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCoreDestroyed;                                          // 0x0360(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_UQX5[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DoorNoiseTag;                                            // 0x0364(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LS9U[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               LastUser;                                                // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DirectionDamageType;                                     // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastPressedInteract;                                     // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LNRZ[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDestructibleMesh*>                           DestructibleMeshes;                                      // 0x0388(0x0010) Edit, BlueprintVisible
		class UDestructibleComponent*                              DestructibleMeshComponent;                               // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAkAcousticPortal*                                   AcousticPortalRef;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawErrorTolerance;                                       // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LCA6[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaterialSubstring;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      SquaekYawThreshold;                                      // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsClosePlaying;                                          // 0x03C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOpenPlaying;                                           // 0x03C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0VS7[0x2];                                   // 0x03C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastPressedInteractYaw;                                  // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastRadialDamageOrigin;                                  // 0x03CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UserMovementVelocity;                                    // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ONBI[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AkSwitchInfo;                                            // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAkComponent*                                        AkComponentFront;                                        // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        AkComponentRear;                                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_PlayDoorSoundFront;                          // 0x0400(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_PlayDoorSoundRear;                           // 0x0408(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_Door_Swinging_C*                                 AILinkedDoor;                                            // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTaggedIsClosed;                                         // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4988[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Door_Swinging_C*                                 DoubleDoorRef;                                           // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            DoorFrontPlayingID;                                      // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            DoorRearPlayingID;                                       // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bDisplayAttachmentPoints;                                // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XW4Q[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ChargeAttachmentInsideSocketName;                        // 0x044C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ChargeAttachmentOutsideSocketName;                       // 0x0454(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName AIQuestion(class AController* Controller, const class FName& UseType);
		class FName AIQuestionWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void CanBreach(const struct FVector& InTraceLocation, bool* OutResult);
		void DrawDebugAttachmentPoints();
		void FindClosestAttachmentPoint(const struct FVector& ObserverLocation, bool* IsNearerInside);
		void DetermineDoorSwingSpeed(float BaseAlpha, float* Speed);
		void GetAKSwitchInfo(class UAkAudioBank** Bank, class FString* Switch_State_Name);
		void CreateAcousticPortal();
		void OnRep_ReplicatedYaw();
		void UpdateNavLinkPoints();
		void CreateNavLink();
		void UpdateReplicatedYaw();
		void OnRep_bCoreDestroyed();
		void Destroy_Attached_Actors(class USceneComponent* Component, class AActor* ExcludedActor);
		void UserConstructionScript();
		void Timeline_HandleUse_Normal__FinishedFunc();
		void Timeline_HandleUse_Normal__UpdateFunc();
		void Timeline_HandleUse_Locked__FinishedFunc();
		void Timeline_HandleUse_Locked__UpdateFunc();
		void InpActEvt_Interact_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_NextPos_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_PrevPos_K2Node_InputActionEvent_1(const struct FKey& Key);
		void AIUse(class AController* Controller, const class FName& UseType);
		void AIUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ClientUse(class AController* Controller, const class FName& UseType);
		void ClientUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ServerUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void Open();
		void Close();
		void AnimateHandleUse_Normal();
		void SetInitialYawValue(float CurrentYaw);
		void DetermineInitialYawValue();
		void ReportDoorNoise(float Loudness);
		void AnimateHandleUse_Locked();
		void AttachCharge(class AGBItem* InCharge, const struct FVector& InTraceLocation);
		void ReceiveBeginPlay();
		void DestroyDoor(const struct FVector& ImpulseLocation);
		void SetupMaxYaw();
		void ActorTickCheck();
		void BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
		void BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
		void UpdateTargetYaw(float NewTargetYaw);
		void AdjustTargetYaw(float Amount);
		void ServerUse(class AController* Controller, const class FName& UseType);
		void K2_OnReset();
		void UpdateAcousticPortal();
		void CloseToOpenCheck();
		void OpenToCloseCheck();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
		void PlayDoorSoundFront(class UAkAudioEvent* AkEvent);
		void PlayDoorSoundRear(class UAkAudioEvent* AkEvent);
		void PlayDoorSoundFrontTimer_Event();
		void PlayDoorSoundRearTimer_Event();
		void UpdateNavCoreDoorLocation();
		void ExecuteUbergraph_BP_Door_Swinging(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
