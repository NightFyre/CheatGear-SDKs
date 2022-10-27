#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class ChaosSolverEngine.ChaosDebugDrawComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UChaosDebugDrawComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KDMA[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosEventListenerComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UChaosEventListenerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4V26[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosGameplayEventDispatcher
	 * Size -> 0x01B8 (FullSize[0x0270] - InheritedSize[0x00B8])
	 */
	class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
	{
	public:
		unsigned char                                              UnknownData_BUT5[0x110];                                 // 0x00B8(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, struct FChaosHandlerSet>  CollisionEventRegistrations;                             // 0x01C8(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                 // 0x0218(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BZFS[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosNotifyHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosNotifyHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolver : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverActor
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class AChaosSolverActor : public AActor
	{
	public:
		float                                                      TimeStepMultiplier;                                      // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionIterations;                                     // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutIterations;                                       // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutPairIterations;                                   // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterConnectionFactor;                                 // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterUnionConnectionType;                              // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateCollisionData;                                 // 0x0235(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQDC[0x2];                                   // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverCollisionFilterSettings                      CollisionFilterSettings;                                 // 0x0238(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateBreakingData;                                  // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99H8[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverBreakingFilterSettings                       BreakingFilterSettings;                                  // 0x024C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateTrailingData;                                  // 0x025C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D1H[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverTrailingFilterSettings                       TrailingFilterSettings;                                  // 0x0260(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasFloor;                                               // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMZ5[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorHeight;                                             // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateContactGraph;                                   // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosDebugSubstepControl                           ChaosDebugSubstepControl;                                // 0x027D(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3ZP[0x18];                                  // 0x0288(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosGameplayEventDispatcher*                       GameplayEventDispatcherComponent;                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSolverActive(bool bActive);
		void SetAsCurrentWorldSolver();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverSettings
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UChaosSolverSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_TZ0G[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      DefaultChaosSolverActorClass;                            // 0x0040(0x0018) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
