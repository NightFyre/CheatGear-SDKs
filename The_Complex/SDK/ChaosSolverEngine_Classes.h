#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
		unsigned char                                              UnknownData_LA8G[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_7QWV[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosGameplayEventDispatcher
	 * Size -> 0x0210 (FullSize[0x02C8] - InheritedSize[0x00B8])
	 */
	class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
	{
	public:
		unsigned char                                              UnknownData_MZYP[0x110];                                 // 0x00B8(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, struct FChaosHandlerSet>  CollisionEventRegistrations;                             // 0x01C8(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                 // 0x0218(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                               // 0x0268(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XPWC[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (PADDING)

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
	 * Size -> 0x0100 (FullSize[0x0378] - InheritedSize[0x0278])
	 */
	class AChaosSolverActor : public AActor
	{
	public:
		struct FChaosSolverConfiguration                           Properties;                                              // 0x0278(0x006C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeStepMultiplier;                                      // 0x02E4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionIterations;                                     // 0x02E8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutIterations;                                       // 0x02EC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutPairIterations;                                   // 0x02F0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterConnectionFactor;                                 // 0x02F4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterUnionConnectionType;                              // 0x02F8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateCollisionData;                                 // 0x02F9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWQL[0x2];                                   // 0x02FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverCollisionFilterSettings                      CollisionFilterSettings;                                 // 0x02FC(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateBreakingData;                                  // 0x030C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F79D[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverBreakingFilterSettings                       BreakingFilterSettings;                                  // 0x0310(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateTrailingData;                                  // 0x0320(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_726J[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverTrailingFilterSettings                       TrailingFilterSettings;                                  // 0x0324(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x0334(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateContactGraph;                                   // 0x0338(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasFloor;                                               // 0x0339(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRZ1[0x2];                                   // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorHeight;                                             // 0x033C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosDebugSubstepControl                           ChaosDebugSubstepControl;                                // 0x0340(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ENO[0x5];                                   // 0x0343(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BL9[0x18];                                  // 0x0350(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosGameplayEventDispatcher*                       GameplayEventDispatcherComponent;                        // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D4I4[0x8];                                   // 0x0370(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_KSVU[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      DefaultChaosSolverActorClass;                            // 0x0040(0x0018) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
