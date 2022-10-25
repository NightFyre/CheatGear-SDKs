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
	 * Class Foliage.FoliageInstancedStaticMeshComponent
	 * Size -> 0x0028 (FullSize[0x07C0] - InheritedSize[0x0798])
	 */
	class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
	{
	public:
		class FScriptMulticastDelegate                             OnInstanceTakePointDamage;                               // 0x0798(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnInstanceTakeRadialDamage;                              // 0x07A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_3V4M[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageStatistics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFoliageStatistics : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
		int32_t STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType
	 * Size -> 0x0338 (FullSize[0x0360] - InheritedSize[0x0028])
	 */
	class UFoliageType : public UObject
	{
	public:
		struct FGuid                                               UpdateGuid;                                              // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Density;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DensityAdjustmentFactor;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFoliageScaling                                            Scaling;                                                 // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8736[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ScaleX;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatInterval                                      ScaleY;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EFoliageVertexColorMask                                    VertexColorMask;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_6QEG[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VertexColorMaskThreshold;                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              VertexColorMaskInvert : 1;                               // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_0Y7A[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ZOffset;                                                 // 0x006C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              AlignToNormal : 1;                                       // 0x0074(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_UHI2[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignMaxAngle;                                           // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RandomYaw : 1;                                           // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_QYZT[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomPitchAngle;                                        // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatInterval                                      GroundSlopeAngle;                                        // 0x0084(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatInterval                                      Height;                                                  // 0x008C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ODE1[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LandscapeLayers;                                         // 0x0098(0x0010) Edit, ZeroConstructor, AdvancedDisplay
		class FName                                                LandscapeLayer;                                          // 0x00A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CollisionWithWorld : 1;                                  // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_VNSG[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CollisionScale;                                          // 0x00B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      MinimumLayerWeight;                                      // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FBoxSphereBounds                                    MeshBounds;                                              // 0x00C4(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LowBoundOriginRadius;                                    // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		EComponentMobility                                         Mobility;                                                // 0x00EC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NN49[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInt32Interval                                      CullDistance;                                            // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bEnableStaticLighting : 1;                               // 0x00F8(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              CastShadow : 1;                                          // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bAffectDynamicIndirectLighting : 1;                      // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bAffectDistanceFieldLighting : 1;                        // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bCastDynamicShadow : 1;                                  // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bCastStaticShadow : 1;                                   // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              bCastShadowAsTwoSided : 1;                               // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              bReceivesDecals : 1;                                     // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              bOverrideLightMapRes : 1;                                // 0x00F9(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_DB10[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverriddenLightMapRes;                                   // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bUseAsOccluder : 1;                                      // 0x0100(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_NRTY[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0108(0x0180) Edit
		EHasCustomNavigableGeometry                                CustomNavigableGeometry;                                 // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VNX3[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   HiddenEditorViews;                                       // 0x0290(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IsSelected : 1;                                          // 0x0298(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_W480[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionRadius;                                         // 0x029C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadeRadius;                                             // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumSteps;                                                // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialSeedDensity;                                      // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AverageSpreadDistance;                                   // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpreadVariance;                                          // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SeedsPerStep;                                            // 0x02B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DistributionSeed;                                        // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxInitialSeedOffset;                                    // 0x02BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanGrowInShade;                                         // 0x02C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSpawnsInShade;                                          // 0x02C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VIQ2[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxInitialAge;                                           // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAge;                                                  // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverlapPriority;                                         // 0x02CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatInterval                                      ProceduralScale;                                         // 0x02D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRuntimeFloatCurve                                  ScaleCurve;                                              // 0x02D8(0x0080) Edit
		int32_t                                                    ChangeCount;                                             // 0x0358(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ReapplyDensity : 1;                                      // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyRadius : 1;                                       // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyAlignToNormal : 1;                                // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyRandomYaw : 1;                                    // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyScaling : 1;                                      // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyScaleX : 1;                                       // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyScaleY : 1;                                       // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyScaleZ : 1;                                       // 0x035C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyRandomPitchAngle : 1;                             // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyGroundSlope : 1;                                  // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyHeight : 1;                                       // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyLandscapeLayers : 1;                              // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyZOffset : 1;                                      // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyCollisionWithWorld : 1;                           // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              ReapplyVertexColorMask : 1;                              // 0x035D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_G7LS[0x2];                                   // 0x035E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType_InstancedStaticMesh
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class UFoliageType_InstancedStaticMesh : public UFoliageType
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0368(0x0010) Edit, ZeroConstructor, AdvancedDisplay
		class UClass*                                              ComponentClass;                                          // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InstancedFoliageActor
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class AInstancedFoliageActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_4N6G[0x50];                                  // 0x03C8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageActor
	 * Size -> 0x0060 (FullSize[0x0438] - InheritedSize[0x03D8])
	 */
	class AInteractiveFoliageActor : public AStaticMeshActor
	{
	public:
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TouchingActorEntryPosition;                              // 0x03E0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             FoliageVelocity;                                         // 0x03EC(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             FoliageForce;                                            // 0x03F8(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             FoliagePosition;                                         // 0x0404(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      FoliageDamageImpulseScale;                               // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageTouchImpulseScale;                                // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageStiffness;                                        // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageStiffnessQuadratic;                               // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageDamping;                                          // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDamageImpulse;                                        // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTouchImpulse;                                         // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxForce;                                                // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Mass;                                                    // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2YC4[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (PADDING)

	public:
		void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageComponent
	 * Size -> 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
	 */
	class UInteractiveFoliageComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_6ANO[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageBlockingVolume
	 * Size -> 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
	 */
	class AProceduralFoliageBlockingVolume : public FEngine_AVolume
	{
	public:
		class AProceduralFoliageVolume*                            ProceduralFoliageVolume;                                 // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UProceduralFoliageComponent : public UActorComponent
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TileOverlap;                                             // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8QZ3[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVolume*                                             SpawningVolume;                                          // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ProceduralGuid;                                          // 0x00E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageSpawner
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageSpawner : public UObject
	{
	public:
		int32_t                                                    RandomSeed;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TileSize;                                                // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumUniqueTiles;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DKG9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFoliageTypeObject>                          FoliageTypes;                                            // 0x0038(0x0010) Edit, ZeroConstructor
		bool                                                       bNeedsSimulation;                                        // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9PY[0x1F];                                  // 0x0049(0x001F) MISSED OFFSET (PADDING)

	public:
		void Simulate(int32_t NumSteps);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageTile
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageTile : public UObject
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N8CL[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProceduralFoliageInstance>                  InstancesArray;                                          // 0x00D0(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_6P81[0x70];                                  // 0x00E0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageVolume
	 * Size -> 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
	 */
	class AProceduralFoliageVolume : public FEngine_AVolume
	{
	public:
		class UProceduralFoliageComponent*                         ProceduralComponent;                                     // 0x0400(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
