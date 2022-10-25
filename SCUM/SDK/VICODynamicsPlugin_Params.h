#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	 */
	struct UBaseVDComponent_SetUseExplicitRigidBodyCollision_Params
	{
	public:
		bool                                                       UseExplicitCollision;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	 */
	struct UBaseVDComponent_SetAffectedByGlobalWind_Params
	{
	public:
		bool                                                       IsAffected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.OnSync
	 */
	struct UBaseVDComponent_OnSync_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	 */
	struct UBaseVDComponent_GetTensionConstraintCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
	 */
	struct UBaseVDComponent_GetParticleBuildInfo_Params
	{
	public:
		TArray<struct FVDParticleInfo>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	 */
	struct UBaseVDComponent_GetLastAppliedForceFromTensionConstraint_Params
	{
	public:
		int32_t                                                    TensionConstraintIndex;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
	 */
	struct UBaseVDComponent_AttachToOverlappingRigidBodies_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
	 */
	struct UVDBlueprintFunctionLibrary_GetVICODynamicsSimulationInstance_Params
	{
	public:
		class UVDSimulation*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	 */
	struct UVDRopeComponent_SetNewRestLengthStartingAtParticle_Params
	{
	public:
		int32_t                                                    ParticleIndexStart;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewLength;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	 */
	struct UVDRopeComponent_SetNewRestLength_Params
	{
	public:
		float                                                      NewLength;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PieceIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.ResetRope
	 */
	struct UVDRopeComponent_ResetRope_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	 */
	struct UVDRopeComponent_GetTrueLength_Params
	{
	public:
		int32_t                                                    PieceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.GetPieces
	 */
	struct UVDRopeComponent_GetPieces_Params
	{
	public:
		TArray<struct FRopePiece>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP
	 */
	struct UVDRopeComponent_CreateRopeGeometry_BP_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
	 */
	struct UVDRopeComponent_BreakAtSegment_Params
	{
	public:
		int32_t                                                    SegmentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
	 */
	struct UVDDynamicRopeComponent_RebuildRopeAttached_Params
	{
	public:
		float                                                      DistancePerSegment;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R49M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     StartAttachedTo;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSocket;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       StartSimulateTension;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSSL[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     EndAttachedTo;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EndSocket;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       EndSimulateTension;                                      // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
	 */
	struct UVDDynamicRopeComponent_RebuildRopeAtPoints_Params
	{
	public:
		float                                                      DistancePerSegment;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndLocation;                                             // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRelativeLocations;                                      // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
	 */
	struct UVDDynamicRopeComponent_RebuildRope_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	 */
	struct UVDMeshClothComponent_GetVolumeConstraint_Params
	{
	public:
		class UVDMeshVolumeConstraint*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	 */
	struct UVDMeshClothComponent_GetStretchConstraintsArray_Params
	{
	public:
		TArray<class UVDParticleSpringConstraint*>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
	 */
	struct UVDMeshClothComponent_GetBendConstraintsArray_Params
	{
	public:
		TArray<class UVDParticleSpringConstraint*>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
	 */
	struct UVDMeshVolumeConstraint_SetRestVolume_Params
	{
	public:
		float                                                      NewVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
	 */
	struct UVDMeshVolumeConstraint_GetRestVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
	 */
	struct UVDMeshVolumeConstraint_GetCurrentVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
	 */
	struct UVDParticleSpringConstraint_SetStiffness_Params
	{
	public:
		float                                                      NewStiffness;                                            // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
	 */
	struct UVDParticleSpringConstraint_SetRestDistance_Params
	{
	public:
		float                                                      NewRestDistance;                                         // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
	 */
	struct UVDParticleSpringConstraint_IsConstraining_Params
	{
	public:
		class UVDSimulatedParticle*                                Particle1;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVDSimulatedParticle*                                Particle2;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
	 */
	struct UVDParticleSpringConstraint_GetStifffness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
	 */
	struct UVDParticleSpringConstraint_GetRestDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
	 */
	struct UVDParticleSpringConstraint_GetParticle2_Params
	{
	public:
		class UVDSimulatedParticle*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
	 */
	struct UVDParticleSpringConstraint_GetParticle1_Params
	{
	public:
		class UVDSimulatedParticle*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
	 */
	struct UVDSimulatedObject_SetSkipRelativeVelocityCheckDuringCollision_Params
	{
	public:
		bool                                                       Skip;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
	 */
	struct UVDSimulatedObject_SetObjectType_Params
	{
	public:
		ECollisionChannel                                          ObjectType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
	 */
	struct UVDSimulatedObject_SetMinimumConstraintSatisfactionDistance_Params
	{
	public:
		float                                                      MinDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
	 */
	struct UVDSimulatedObject_SetGravityScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
	 */
	struct UVDSimulatedObject_SetCollisionResponseToObjectType_Params
	{
	public:
		ECollisionChannel                                          ObjectType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionResponse                                         Response;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
	 */
	struct UVDSimulatedObject_SetCollisionEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
	 */
	struct UVDSimulatedObject_SetCollisionChannel_Params
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
	 */
	struct UVDSimulatedObject_SetAffectiveWindVector_Params
	{
	public:
		struct FVector                                             NewWindVector;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
	 */
	struct UVDSimulatedObject_GetSpringConstraints_Params
	{
	public:
		TArray<class UVDParticleSpringConstraint*>                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
	 */
	struct UVDSimulatedObject_GetSkipRelativeVelocityCheckDuringCollision_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
	 */
	struct UVDSimulatedObject_GetParticles_Params
	{
	public:
		TArray<class UVDSimulatedParticle*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
	 */
	struct UVDSimulatedObject_GetMinimumConstraintSatisfactionDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
	 */
	struct UVDSimulatedObject_GetGravityScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
	 */
	struct UVDSimulatedObject_GetCollisionSettings_Params
	{
	public:
		struct FVDCollisionSettings                                ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
	 */
	struct UVDSimulatedObject_GetCollisionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
	 */
	struct UVDSimulatedObject_GetAffectiveWindVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
	 */
	struct UVDSimulatedObject_DestroyVolumeConstraint_Params
	{
	public:
		class UVDMeshVolumeConstraint*                             Constraint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
	 */
	struct UVDSimulatedObject_DestroyParticle_Params
	{
	public:
		class UVDSimulatedParticle*                                Particle;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
	 */
	struct UVDSimulatedObject_DestroyConstraint_Params
	{
	public:
		class UVDParticleSpringConstraint*                         Constraint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
	 */
	struct UVDSimulatedObject_CreateVolumeConstraint_Params
	{
	public:
		TArray<int32_t>                                            IndexList;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      Alpha;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RestVolume;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVDMeshVolumeConstraint*                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
	 */
	struct UVDSimulatedObject_CreateSpringConstraint_Params
	{
	public:
		class UVDSimulatedParticle*                                Particle1;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVDSimulatedParticle*                                Particle2;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RestDistance;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Stiffness;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVDParticleSpringConstraint*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
	 */
	struct UVDSimulatedObject_CreateParticle_Params
	{
	public:
		struct FVDParticleInfo                                     ParticleInfo;                                            // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NV2J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVDSimulatedParticle*                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	 */
	struct UVDSimulatedParticle_SetVelocity_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	 */
	struct UVDSimulatedParticle_SetRestitutionCoefficient_Params
	{
	public:
		float                                                      NewRestitutionCoefficient;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	 */
	struct UVDSimulatedParticle_SetRadius_Params
	{
	public:
		float                                                      NewRadius;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
	 */
	struct UVDSimulatedParticle_SetMass_Params
	{
	public:
		float                                                      NewMass;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	 */
	struct UVDSimulatedParticle_SetLocation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	 */
	struct UVDSimulatedParticle_SetIsWindOccluded_Params
	{
	public:
		bool                                                       IsOccluded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	 */
	struct UVDSimulatedParticle_SetIsRigidBodyCollisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	 */
	struct UVDSimulatedParticle_SetIsParticleCollisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	 */
	struct UVDSimulatedParticle_SetIsFree_Params
	{
	public:
		bool                                                       IsFree;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	 */
	struct UVDSimulatedParticle_SetFrictionCoefficient_Params
	{
	public:
		float                                                      NewFrictionCoefficient;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	 */
	struct UVDSimulatedParticle_SetDragCoefficient_Params
	{
	public:
		float                                                      NewDragCoefficient;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	 */
	struct UVDSimulatedParticle_GetVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	 */
	struct UVDSimulatedParticle_GetRestitutionCoefficient_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	 */
	struct UVDSimulatedParticle_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
	 */
	struct UVDSimulatedParticle_GetMass_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	 */
	struct UVDSimulatedParticle_GetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	 */
	struct UVDSimulatedParticle_GetIsWindOccluded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	 */
	struct UVDSimulatedParticle_GetIsRigidBodyCollisionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	 */
	struct UVDSimulatedParticle_GetIsParticleCollisionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	 */
	struct UVDSimulatedParticle_GetIsFree_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	 */
	struct UVDSimulatedParticle_GetFrictionCoefficient_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	 */
	struct UVDSimulatedParticle_GetDragCoefficient_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	 */
	struct UVDSimulatedParticle_GetAttachment_Params
	{
	public:
		struct FVDParticleAttachment                               OutAttachment;                                           // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.Detach
	 */
	struct UVDSimulatedParticle_Detach_Params
	{	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	 */
	struct UVDSimulatedParticle_CopyAttachment_Params
	{
	public:
		struct FVDParticleAttachment                               attachment;                                              // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       UseCurrentMass;                                          // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	 */
	struct UVDSimulatedParticle_AttachToLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRelative;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	 */
	struct UVDSimulatedParticle_AttachToComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SimulateTension;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KVN2[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Socket;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	 */
	struct UVDSimulatedParticle_AttachToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SimulateTension;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_72UO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Socket;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
	 */
	struct UVDSimulatedParticle_AddForce_Params
	{
	public:
		struct FVector                                             force;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
	 */
	struct UVDSimulation_SetSubstepCount_Params
	{
	public:
		int32_t                                                    SubstepCount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	 */
	struct UVDSimulation_SetSelfCollisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	 */
	struct UVDSimulation_SetPhysXSceneCollisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	 */
	struct UVDSimulation_SetPerFrameCollisionCacheEnable_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	 */
	struct UVDSimulation_SetPerformExtraCollisionResolutionLoop_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	 */
	struct UVDSimulation_SetIsExplicitRigidBodyCollisionEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetFrameRate
	 */
	struct UVDSimulation_SetFrameRate_Params
	{
	public:
		int32_t                                                    FrameRate;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	 */
	struct UVDSimulation_SetConstraintIterationCount_Params
	{
	public:
		int32_t                                                    ConstraintIterationCount;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	 */
	struct UVDSimulation_SetConstrainSimulationTo2DPlane_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	 */
	struct UVDSimulation_SetConstrainPlaneOrigin_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	 */
	struct UVDSimulation_SetConstrainPlaneNormal_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	 */
	struct UVDSimulation_RemoveExplicitColliderMapping_Params
	{
	public:
		class UBaseVDComponent*                                    VDComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Collider;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	 */
	struct UVDSimulation_RemoveAllExplicitColliderMappings_Params
	{
	public:
		class UBaseVDComponent*                                    VDComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	 */
	struct UVDSimulation_k2QuerySphereOverlaps_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVDSimulatedParticle*>                        Overlaps;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UVDSimulatedObject*>                          SimObjectsToIgnore;                                      // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    MaxOverlaps;                                             // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	 */
	struct UVDSimulation_k2QueryBoxOverlaps_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HalfExtents;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVDSimulatedParticle*>                        Overlaps;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UVDSimulatedObject*>                          SimObjectsToIgnore;                                      // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    MaxOverlaps;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.GetSettings
	 */
	struct UVDSimulation_GetSettings_Params
	{
	public:
		struct FVDSettings                                         ReturnValue;                                             // 0x0000(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	 */
	struct UVDSimulation_GetIsRunningOnWorkerThread_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	 */
	struct UVDSimulation_GetIsExplicitRigidBodyCollisionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	 */
	struct UVDSimulation_GetDirectionalWindParameters_Params
	{
	public:
		class UBaseVDComponent*                                    VDComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutDirection;                                            // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutSpeed;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutGust;                                                 // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
	 */
	struct UVDSimulation_AddExplicitColliderMapping_Params
	{
	public:
		class UBaseVDComponent*                                    VDComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Collider;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreConvexShapes;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
	 */
	struct AVDSimulationSettingsActor_GetSettings_Params
	{
	public:
		struct FVDSettings                                         ReturnValue;                                             // 0x0000(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	 */
	struct UVDWindDirectionalSourceComponent_SetRadius_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
	 */
	struct UVDWindDirectionalSourceComponent_GetCurrentGust_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
