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
	 * Class Watercrafts.ControllableOarsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControllableOarsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.FakeShip
	 * Size -> 0x0100 (FullSize[0x04C8] - InheritedSize[0x03C8])
	 */
	class AFakeShip : public AActor
	{
	public:
		unsigned char                                              UnknownData_4OOP[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AItemProxy*>                                  AttachedItems;                                           // 0x03D0(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_9CUL[0xE8];                                  // 0x03E0(0x00E8) MISSED OFFSET (PADDING)

	public:
		void OnAttachedItemEndPlay(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftTrackerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWatercraftTrackerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.ItemProxyWatercraftTrackerComponent
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	class UItemProxyWatercraftTrackerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QJ75[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemProxyWatercraftTrackerComponentDataAsset*       WatercraftTrackingData;                                  // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              CurrentWatercraft;                                       // 0x00D8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DLTN[0x70];                                  // 0x00E0(0x0070) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentWatercraft(class AActor* PreviousWatercraft);
		void OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft);
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      WatercraftTypes;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatAudioComponent
	 * Size -> 0x01B0 (FullSize[0x0490] - InheritedSize[0x02E0])
	 */
	class URowboatAudioComponent : public USceneComponent
	{
	public:
		class URowboatAudioComponentParams*                        Params;                                                  // 0x02E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARowboat*                                            ParentRowboat;                                           // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ISLG[0x1A0];                                 // 0x02F0(0x01A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatAudioComponentParams
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class URowboatAudioComponentParams : public UDataAsset
	{
	public:
		class UWwiseObjectPoolWrapper*                             RowboatObjectPool;                                       // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatWakeStart;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatWakeStop;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowboatSpeedRtpcName;                                    // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RowboatMaxSpeedRtpc;                                     // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MRRT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         RowboatLaunch;                                           // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatImpactAndScrapeStart;                             // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatImpactAndScrapeStop;                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatStrainStart;                                      // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatStrainStop;                                       // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowboatStrainRtpcName;                                   // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RowboatMaxStrainRtpc;                                    // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VN78[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         RowboatTakenDamage;                                      // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageAmountRequiredForNoiseToPlay;                      // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MEQ[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         RowboatAttach;                                           // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RowboatDetach;                                           // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseObjectPoolWrapper*                             WwiseOarEmitterPool;                                     // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarInOarLayer;                                       // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarInWaterLayer;                                     // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarOutOarLayer;                                      // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarOutWaterLayer;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarBrakingLoop;                                      // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopOarBrakingLoop;                                      // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayOarPullFinished;                                     // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatDescDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class URowboatDescDataAsset : public UDataAsset
	{
	public:
		struct FPartDesc                                           PartDesc;                                                // 0x0028(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsLeftForwardNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsLeftForwardDeactivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsRightForwardNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsRightForwardNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsRightForwardDeactivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsLeftBrakingActivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsLeftBrakingDeactivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsRightBrakingActivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URowboatOarsRightBrakingDeactivatedNotificationInputId : public UNotificationInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.ScrapeableDamageDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UScrapeableDamageDataAsset : public UDataAsset
	{
	public:
		TArray<struct FScrapeableDamageSpeedEntry>                 DamageSpeedParams;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.ScrapeableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScrapeableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.ScrapeableComponent
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class UScrapeableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XLRC[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinIntervalBetweenScrapeDamage;                          // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_55E4[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScrapeableDamageDataAsset*                          ScrapeDamageSettings;                                    // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SafeZoneCenterDirection;                                 // 0x00E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SafeZoneMaximumAngle;                                    // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ScrapeDamagerType;                                       // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.Watercraft
	 * Size -> 0x0348 (FullSize[0x0710] - InheritedSize[0x03C8])
	 */
	class AWatercraft : public AActor
	{
	public:
		unsigned char                                              UnknownData_QUHD[0x28];                                  // 0x03C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBuoyancyComponent*                                  BuoyancyComponent;                                       // 0x03F0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FWatercraftRolloverCorrector                        RolloverCorrector;                                       // 0x03F8(0x000C) Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_HM11[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShipNosediveBrake*                                  NosediveBrake;                                           // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBowSplashContainer*                                 BowSplashContainer;                                      // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UStaticMeshComponent*                                CollisionMesh;                                           // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UStaticMeshComponent*                                CraftMesh;                                               // 0x0420(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBoxComponent*                                       OverlapHits;                                             // 0x0428(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WaterOcclusionVolume;                                    // 0x0430(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWaterInteractionComponent*                          WaterInteractionComponent;                               // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ClientConvexHullCollisionProfile;                        // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FNetTimeStampCalculator                             MovementTimeStamp;                                       // 0x0448(0x0070) Net
		struct FRigidBodyErrorCorrection                           PhysicsErrorCorrection;                                  // 0x04B8(0x001C) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_543T[0x34];                                  // 0x04D4(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBuoyancySampleMovement                             BuoyancySampleMovement;                                  // 0x0508(0x0068) Edit, DisableEditOnInstance
		class UCurveFloat*                                         SpeedToChoppinessScalarCurve;                            // 0x0570(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeepWaterSubmersionThreshold;                            // 0x0578(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuoyancyChoppinessWhileSinking;                          // 0x057C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCritical;                                              // 0x0580(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RigidBodyAwake;                                          // 0x0581(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InContactWithLand;                                       // 0x0582(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InDeepWater;                                             // 0x0583(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JXO2[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Scrapeable[0x10];                                        // 0x0588(0x0010) UNKNOWN PROPERTY: InterfaceProperty Watercrafts.Watercraft.Scrapeable
		unsigned char                                              UnknownData_MWT7[0x178];                                 // 0x0598(0x0178) MISSED OFFSET (PADDING)

	public:
		void OnRigidBodyWake(const class FName& InBoneName);
		void OnRigidBodySleep(const class FName& InBoneName);
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.Rowboat
	 * Size -> 0x02F0 (FullSize[0x0A00] - InheritedSize[0x0710])
	 */
	class ARowboat : public AWatercraft
	{
	public:
		unsigned char                                              UnknownData_OXGT[0x40];                                  // 0x0710(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChildActorComponent*                                LeftSideClamberSpot;                                     // 0x0750(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                RightSideClamberSpot;                                    // 0x0758(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ForceSpot;                                               // 0x0760(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Lantern;                                                 // 0x0768(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                RowingSeat;                                              // 0x0770(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                StorageSeat;                                             // 0x0778(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UShipLiveryComponent*                                LiveryComponent;                                         // 0x0780(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UReplicatedShipPartCustomizationComponent*           CustomizationComponent;                                  // 0x0788(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WaterExclusionOffset;                                    // 0x0790(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_EYV8[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTetherCustomisationComponent*                       TetherCustomisationComponent;                            // 0x07A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHealthComponent*                                    HealthComponent;                                         // 0x07A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorDamageableComponent*                           ActorDamageableComponent;                                // 0x07B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URammableComponent*                                  RammableComponent;                                       // 0x07B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScrapeableComponent*                                ScrapeableComponent;                                     // 0x07C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URowboatAudioComponent*                              RowboatAudio;                                            // 0x07C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseHullDragDynamicsDesc*                           HullDragDynamicsDesc;                                    // 0x07D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBowSplashContainer*                                 OarSplashContainer;                                      // 0x07D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMountableComponent*                                 MountableComponent;                                      // 0x07E0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         LinearDampingOverTimeWhileBeachedScalarCurve;            // 0x07E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         AngularDampingOverTimeWhileBeachedScalarCurve;           // 0x07F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRowboatDamageEffectData                            DamageEffectData;                                        // 0x07F8(0x0018) Edit, DisableEditOnInstance
		struct FRowboatStrainDamageData                            StrainDamageData;                                        // 0x0810(0x0020) Edit, DisableEditOnInstance
		TArray<class UChildActorComponent*>                        AlwaysEnabledInteractables;                              // 0x0830(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		class UShroudBreakerTrackerComponent*                      ShroudBreakerTrackerComponent;                           // 0x0840(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingLaunched;                                         // 0x0848(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsSinking;                                               // 0x0849(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_O8UZ[0x2];                                   // 0x084A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPushingAngle;                                         // 0x084C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentStrainAmount;                                     // 0x0850(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDocked;                                                // 0x0854(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6FED[0x1];                                   // 0x0855(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionChannel                                          CoverCollisionChannel;                                   // 0x0856(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IPE6[0x1];                                   // 0x0857(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnderCoverCheckInterval;                                 // 0x0858(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnderCoverHeight;                                        // 0x085C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     RelativeUnderCoverProbeRoots;                            // 0x0860(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		ETrackedActorType                                          TrackedActorType;                                        // 0x0870(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FCJW[0x18F];                                 // 0x0871(0x018F) MISSED OFFSET (PADDING)

	public:
		void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
		void OnRep_IsSinking();
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatPartInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URowboatPartInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowboatSpawnParamsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URowboatSpawnParamsDataAsset : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      RowboatTypes;                                            // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowingActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URowingActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.RowingInputComponent
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class URowingInputComponent : public ULookAtOffsetInputComponent
	{
	public:
		class ARowingSeat*                                         TargetOars;                                              // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.StorageSeat
	 * Size -> 0x0030 (FullSize[0x06B0] - InheritedSize[0x0680])
	 */
	class AStorageSeat : public ASeat
	{
	public:
		class UClass*                                              StorageInteractionInput;                                 // 0x0680(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStorageContainerComponent*                          StorageContainerComponent;                               // 0x0688(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EMLB[0x20];                                  // 0x0690(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestSinkWatercraftStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestSinkWatercraftStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_KQWW[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestWatercraftService
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UTaleQuestWatercraftService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_2R5E[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestWatercraftServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestWatercraftServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestSinkWatercraftStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestSinkWatercraftStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableWatercraft                            Watercraft;                                              // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestSpawnWatercraftStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestSpawnWatercraftStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NOPR[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestSpawnWatercraftStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestSpawnWatercraftStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableTransform                             SpawnLocation;                                           // 0x0080(0x0028) Edit
		TAssetPtr<class UClass>                                    WatercraftClass;                                         // 0x00A8(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_V73Z[0x4];                                   // 0x00C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FQuestVariableWatercraft                            Watercraft;                                              // 0x00C8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.TaleQuestWatercraftFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestWatercraftFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		class AWatercraft* GetFirstSpawnedWatercraft();
		void FilterPointsByDistanceFromWatercraft(float MinDistance, TArray<struct FOrientedPoint>* Points);
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWatercraftServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftService
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AWatercraftService : public AActor
	{
	public:
		unsigned char                                              UnknownData_IOQU[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftSpawnData
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UWatercraftSpawnData : public UItemSpawnData
	{
	public:
		TAssetPtr<class UClass>                                    WatercraftClass;                                         // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZVL3[0x4];                                   // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      MinDistanceToNearestWatercraftInMetres;                  // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8K2G[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Watercrafts.WatercraftTrackerComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UWatercraftTrackerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_X5DN[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CurrentWatercrafts;                                      // 0x00D0(0x0010) Net, ZeroConstructor

	public:
		void OnWatercraftDestroyed(class AActor* WatercraftActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
