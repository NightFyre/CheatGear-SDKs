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
	 * Class Interaction.InteractableComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UInteractableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M3IE[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FeatureFlag;                                             // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FVector                                             BoxExtent;                                               // 0x00D8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		struct FVector                                             BoxOrigin;                                               // 0x00E4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		struct FRotator                                            BoxRotation;                                             // 0x00F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              MayBeGrouped : 1;                                        // 0x00FC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected
		unsigned char                                              ProxyForActorInteraction : 1;                            // 0x00FC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected
		unsigned char                                              RequiresFacingFront : 1;                                 // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              RequiresNotAirborne : 1;                                 // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              RequiresNotSwimming : 1;                                 // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              UnknownData_4QCR[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionRadius;                                       // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_3J2U[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInteractionPrerequisiteBase*>                InteractionPrerequisites;                                // 0x0108(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected
		class UInteractableArea*                                   InteractableArea;                                        // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInteractableState                                         CurrentInteractionState;                                 // 0x0120(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QVIQ[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetBoxRotation(const struct FRotator& InBoxRotation);
		void SetBoxOrigin(const struct FVector& IntBoxOrigin);
		void SetBoxExtent(const struct FVector& InBoxExtent);
		class UInteractableArea* GetInteractableArea();
		struct FVector GetBoxWorldOrigin();
		float GetBoxSphereRadius();
		struct FRotator GetBoxRotation();
		struct FVector GetBoxOrigin();
		struct FVector GetBoxExtent();
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractionValidatorSetterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractionValidatorSetterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.CharacterInteractionComponent
	 * Size -> 0x00C8 (FullSize[0x06B0] - InheritedSize[0x05E8])
	 */
	class UCharacterInteractionComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_D22H[0x8];                                   // 0x05E8(0x0008) Fix Super Size
		class UInteractableArea*                                   CurrentOptimalInteractable;                              // 0x05F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VB25[0xB8];                                  // 0x05F8(0x00B8) MISSED OFFSET (PADDING)

	public:
		bool IsInteractionValid(class UObject* InInteractable);
		void InvalidateOptimalObject();
		class UInteractableArea* GetOptimalFocusObject();
		void ClearAllPolicies();
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.GroupedInteractableAreaComponent
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UGroupedInteractableAreaComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableArea
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UInteractableArea : public UObject
	{
	public:
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0028(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Name;                                                    // 0x0044(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9EEI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Interactable;                                            // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Parent;                                                  // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetParent(class AActor* InParent);
		void SetInteractable(class UObject* InInteractable);
		void SetAreaName(const class FName& InName);
		void SetAreaBounds(const struct FBoxSphereBounds& InBounds);
		class AActor* GetParent();
		class UObject* GetInteractable();
		class FName GetAreaName();
		struct FVector GetAreaLocation();
		struct FBoxSphereBounds GetAreaBounds();
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractableInterface : public UInterface
	{
	public:
		bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
		bool IsInteractableDisabled();
		void Interact(class AActor* InInteractor, class UClass* NotificationInputId);
		EInteractableState GetInteractionState();
		struct FVector GetFrontFacingVector();
		struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
		void GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore);
		class UActionRulesComponent* GetActionRulesComponent();
		bool DoesRequireNotSwimming();
		bool DoesRequireNotBeingAirborne();
		bool DoesRequireFacingFront();
		bool CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId);
		bool CanInteract(class AActor* InInteractor);
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractableBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetInteractionState(class AActor* InteractableActor, EInteractableState NewInteractableState);
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableIdentifierInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractableIdentifierInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractableServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractableService
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UInteractableService : public UObject
	{
	public:
		unsigned char                                              UnknownData_SF4I[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInteractableArea*>                           InteractableAreas;                                       // 0x0038(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_TO5F[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractionPreventionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractionPreventionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractionPreventionComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UInteractionPreventionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WSJB[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActorsToPreventInteractingWith;                          // 0x00D0(0x0010) Net, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractionValidatorOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractionValidatorOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.InteractorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.MockActorWithCharacterInteractionComponent
	 * Size -> 0x00B8 (FullSize[0x0690] - InheritedSize[0x05D8])
	 */
	class AMockActorWithCharacterInteractionComponent : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_FYY6[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_K8KB[0x8];                                   // 0x05E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterInteractionComponent*                      CharacterInteractionComponent;                           // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L72B[0xA0];                                  // 0x05F0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.MockInteractableService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMockInteractableService : public UObject
	{
	public:
		unsigned char                                              UnknownData_M53X[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.MockInteractorActor
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class AMockInteractorActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_VACS[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             FocusedInteractable;                                     // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             InteractedObject;                                        // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              InteractNotificationType;                                // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UClass*>                                      ValidInteractNotificationIds;                            // 0x03E8(0x0010) ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Interaction.SelfInteractionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USelfInteractionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
