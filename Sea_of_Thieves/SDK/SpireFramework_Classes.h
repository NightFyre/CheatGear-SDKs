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
	 * Class SpireFramework.HeightTriggerableAudioComponentParams
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHeightTriggerableAudioComponentParams : public UDataAsset
	{
	public:
		class UWwiseObjectPoolWrapper*                             Pool;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RisingOneShot;                                           // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RisingStart;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RisingStop;                                              // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         LoweringStart;                                           // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         LoweringStop;                                            // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.HeightTriggerableEffectsComponent
	 * Size -> 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
	 */
	class UHeightTriggerableEffectsComponent : public UActorComponent
	{
	public:
		class UHeightTriggerableAudioComponentParams*              AudioParams;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FActorComponentSelector                             EmitterOwner;                                            // 0x00D0(0x0010) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FVector                                             EmitterOffset;                                           // 0x00E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseParentEmitter;                                        // 0x00EC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S7WA[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RisingAudioTriggerValue;                                 // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VQ29[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShake;                                             // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ShakeInnerRadius;                                        // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeOuterRadius;                                        // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A73Z[0x50];                                  // 0x0108(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetMovementDirection(EDirectionOfMovement InMovement);
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireResource
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class ASpireResource : public AActor
	{
	public:
		unsigned char                                              UnknownData_0CH9[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpireServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireServiceParams
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USpireServiceParams : public UDataAsset
	{
	public:
		class UActorSpawnData*                                     OnCancelFakeSpire;                                       // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireService
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class ASpireService : public AActor
	{
	public:
		unsigned char                                              UnknownData_QYDA[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpireServiceParams*                                 Params;                                                  // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FServerSpireInfo>                            ServerOnlySpireInfo;                                     // 0x03D8(0x0010) ZeroConstructor, Transient
		TArray<struct FSpireInfo>                                  SpireLevels;                                             // 0x03E8(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_P98N[0x68];                                  // 0x03F8(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireStreamedLevelDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USpireStreamedLevelDataAsset : public UDataAsset
	{
	public:
		class UAthenaStreamedLevelDataAsset*                       StreamedLevel;                                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSpireEntry>                                 Entries;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class FName                                                FeatureToggle;                                           // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireSettingsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpireSettingsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
	 * Size -> 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
	 */
	class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
	{
	public:
		TArray<TWeakObjectPtr<class ASpireResource>>               SpireList;                                               // 0x03D8(0x0010) ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleLoadSpireStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleLoadSpireStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_KWOJ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleSpireService
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UTaleSpireService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_RRKM[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SpireMadeVisible;                                        // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_1GNL[0x30];                                  // 0x0078(0x0030) MISSED OFFSET (PADDING)

	public:
		void RegisterResetMechanismInterface(class AActor* InMechanismResetInterface);
		bool IsSpireVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleSpireServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleLoadSpireStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleMakeSpireVisibleStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleMakeSpireVisibleStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_QMPE[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleMakeSpireVisibleStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleMakeSpireVisibleStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleRegisterSpireStep
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UTaleRegisterSpireStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_03MZ[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleRegisterSpireStepDesc*                          StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HO7T[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleRegisterSpireStepDesc
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableVector                                SelectionOriginPoint;                                    // 0x0080(0x0020) Edit
		struct FQuestVariableFloat                                 PlayerExclusionSelectionRadius;                          // 0x00A0(0x0020) Edit
		struct FQuestVariableTaleResourceHandle                    AllocatedSpireHandle;                                    // 0x00C0(0x0020) Edit
		struct FQuestVariableVector                                AllocatedSpireLocation;                                  // 0x00E0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleReleaseSpireStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleReleaseSpireStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_DMQC[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_2P43[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleReleaseSpireStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableTaleResourceHandle                    SpireHandle;                                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleUnloadSpireStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleUnloadSpireStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9CHL[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleUnloadSpireStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleWaitForSpireToLoadStep
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class UTaleWaitForSpireToLoadStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_96EI[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_32HO[0x50];                                  // 0x0098(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpireFramework.TaleWaitForSpireToLoadStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleWaitForSpireToLoadStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
