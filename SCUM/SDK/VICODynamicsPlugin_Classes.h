#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Class VICODynamicsPlugin.BaseVDComponent
	 * Size -> 0x0200 (FullSize[0x0678] - InheritedSize[0x0478])
	 */
	class UBaseVDComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_7G8Z[0x8];                                   // 0x0478(0x0008) Fix Super Size
		class UVDSimulation*                                       SimulationInstance;                                      // 0x0480(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVDSimulatedObject*                                  VDSimObject;                                             // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UVDSimulatedParticle*>                        Particles;                                               // 0x0490(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      FrictionCoefficient;                                     // 0x04A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RestitutionCoefficient;                                  // 0x04A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVDCollisionSettings                                CollisionSettings;                                       // 0x04A8(0x0040) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      ParticleRadius;                                          // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachToRigids;                                          // 0x04EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachToParticles;                                       // 0x04ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7HU[0x2];                                   // 0x04EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttachToParticlesConstraintStiffness;                    // 0x04F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x04F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DetectionRadiusInflationFactor;                          // 0x04F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateTensionConstraintsForSimulatingRigids;             // 0x04FC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToSimulatingAttachment;                             // 0x04FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ManuallyAttachParticles;                                 // 0x04FE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CQT[0x1];                                   // 0x04FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVDParticleAttachment>                       ParticleAttachments;                                     // 0x0500(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TensionForce;                                            // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TensionDampening;                                        // 0x0514(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdjustOtherParticleLocationsBasedOnAttachments : 1;      // 0x0518(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AffectedByGlobalWind : 1;                                // 0x0518(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UseExplicitRigidBodyCollision : 1;                       // 0x0518(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVJL[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindResistance;                                          // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FComponentReference>                         AffectedByWindSources;                                   // 0x0520(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CheckForWindOccluders;                                   // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WFQ[0x3];                                   // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWindOccluderDistance;                                 // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVDCollisionSettings                                WindOccluderTraceSettings;                               // 0x0538(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimulationDataCreated;                                 // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSimulationSync;                                        // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              ShowParticles : 1;                                       // 0x0598(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QE93[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale;                                            // 0x059C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinConstraintDistance;                                   // 0x05A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SimulateOnlyWhenRendered;                                // 0x05A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L0Q5[0x3];                                   // 0x05A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimulationToggleThreshold;                               // 0x05A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              EnableParticleToParticleCollisions : 1;                  // 0x05AC(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ConsiderInnerCollisions : 1;                             // 0x05AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              SkipRelativeVelocityCheckDuringRigidBodyCollisions : 1;  // 0x05AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RB55 : 5;                                    // 0x05AC(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bNotifyOnVDCollision : 1;                                // 0x05AD(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGZD[0x2];                                   // 0x05AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnVDCollisionEvent;                                      // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class UVDSimulatedParticle*, struct FVDCollision>     PendingCollisionNotifications;                           // 0x05C0(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W5ML[0x20];                                  // 0x0610(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVDParticleSpringConstraint*>                 ConstraintsToOtherParticles;                             // 0x0630(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NHRH[0x20];                                  // 0x0640(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseLocationCache : 1;                                   // 0x0660(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyCachedStartLocationBeforeAttachToRigids : 1;       // 0x0660(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2AQO[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVDCachedParticleStartLocation>              CachedStartLocations;                                    // 0x0668(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision);
		void SetAffectedByGlobalWind(bool IsAffected);
		void OnSync();
		int32_t GetTensionConstraintCount();
		TArray<struct FVDParticleInfo> GetParticleBuildInfo();
		struct FVector GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex);
		void AttachToOverlappingRigidBodies();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UVDSimulation* GetVICODynamicsSimulationInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDColliderComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UVDColliderComponent : public UActorComponent
	{
	public:
		class UVDSimulation*                                       SimulationInstance;                                      // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FComponentReference>                         AssociatedVDComponents;                                  // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bAddAllComponents : 1;                                   // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreConvexShapes : 1;                                 // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9ZV[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SpecificColliders;                                       // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDRopeComponent
	 * Size -> 0x0080 (FullSize[0x06F8] - InheritedSize[0x0678])
	 */
	class UVDRopeComponent : public UBaseVDComponent
	{
	public:
		unsigned char                                              UnknownData_CS67[0x4];                                   // 0x0678(0x0004) Fix Super Size
		float                                                      BendStiffness;                                           // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x0690(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnforceStrictLength;                                    // 0x0694(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69WY[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSides;                                                // 0x0698(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterial;                                            // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VS8[0x20];                                  // 0x06A0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVDParticleSpringConstraint*>                 StretchConstraints;                                      // 0x06C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UVDParticleSpringConstraint*>                 BendConstraints;                                         // 0x06D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FRopePiece>                                  Pieces;                                                  // 0x06E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IPAT[0x8];                                   // 0x06F0(0x0008) Fix size for supers

	public:
		void SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength);
		void SetNewRestLength(float NewLength, int32_t PieceIndex);
		void ResetRope();
		float GetTrueLength(int32_t PieceIndex);
		TArray<struct FRopePiece> GetPieces();
		void CreateRopeGeometry_BP();
		void BreakAtSegment(int32_t SegmentIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDDynamicRopeComponent
	 * Size -> 0x0008 (FullSize[0x0700] - InheritedSize[0x06F8])
	 */
	class UVDDynamicRopeComponent : public UVDRopeComponent
	{
	public:
		unsigned char                                              UnknownData_ZE3V[0x8];                                   // 0x06F8(0x0008) Fix Super Size

	public:
		void RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, const class FName& StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, const class FName& EndSocket, bool EndSimulateTension);
		void RebuildRopeAtPoints(float DistancePerSegment, const struct FVector& StartLocation, const struct FVector& EndLocation, bool bRelativeLocations);
		void RebuildRope();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDMeshClothComponent
	 * Size -> 0x00E8 (FullSize[0x0760] - InheritedSize[0x0678])
	 */
	class UVDMeshClothComponent : public UBaseVDComponent
	{
	public:
		class UStaticMesh*                                         HullMesh;                                                // 0x0678(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchStiffness;                                        // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendStiffness;                                           // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreserveVolume;                                          // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESE0[0x3];                                   // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentVolume;                                           // 0x0694(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideRestVolume;                                      // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJGN[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UseVertexColorDataForSetup : 1;                          // 0x06A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFHW[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBendConstraintDistance;                               // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SS8C[0x28];                                  // 0x06A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVDParticleSpringConstraint*>                 StretchConstraints;                                      // 0x06D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UVDParticleSpringConstraint*>                 BendConstraints;                                         // 0x06E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UVDMeshVolumeConstraint*                             VolumeConstraint;                                        // 0x06F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7MC2[0x68];                                  // 0x06F8(0x0068) MISSED OFFSET (PADDING)

	public:
		class UVDMeshVolumeConstraint* GetVolumeConstraint();
		TArray<class UVDParticleSpringConstraint*> GetStretchConstraintsArray();
		TArray<class UVDParticleSpringConstraint*> GetBendConstraintsArray();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDMeshVolumeConstraint
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVDMeshVolumeConstraint : public UObject
	{
	public:
		unsigned char                                              UnknownData_TA3U[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRestVolume(float NewVolume);
		float GetRestVolume();
		float GetCurrentVolume();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDParticleSpringConstraint
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVDParticleSpringConstraint : public UObject
	{
	public:
		unsigned char                                              UnknownData_S24V[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStiffness(float NewStiffness);
		void SetRestDistance(float NewRestDistance);
		bool IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2);
		float GetStifffness();
		float GetRestDistance();
		class UVDSimulatedParticle* GetParticle2();
		class UVDSimulatedParticle* GetParticle1();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDProceduralClothComponent
	 * Size -> 0x0078 (FullSize[0x06F0] - InheritedSize[0x0678])
	 */
	class UVDProceduralClothComponent : public UBaseVDComponent
	{
	public:
		unsigned char                                              UnknownData_OHNH[0x4];                                   // 0x0678(0x0004) Fix Super Size
		float                                                      BendStiffness;                                           // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumParticlesWide;                                        // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumParticlesHigh;                                        // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterialAlongWidth;                                  // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterialAlongHeight;                                 // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8MK[0x20];                                  // 0x06A0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVDParticleSpringConstraint*>                 StretchConstraints;                                      // 0x06C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UVDParticleSpringConstraint*>                 BendConstraints;                                         // 0x06D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6R14[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSimulatedObject
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UVDSimulatedObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_JVT9[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetSkipRelativeVelocityCheckDuringCollision(bool Skip);
		void SetObjectType(ECollisionChannel ObjectType);
		void SetMinimumConstraintSatisfactionDistance(float MinDistance);
		void SetGravityScale(float Scale);
		void SetCollisionResponseToObjectType(ECollisionChannel ObjectType, ECollisionResponse Response);
		void SetCollisionEnabled(bool Enabled);
		void SetCollisionChannel(ECollisionChannel Channel);
		void SetAffectiveWindVector(const struct FVector& NewWindVector);
		TArray<class UVDParticleSpringConstraint*> GetSpringConstraints();
		bool GetSkipRelativeVelocityCheckDuringCollision();
		TArray<class UVDSimulatedParticle*> GetParticles();
		float GetMinimumConstraintSatisfactionDistance();
		float GetGravityScale();
		struct FVDCollisionSettings GetCollisionSettings();
		bool GetCollisionEnabled();
		struct FVector GetAffectiveWindVector();
		void DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint);
		void DestroyParticle(class UVDSimulatedParticle* Particle);
		void DestroyConstraint(class UVDParticleSpringConstraint* Constraint);
		class UVDMeshVolumeConstraint* CreateVolumeConstraint(TArray<int32_t> IndexList, float Alpha, float RestVolume);
		class UVDParticleSpringConstraint* CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness);
		class UVDSimulatedParticle* CreateParticle(const struct FVDParticleInfo& ParticleInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSimulatedParticle
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UVDSimulatedParticle : public UObject
	{
	public:
		bool                                                       IsAttached;                                              // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O03P[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVDParticleAttachment                               attachment;                                              // 0x0030(0x0060) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VRQ[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetVelocity(const struct FVector& NewVelocity);
		void SetRestitutionCoefficient(float NewRestitutionCoefficient);
		void SetRadius(float NewRadius);
		void SetMass(float NewMass);
		void SetLocation(const struct FVector& NewLocation);
		void SetIsWindOccluded(bool IsOccluded);
		void SetIsRigidBodyCollisionEnabled(bool IsEnabled);
		void SetIsParticleCollisionEnabled(bool IsEnabled);
		void SetIsFree(bool IsFree);
		void SetFrictionCoefficient(float NewFrictionCoefficient);
		void SetDragCoefficient(float NewDragCoefficient);
		struct FVector GetVelocity();
		float GetRestitutionCoefficient();
		float GetRadius();
		float GetMass();
		struct FVector GetLocation();
		bool GetIsWindOccluded();
		bool GetIsRigidBodyCollisionEnabled();
		bool GetIsParticleCollisionEnabled();
		bool GetIsFree();
		float GetFrictionCoefficient();
		float GetDragCoefficient();
		bool GetAttachment(struct FVDParticleAttachment* OutAttachment);
		void Detach();
		void CopyAttachment(const struct FVDParticleAttachment& attachment, bool UseCurrentMass);
		bool AttachToLocation(const struct FVector& Location, bool IsRelative);
		bool AttachToComponent(class UPrimitiveComponent* Component, const struct FVector& Location, bool SimulateTension, const class FName& Socket);
		bool AttachToActor(class AActor* Actor, const struct FVector& Location, bool SimulateTension, const class FName& Socket);
		void AddForce(const struct FVector& force);
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSimulation
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class UVDSimulation : public UObject
	{
	public:
		unsigned char                                              UnknownData_P5EU[0x130];                                 // 0x0028(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVDWindDirectionalSourceComponent*>           WindSources;                                             // 0x0158(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetSubstepCount(int32_t SubstepCount);
		void SetSelfCollisionEnabled(bool IsEnabled);
		void SetPhysXSceneCollisionEnabled(bool IsEnabled);
		void SetPerFrameCollisionCacheEnable(bool IsEnabled);
		void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);
		void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);
		void SetFrameRate(int32_t FrameRate);
		void SetConstraintIterationCount(int32_t ConstraintIterationCount);
		void SetConstrainSimulationTo2DPlane(bool IsEnabled);
		void SetConstrainPlaneOrigin(const struct FVector& Origin);
		void SetConstrainPlaneNormal(const struct FVector& Normal);
		void RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider);
		void RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent);
		bool k2QuerySphereOverlaps(const struct FVector& Location, float Radius, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps);
		bool k2QueryBoxOverlaps(const struct FVector& Location, const struct FVector& HalfExtents, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps);
		struct FVDSettings GetSettings();
		bool GetIsRunningOnWorkerThread();
		bool GetIsExplicitRigidBodyCollisionEnabled();
		void GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, struct FVector* OutDirection, float* OutSpeed, float* OutGust);
		void AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes);
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSimulationSettingsActor
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AVDSimulationSettingsActor : public AInfo
	{
	public:
		struct FVDSettings                                         Settings;                                                // 0x0220(0x0044) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_355E[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FVDSettings GetSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSkinnedRopeComponent
	 * Size -> 0x0038 (FullSize[0x0730] - InheritedSize[0x06F8])
	 */
	class UVDSkinnedRopeComponent : public UVDRopeComponent
	{
	public:
		struct FComponentReference                                 PoseableMeshRef;                                         // 0x06F8(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UQ4V[0x10];                                  // 0x0720(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDSplineRopeComponent
	 * Size -> 0x0038 (FullSize[0x0730] - InheritedSize[0x06F8])
	 */
	class UVDSplineRopeComponent : public UVDRopeComponent
	{
	public:
		struct FComponentReference                                 SplineRef;                                               // 0x06F8(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bAutoAttachToSplineEndPoints : 1;                        // 0x0720(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStretchToSplineLength : 1;                              // 0x0720(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7KJ5[0x3];                                   // 0x0721(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SplineLength;                                            // 0x0724(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JCHL[0x8];                                   // 0x0728(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDWindDirectionalSourceActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AVDWindDirectionalSourceActor : public AInfo
	{
	public:
		class UVDWindDirectionalSourceComponent*                   Component;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VDWindDirectionalSourceComponent
	 * Size -> 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
	 */
	class UVDWindDirectionalSourceComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_C3O1[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      Strength;                                                // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGustAmount;                                           // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGustAmount;                                           // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGustDuration;                                         // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGustDuration;                                         // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGustTransitionSpeed;                                  // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGustTransitionSpeed;                                  // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSecondsBetweenGusts;                                  // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSecondsBetweenGusts;                                  // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHR6[0x1C];                                  // 0x0224(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		float GetCurrentGust();
		static UClass* StaticClass();
	};

	/**
	 * Class VICODynamicsPlugin.VICODynamicsSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UVICODynamicsSettings : public UObject
	{
	public:
		int32_t                                                    ReserveParticleBudget;                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfThreadsToUse;                                    // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSelfCollision;                                     // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnablePhysXSceneCollision;                               // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerformExtraCollisionResolutionLoop;                     // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableExplicitRigidBodyCollision;                        // 0x0033(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationFramerate;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunSimulationOnWorkerThread;                             // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7D2[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WorkerThreadCoreAffinity;                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationIterations;                                    // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConstraintIterations;                                    // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConstrainSimulationTo2DPlane;                            // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHIP[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlaneOrigin;                                             // 0x004C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlaneNormal;                                             // 0x0058(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCachePerFrameResults : 1;                               // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCacheOnlyCollisionsWithStaticRigidBodies : 1;           // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCacheNonHitsAlso : 1;                                   // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawCollisionDebug : 1;                                  // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowOnScreenStats : 1;                                  // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPZZ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
