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
	 * Class AthenaEngine.ForceFeedbackCondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UForceFeedbackCondition : public UObject
	{
	public:
		bool CanPlayForceFeedback(class AActor* InOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.AthenaEngineInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaEngineInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.BoxedRpcDispatcherInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBoxedRpcDispatcherInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.BoxedRpcDispatcherComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UBoxedRpcDispatcherComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UWMW[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_SendRpc(const struct FSerialisedRpc& Event);
		void NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event);
		void Client_SendRpc(const struct FSerialisedRpc& Event);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.DynamicColourPointLightComponent
	 * Size -> 0x0138 (FullSize[0x05E0] - InheritedSize[0x04A8])
	 */
	class UDynamicColourPointLightComponent : public UPointLightComponent
	{
	public:
		struct FRuntimeFloatCurve                                  ActivationCurve;                                         // 0x04A8(0x0080) Edit
		struct FRuntimeFloatCurve                                  DeactivationCurve;                                       // 0x0528(0x0080) Edit
		unsigned char                                              UnknownData_ONXP[0x38];                                  // 0x05A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void DeactivateLight(bool Blend);
		void ActivateLight(bool Blend);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.EmptyObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmptyObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.GameInstanceSessionIdProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameInstanceSessionIdProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.NestedWorldRootDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNestedWorldRootDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_61GO[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlinePlayerPermissionsRetrieverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.PersistentAssetCollectionDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPersistentAssetCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<class UObject*>                                     Assets;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.PlayModeHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayModeHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetPlayModeVariantOverride(EPlayModeVariant NewPlayModeVariantOverride);
		void STATIC_SetPlayModeOverride(EPlayMode NewPlayModeOverride);
		EPlayModeVariant STATIC_GetPlayModeVariant(class UObject* WorldContext);
		EPlayMode STATIC_GetPlayMode(class UObject* WorldContext);
		void STATIC_ClearPlayModeVariantOverride();
		void STATIC_ClearPlayModeOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.PlayModeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayModeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UPrimitiveCollisionExtentAdjustOverTimeComponent : public UActorComponent
	{
	public:
		float                                                      DelayBeforeExtentAdjustment;                             // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DD2V[0x2C];                                  // 0x00CC(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CachedWorld;                                             // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YW2U[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UBoxCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
	{
	public:
		bool                                                       ShouldAdjustBoxExtentX;                                  // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BC1V[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostAdjustmentBoxExtentX;                                // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldAdjustBoxExtentY;                                  // 0x0110(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQMX[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostAdjustmentBoxExtentY;                                // 0x0114(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldAdjustBoxExtentZ;                                  // 0x0118(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I3UQ[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostAdjustmentBoxExtentZ;                                // 0x011C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ServerSizeScale;                                         // 0x0120(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4Y64[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       BoxCollisionToAdjust;                                    // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class USphereCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
	{
	public:
		bool                                                       ShouldAdjustSphereRadius;                                // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RQDW[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostAdjustmentSphereRadius;                              // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ServerSizeScale;                                         // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IA55[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    SphereCollisionToAdjust;                                 // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.ResourceProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UResourceProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.RotateMeshToActorComponent
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class URotateMeshToActorComponent : public UActorComponent
	{
	public:
		class UMeshComponent*                                      MeshToRotate;                                            // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              ActorToRotateTo;                                         // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      CloseProximityRadius;                                    // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Use2DDistanceForCloseProximityRadius;                    // 0x00DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WhenInCloseProximityKeepLastYaw;                         // 0x00DD(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3N70[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationSpeed;                                           // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PreventPitchModification;                                // 0x00E4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JA2E[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPitch;                                                // 0x00E8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloseProximityYawRotation;                               // 0x00EC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAT9[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SnapMeshToLookAtActor();
		void Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.RotateMeshToLocalPlayerComponent
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class URotateMeshToLocalPlayerComponent : public URotateMeshToActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.ServicesStampIdInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServicesStampIdInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.SkeletalMeshAggregateTickComponent
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class USkeletalMeshAggregateTickComponent : public UActorComponent
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SDPC[0x28];                                  // 0x00D0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.StringToAssetClassMap
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UStringToAssetClassMap : public UDataAsset
	{
	public:
		TArray<struct FStringAssetClassPair>                       StringAssetClassPairs;                                   // 0x0028(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_ZK6U[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaEngine.SyncedRandomRetrievalInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USyncedRandomRetrievalInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
