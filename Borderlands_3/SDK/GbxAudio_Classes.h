#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class GbxAudio.ActiveAmbientLocationChooser
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationChooser : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_Blueprint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationChooser_Blueprint : public UActiveAmbientLocationChooser
	{
	public:
		bool NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector* Out_Location, float Out_Radius);
		void InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationChooser_RandomWithinActor : public UActiveAmbientLocationChooser
	{
	public:
		TLazyObjectPtr<class AActor>                               WithinActor;                                             // 0x0028(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YS6A[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UActiveAmbientLocationChooser_RandomWithTrace : public UActiveAmbientLocationChooser_RandomWithinActor
	{
	public:
		struct FVector                                             TraceVector;                                             // 0x0048(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTZV[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UActiveAmbientLocationChooser_RandomOnCeiling : public UActiveAmbientLocationChooser_RandomWithTrace
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UActiveAmbientLocationChooser_RandomOnFloor : public UActiveAmbientLocationChooser_RandomWithTrace
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationChooser_PreselectedLocation : public UActiveAmbientLocationChooser
	{
	public:
		unsigned char                                              UnknownData_DEO8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Locations;                                               // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Radii;                                                   // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void UpdateLocations();
		void DrawLocations();
		bool AddLocation(const struct FVector& InLocation, float InRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationChooser_Party
	 * Size -> 0x0038 (FullSize[0x0088] - InheritedSize[0x0050])
	 */
	class UActiveAmbientLocationChooser_Party : public UActiveAmbientLocationChooser_PreselectedLocation
	{
	public:
		float                                                      PartierWeight;                                           // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PartierRadius;                                           // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      IntensityRange;                                          // 0x0058(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PartyDecayPerNomination;                                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisualizeParty;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF4G[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PartyVisualizationLineLength;                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZOA[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              PartyWeights;                                            // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TotalPartyWeight;                                        // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5WJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationValidator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationValidator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationValidator_Blueprint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationValidator_Blueprint : public UActiveAmbientLocationValidator
	{
	public:
		bool IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationValidator_DistanceFromListener : public UActiveAmbientLocationValidator
	{
	public:
		struct FFloatInterval                                      Range;                                                   // 0x0028(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientSound
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class AActiveAmbientSound : public AActor
	{
	public:
		int32_t                                                    TargetInstances;                                         // 0x0458(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXKZ[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActiveAmbientSoundComponent*                        ActiveAmbientSound;                                      // 0x0460(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void EnableSounds();
		void DisableSounds();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientSoundComponent
	 * Size -> 0x0090 (FullSize[0x0208] - InheritedSize[0x0178])
	 */
	class UActiveAmbientSoundComponent : public UActorComponent
	{
	public:
		class UWwiseEvent*                                         StartEvent;                                              // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      LoopDuration;                                            // 0x0180(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         ExpiredStopEvent;                                        // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpiredStopFadeTime;                                     // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetSimultaneousInstances;                             // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      RepopulateDelay;                                         // 0x0198(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActiveAmbientLocationChooser*                       LocationChooser;                                         // 0x01A0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActiveAmbientLocationValidator*                     LocationValidator;                                       // 0x01A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UActiveAmbientUpdater*>                       Updaters;                                                // 0x01B0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bWaryOfPlayers;                                          // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FWM[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaryDistance;                                            // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         WaryStopEvent;                                           // 0x01C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaryStopFadeTime;                                        // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartleRecoveryTime;                                     // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StartedStopEvent;                                        // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartledStopFadeTime;                                    // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA17[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveAmbientInstance>                      ActiveAmbientInstances;                                  // 0x01E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      NextSpawnTime;                                           // 0x01F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceLastSpawn;                                      // 0x01FC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingStartleRecovery;                                // 0x0200(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XZQ[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (PADDING)

	public:
		void Startle(const struct FVector& Location, float Radius);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientUpdater
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientUpdater : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientUpdater_Blueprint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientUpdater_Blueprint : public UActiveAmbientUpdater
	{
	public:
		void UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance, float DeltaTime);
		void InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UActiveAmbientUpdater_MoveInRandomDirection : public UActiveAmbientUpdater
	{
	public:
		struct FFloatInterval                                      SpeedRange;                                              // 0x0028(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UActiveAmbientUpdater_MoveWithWobble : public UActiveAmbientUpdater_MoveInRandomDirection
	{
	public:
		float                                                      DirectionUpdateFrequency;                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionUpdateCone;                                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AmbientSoundBox
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class AAmbientSoundBox : public AWwiseAmbientSound
	{
	public:
		class UBoxComponent*                                       BoxComponent;                                            // 0x0538(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AmbientSoundSphere
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class AAmbientSoundSphere : public AWwiseAmbientSound
	{
	public:
		class USphereComponent*                                    SphereComponent;                                         // 0x0538(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AmbientSoundSpline
	 * Size -> 0x0028 (FullSize[0x0560] - InheritedSize[0x0538])
	 */
	class AAmbientSoundSpline : public AWwiseAmbientSound
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0538(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceEmitterUniformScale;                               // 0x0540(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UG4P[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoxSphereBounds                                    CachedBounds;                                            // 0x0544(0x001C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AnimNotify_CharacterSound
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CharacterSound : public UAnimNotify
	{
	public:
		class UCharacterSoundTag*                                  Tag;                                                     // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AnimNotify_Foley
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UAnimNotify_Foley : public UAnimNotify
	{
	public:
		struct FFoleyEventParams                                   FoleyParams;                                             // 0x0038(0x0048) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bRestrictToMatchingPlayerPerspective;                    // 0x0080(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8JC[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AnimNotify_FootFoley
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UAnimNotify_FootFoley : public UAnimNotify_Foley
	{
	public:
		int32_t                                                    FootIndex;                                               // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFYB[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AnimNotify_WwiseEvent
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UAnimNotify_WwiseEvent : public UAnimNotify
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseNotifyComponentMethod                                PlaybackMethod;                                          // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SIV[0x3];                                   // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_3VQE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WwiseComponentTag;                                       // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToOwner;                                          // 0x0058(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EMP[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmitterRadius;                                           // 0x005C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorePerspective;                                      // 0x0060(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAcousticsMode                                             AcousticsMode;                                           // 0x0061(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC4E[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AnimNotifyState_LoopingSound
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_LoopingSound : public UAnimNotifyState
	{
	public:
		class UWwiseEvent*                                         StartEvent;                                              // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StopEvent;                                               // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseNotifyComponentMethod                                PlaybackMethod;                                          // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX4M[0x3];                                   // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_TW38[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WwiseComponentTag;                                       // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToOwner;                                          // 0x0058(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZJ6[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmitterRadius;                                           // 0x005C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, struct FActiveLoopingSoundNotifyData>       ActivePlaybackInstances;                                 // 0x0060(0x0050) BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioDistanceThresholdSubscriberInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioDistanceThresholdSubscriberInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioDistanceThresholdManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAudioDistanceThresholdManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_HTH4[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UWorld>                               World;                                                   // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FADMSubscriberData>                          SubscriberData;                                          // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3C9V[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioOcclusionVoxelDataProvider
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UAudioOcclusionVoxelDataProvider : public UVoxelDataProvider
	{
	public:
		struct FIntVector                                          DataResolution;                                          // 0x0028(0x000C) Edit, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaterialLibrary;                                     // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD57[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TritonMaterialLibraryFile;                               // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ExtraTritonMaterialEquivalences;                         // 0x0048(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ECollisionChannel                                          CheckCollisionChannel;                                   // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionResponse                                         CheckCollisionResponse;                                  // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxelizeFoliage;                                        // 0x009A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NKU[0x1];                                   // 0x009B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExtraTerrainThickness;                                   // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlagMatchingVoxels;                                     // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI6B[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAudioPrepComponentFilter                           FlagVoxelsForComponentsFilter;                           // 0x00A8(0x00A8) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P3J[0x50];                                  // 0x0150(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioOcclusionVoxelizerZone
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class AAudioOcclusionVoxelizerZone : public AActor
	{
	public:
		void Voxelize();
		void ExportAsRLE();
		void ExportAsRaw();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationConsumer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationConsumer : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_Blueprint
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_Blueprint : public UAudioPrepLocationFinder
	{
	public:
		unsigned char                                              CurrentConsumer[0x10];                                   // 0x0028(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxAudio.AudioPrepLocationFinder_Blueprint.CurrentConsumer

	public:
		void AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius);
		void AddFoundLocations();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ActiveAmbientLocationFinder_Blueprint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActiveAmbientLocationFinder_Blueprint : public UAudioPrepLocationFinder
	{
	public:
		void AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_ActorList
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_ActorList : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_FilteredComponents
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_FilteredComponents : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_SplineTracer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_SplineTracer : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_PincushionTracer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_PincushionTracer : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_TraceDownToActor : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_FoliageLocations
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_FoliageLocations : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_LandscapeGrassLocations : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_InstanceLocations
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_InstanceLocations : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_Grid
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_Grid : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_TraceGrid
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_TraceGrid : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPrepLocationFinder_VoxelMaterialBoundary : public UAudioPrepLocationFinder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.CharacterSoundData
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UCharacterSoundData : public UGbxDataAsset
	{
	public:
		struct FGbxTriggerProperty                                 TriggerRefreshAll;                                       // 0x0030(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQQV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterSoundData*                                 InheritData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInheritableSoundMap                                Sounds;                                                  // 0x0040(0x0050) Edit, NativeAccessSpecifierPublic
		struct FInheritableVocalLoopList                           VocalLoops;                                              // 0x0090(0x0010) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void RefreshAll();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.CharacterSoundInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterSoundInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.CharacterSoundLogicComponent
	 * Size -> 0x01C0 (FullSize[0x0338] - InheritedSize[0x0178])
	 */
	class UCharacterSoundLogicComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E4FZ[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrentVocalization                                CurrentVocalization;                                     // 0x0180(0x0020) Transient, Protected, NativeAccessSpecifierProtected
		struct FCurrentVocalLoopInfo                               CurrentVocalLoop;                                        // 0x01A0(0x0048) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J8AN[0x150];                                 // 0x01E8(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.CharacterSoundTag
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharacterSoundTag : public UGbxDataAsset
	{
	public:
		ECharacterSoundType                                        Type;                                                    // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4TN[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToPlay;                                            // 0x0034(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighPriorityInterruptingVox;                            // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPainVox;                                                // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeathVox;                                               // 0x003A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JNI[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.DistributedAmbientSound
	 * Size -> 0x0090 (FullSize[0x04E8] - InheritedSize[0x0458])
	 */
	class ADistributedAmbientSound : public AActor
	{
	public:
		unsigned char                                              UnknownData_S8W5[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWwiseEvent*>                                 SoundVariants;                                           // 0x0468(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EDistributedSoundMode                                      SoundMode;                                               // 0x0478(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ8M[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioPrepLocationFinder*                            LocationFinder;                                          // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTreatLocationsAsOneSource;                              // 0x0488(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseMultiPositionType                                    MultiPositionType;                                       // 0x0489(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRNE[0x2];                                   // 0x048A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DOffset;                                                 // 0x048C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DScale;                                                  // 0x0490(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEmitterSize;                                          // 0x0494(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CombinedSourceVolumeRatio;                               // 0x0498(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUnconditionalSampleModeForAcoustics;                 // 0x049C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA00[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWwiseAudioComponent*>                        AudioComponents;                                         // 0x04A0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PackedTreeData;                                          // 0x04B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                Bounds;                                                  // 0x04C0(0x001C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C2S[0xC];                                   // 0x04DC(0x000C) MISSED OFFSET (PADDING)

	public:
		void DoUpdateTree();
		void DoFindNewLocationsAndRebuild();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.FluidSimExampleZone
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class AFluidSimExampleZone : public AActor
	{
	public:
		void UpdateVisualization();
		void ExportVectorField();
		void ApplyToOtherSim();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.FoleyAccessoryComponent
	 * Size -> 0x0050 (FullSize[0x0320] - InheritedSize[0x02D0])
	 */
	class UFoleyAccessoryComponent : public USceneComponent
	{
	public:
		class UWwiseEvent*                                         FoleyAccessoryWwiseEvent;                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         LoopStartWwiseEvent;                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccessoryVolume;                                         // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccesoryPitch;                                           // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccessoryRadius;                                         // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ92[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoleyMainComponent*                                 MyFoleyMain;                                             // 0x02F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASPG[0x28];                                  // 0x02F8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.FoleyImplementerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFoleyImplementerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.FoleyMainComponent
	 * Size -> 0x0100 (FullSize[0x0278] - InheritedSize[0x0178])
	 */
	class UFoleyMainComponent : public UActorComponent
	{
	public:
		class UWwiseEvent*                                         FoleyMainWwiseEvent;                                     // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         LoopStartWwiseEvent;                                     // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         FootstepWwiseEvent;                                      // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWwiseEvent*>                                 PerFootFootstepWwiseEvents;                              // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        CharacterSizeSwitch;                                     // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyVolume;                                             // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyPitch;                                              // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootstepVolume;                                          // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootstepPitch;                                           // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        FootstepFoleyComponentTags;                              // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      FoleyAccessoryVolume;                                    // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyAccessoryPitch;                                     // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExtraFoleyParameter>                        ExtraParameters;                                         // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      AttenuationScalingFactor;                                // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PL1B[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFoleyEventParams                                   CachedFootstepParams;                                    // 0x01E8(0x0048) Transient, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        LastMaterialSwitch;                                      // 0x0230(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         SurfaceModifierEvent;                                    // 0x0238(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceModifierVolume;                                   // 0x0240(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceModifierFootstepVolumeMultiplier;                 // 0x0244(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFoleyAccessoryComponent*>                    AssociatedFoleyAccessories;                              // 0x0248(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJK6[0x20];                                  // 0x0258(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier);
		void PlayFootstepEvent(const struct FFoleyEventParams& EventParams);
		void PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.GbxAudioBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxAudioBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag);
		void STATIC_RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx);
		bool STATIC_PassesAudioPreparationHitFilter(const struct FHitResult& Hit, const struct FAudioPrepHitResultFilter& Filter);
		bool STATIC_PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, const struct FAudioPrepComponentFilter& Filter);
		void STATIC_ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.GbxAudioGlobalsData
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	class UGbxAudioGlobalsData : public UGbxDataAsset
	{
	public:
		class UWwiseEvent*                                         PauseGameAudioEvent;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         UnpauseGameAudioEvent;                                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         PreLevelTransitionEvent;                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         PostLevelTransitionEvent;                                // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          MasterVolumeParameter;                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeMusicParameter;                                // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeSfxParameter;                                  // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeVOParameter;                                   // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeHdrSfxParameter;                               // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeHdrVOParameter;                                // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserVolumeHdrMixRtpc;                                    // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          UserPS4ControllerRtpc;                                   // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWwiseBank*>                                  AlwaysLoadedBanks;                                       // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableAcoustics;                                        // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZM0[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionStrength;                                       // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      RedirectionVolumeInterval;                               // 0x00A8(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         EarlyReflectionsVolumeCurve;                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LateReverbVolumeCurve;                                   // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ReverbBoostOutdoornessModifierCurve;                     // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbBoostDryGainFraction;                              // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EarlyReflectionsReverbBoostStrength;                     // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateReverbReverbBoostStrength;                           // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponFireReverbBoost;                                   // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionReverbBoost;                                    // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAZD[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         MusicVolumeSliderPreviewSound;                           // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         MusicVolumeSliderPreviewSoundStop;                       // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         SFXVolumeSliderPreviewSound;                             // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         VOVolumeSliderPreviewSound;                              // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         VoiceCommVolumeSliderPreviewSound;                       // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StartStandardCinematicModeEvent;                         // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         EndStandardCinematicModeEvent;                           // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StartExclusiveCinematicModeEvent;                        // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         EndExclusiveCinematicModeEvent;                          // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterSoundTag*                                  JumpedVocalizationTag;                                   // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FootstepVolumeRtpc;                                      // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FoleyMainVolumeRtpc;                                     // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FoleyAccessoryVolumeRtpc;                                // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FootstepPitchRtpc;                                       // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FoleyMainPitchRtpc;                                      // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FoleyAccessoryPitchRtpc;                                 // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          FoleyPerspectiveRtpc;                                    // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          SurfaceModifierVolumeRtpc;                               // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        HighDetailFoleySwitch;                                   // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        LowDetailFoleySwitch;                                    // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         FootstepAction;                                          // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         HandPlantAction;                                         // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstPersonFootstepsForwardOffset;                       // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XGQ[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseRtpc*                                          CharacterRelativeSpeedRtpc;                              // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          CharacterRelativeVerticalAirSpeedRtpc;                   // 0x01A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          WalkingSlopeRtpc;                                        // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          WaterDepthRtpc;                                          // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          RelativeWaterDepthRtpc;                                  // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          RandomVariationRtpc;                                     // 0x01C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          PerspectiveRtpc;                                         // 0x01C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          ExplosionSizeRtpc;                                       // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          PlayerLocationOutdoornessRTPC;                           // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          OutdoornessRTPC;                                         // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.GbxAudioSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGbxAudioSettings : public UObject
	{
	public:
		class UGbxAudioGlobalsData*                                AudioGlobalsData;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultAudioGlobalsData;                                 // 0x0030(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyCullingDistanceFraction;                            // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyCullingDistanceMinVolumeForReduction;               // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoleyCullingDistanceReductionFractionPerDBOverMin;       // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPJD[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             SkipCinematicEvents;                                     // 0x0058(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.LightAudioComponent
	 * Size -> 0x0098 (FullSize[0x0368] - InheritedSize[0x02D0])
	 */
	class ULightAudioComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_2IQZ[0x8];                                   // 0x02D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UWwiseRtpc*, float>                             PersistentRTPCValues;                                    // 0x02D8(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UWwiseEvent*>                                 Loops;                                                   // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWwiseLocationOverride>                      RelativeDetailedLocations;                               // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bDynamicPosition;                                        // 0x0348(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PXS[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioDistanceThresholdManager*                      SubscribedToManager;                                     // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3U1[0x10];                                  // 0x0358(0x0010) Fix size for supers

	public:
		void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
		struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.MusicSequencerComponent
	 * Size -> 0x00B8 (FullSize[0x0230] - InheritedSize[0x0178])
	 */
	class UMusicSequencerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TO1I[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BPM;                                                     // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequencerLatencyInSeconds;                               // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKillLateEvents;                                         // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F08Z[0x9F];                                  // 0x0189(0x009F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRegisteredWithAudioDevice;                              // 0x0228(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H3NC[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		void StopSequence();
		void PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int32_t Note, int32_t Velocity, int32_t Channel, float StartBeat, float Duration);
		void PlaySequence();
		void PauseSequence();
		bool IsPlaying();
		float GetRealTimeUntilBeat(float Beat);
		float GetCurrentBeat();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ParticleModuleGbxAudioBase
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UParticleModuleGbxAudioBase : public UParticleModule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ParticleModuleGbxAudioLoop
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UParticleModuleGbxAudioLoop : public UParticleModuleGbxAudioBase
	{
	public:
		class UWwiseEvent*                                         LoopStartEvent;                                          // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         LoopStopEvent;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseMultiPositionType                                    MultiPositionType;                                       // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S94A[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AudioComponentRadius;                                    // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRawDistributionFloat                               GainOverLifetime;                                        // 0x0050(0x0038) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.ParticleModuleGbxAudioPool
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UParticleModuleGbxAudioPool : public UParticleModuleGbxAudioBase
	{
	public:
		class UWwiseEvent*                                         AudioEvent;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfAudioComponents;                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStealComponents;                                        // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73IF[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AudioComponentRadius;                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22MZ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               GainOverLifetime;                                        // 0x0050(0x0038) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.WindAudioLoopComponent
	 * Size -> 0x0038 (FullSize[0x03A0] - InheritedSize[0x0368])
	 */
	class UWindAudioLoopComponent : public ULightAudioComponent
	{
	public:
		class UWwiseRtpc*                                          WindSpeedAudioParameter;                                 // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          WindAccelerationAudioParameter;                          // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWindDirectionalSensitivity                         WindSensitivity;                                         // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSPR[0x10];                                  // 0x0390(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAudio.WwiseListenerEffectComponent
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UWwiseListenerEffectComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_270R[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRegisteredWithAudioDevice;                              // 0x0180(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q5QW[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseEffectInfo>                            WwiseEffects;                                            // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void RemoveAudioEffect(class UWwiseAuxBus* Efx);
		void RemoveAllAudioEffects();
		void ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
