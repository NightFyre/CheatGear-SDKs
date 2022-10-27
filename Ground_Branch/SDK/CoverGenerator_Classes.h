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
	 * Class CoverGenerator.CoverGenerator
	 * Size -> 0x0090 (FullSize[0x02B0] - InheritedSize[0x0220])
	 */
	class ACoverGenerator : public AActor
	{
	public:
		bool                                                       bRegenerateAtBeginPlay;                                  // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRegenerateAtNavigationRebuilt;                          // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C1CH[0x2];                                   // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStepHeight;                                           // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchingHalfHeight;                                     // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StandingHalfHeight;                                      // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanOffset;                                              // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TraceLength;                                             // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SphereSize;                                              // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanTraceLength;                                         // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T3RO[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0248(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      HorizontalStepDistance;                                  // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchStepDistance;                                      // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StandingStepDistance;                                    // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VGHQ[0xC];                                   // 0x0264(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverPoint*>                                 AllCoverPoints;                                          // 0x0270(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LCVK[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverPoint*>                                 CoverPointsCurrentlyUsed;                                // 0x0288(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BTA6[0x18];                                  // 0x0298(0x0018) MISSED OFFSET (PADDING)

	public:
		void ReleaseCover(class UCoverPoint* CoverPoint, class AController* Controller);
		void OnNavigationGenerationFinished(class ANavigationData* NavData);
		bool OccupyCover(class UCoverPoint* CoverPoint, class AController* Controller);
		bool IsFreeCoverPoint(class UCoverPoint* CoverPoint);
		TArray<class UCoverPoint*> GetCoverWithinBox(const struct FBox& BoxIn);
		class ACoverGenerator* GetCoverGenerator(class UObject* WorldContextObject);
		void ForceRefresh();
		bool CoverExistWithinBox(const struct FBox& BoxIn);
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.CoverPoint
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UCoverPoint : public UObject
	{
	public:
		unsigned char                                              UnknownData_YEVA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0030(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Direction;                                               // 0x003C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Rotation;                                                // 0x0048(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCrouchOnlyCover;                                        // 0x0054(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanLeanLeftCrouched;                                    // 0x0055(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanLeanRightCrouched;                                   // 0x0056(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanStandUpFront;                                        // 0x0057(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanLeanLeftStanding;                                    // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanLeanRightStanding;                                   // 0x0059(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V23D[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         OccupiedBy;                                              // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3LPE[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetOccupiedBy(class AController* NewController);
		void SetCrouchOnlyCover(bool bNewValue);
		void SetCoverLocation(const struct FVector& NewLocation);
		void SetCoverDirection(const struct FVector& NewDirection);
		void SetCanStandUpFront(bool bNewValue);
		void SetCanLeanRightStanding(bool bNewValue);
		void SetCanLeanRightCrouched(bool bNewValue);
		void SetCanLeanLeftStanding(bool bNewValue);
		void SetCanLeanLeftCrouched(bool bNewValue);
		bool OnlyProvidesCover();
		class AController* GetOccupiedBy();
		bool GetCrouchOnlyCover();
		struct FRotator GetCoverRotation();
		struct FVector GetCoverLocation();
		struct FVector GetCoverDirection();
		bool GetCanStandUpFront();
		bool GetCanLeanRightStanding();
		bool GetCanLeanRightCrouched();
		bool GetCanLeanLeftStanding();
		bool GetCanLeanLeftCrouched();
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryGenerator_CoverFMemory
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_CoverFMemory : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           SquareExtent;                                            // 0x0050(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           BoxHeight;                                               // 0x0088(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              GenerateAround;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryItemType_Cover
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Cover : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_CoverPointFree
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_CoverPointFree : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_FilterCoverPoints
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_FilterCoverPoints : public UEnvQueryTest
	{
	public:
		bool                                                       bCrouchOnlyCover;                                        // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLeanLeftCrouched;                                    // 0x01F9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLeanRightCrouched;                                   // 0x01FA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStandUpFront;                                        // 0x01FB(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLeanLeftStanding;                                    // 0x01FC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLeanRightStanding;                                   // 0x01FD(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP81[0x2];                                   // 0x01FE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_IsCoverPosition
	 * Size -> 0x00E0 (FullSize[0x02D8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_IsCoverPosition : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextHorizontalDistanceOffset;                         // 0x0230(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextVerticalDistanceOffset;                           // 0x0268(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            DebugData;                                               // 0x02A0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_ParallelToCoverDirection
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_ParallelToCoverDirection : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_TraceDistance
	 * Size -> 0x00A8 (FullSize[0x02A0] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_TraceDistance : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           MaxTraceDistance;                                        // 0x0230(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           VerticalOffset;                                          // 0x0268(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
