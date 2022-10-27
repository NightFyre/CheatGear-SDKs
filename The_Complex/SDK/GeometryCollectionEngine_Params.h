#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	 */
	struct UChaosDestructionListener_SortTrailingEvents_Params
	{
	public:
		TArray<struct FChaosTrailingEventData>                     TrailingEvents;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosTrailingSortMethod                                   SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	 */
	struct UChaosDestructionListener_SortRemovalEvents_Params
	{
	public:
		TArray<struct FChaosRemovalEventData>                      RemovalEvents;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosRemovalSortMethod                                    SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	 */
	struct UChaosDestructionListener_SortCollisionEvents_Params
	{
	public:
		TArray<struct FChaosCollisionEventData>                    CollisionEvents;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosCollisionSortMethod                                  SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	 */
	struct UChaosDestructionListener_SortBreakingEvents_Params
	{
	public:
		TArray<struct FChaosBreakingEventData>                     BreakingEvents;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosBreakingSortMethod                                   SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	 */
	struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
	{
	public:
		struct FChaosTrailingEventRequestSettings                  InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	 */
	struct UChaosDestructionListener_SetTrailingEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	 */
	struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
	{
	public:
		struct FChaosRemovalEventRequestSettings                   InSettings;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	 */
	struct UChaosDestructionListener_SetRemovalEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	 */
	struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
	{
	public:
		struct FChaosCollisionEventRequestSettings                 InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	 */
	struct UChaosDestructionListener_SetCollisionEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	 */
	struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
	{
	public:
		struct FChaosBreakingEventRequestSettings                  InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	 */
	struct UChaosDestructionListener_SetBreakingEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	 */
	struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
	{
	public:
		class AGeometryCollectionActor*                            GeometryCollectionActor;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	 */
	struct UChaosDestructionListener_RemoveChaosSolverActor_Params
	{
	public:
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	 */
	struct UChaosDestructionListener_IsEventListening_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	 */
	struct UChaosDestructionListener_AddGeometryCollectionActor_Params
	{
	public:
		class AGeometryCollectionActor*                            GeometryCollectionActor;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	 */
	struct UChaosDestructionListener_AddChaosSolverActor_Params
	{
	public:
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	 */
	struct AGeometryCollectionActor_RaycastSingle_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHit;                                                  // 0x0030(0x00E8)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	 */
	struct UGeometryCollectionComponent_SetNotifyRemovals_Params
	{
	public:
		bool                                                       bNewNotifyRemovals;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	 */
	struct UGeometryCollectionComponent_SetNotifyBreaks_Params
	{
	public:
		bool                                                       bNewNotifyBreaks;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	 */
	struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
	{
	public:
		struct FChaosPhysicsCollisionInfo                          CollisionInfo;                                           // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	 */
	struct UGeometryCollectionComponent_OnRep_RepData_Params
	{
	public:
		struct FGeometryCollectionRepData                          OldData;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	 */
	struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
	{
	public:
		class UGeometryCollectionComponent*                        FracturedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	 */
	struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
	{
	public:
		class UGeometryCollectionComponent*                        FracturedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	 */
	struct UGeometryCollectionComponent_NetAbandonCluster_Params
	{
	public:
		int32_t                                                    TransformIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	 */
	struct UGeometryCollectionComponent_ApplyPhysicsField_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGeometryCollectionPhysicsTypeEnum                         Target;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AIA8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFieldSystemMetaData*                                MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFieldNodeBase*                                      Field;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	 */
	struct UGeometryCollectionComponent_ApplyKinematicField_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AACO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             position;                                                // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
