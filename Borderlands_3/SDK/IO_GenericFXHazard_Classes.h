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
	 * BlueprintGeneratedClass IO_GenericFXHazard.IO_GenericFXHazard_C
	 * Size -> 0x00D0 (FullSize[0x0620] - InheritedSize[0x0550])
	 */
	class AIO_GenericFXHazard_C : public AInteractiveObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) Transient, DuplicateTransient
		class ULightAudioComponent*                                Audio;                                                   // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxNavBoxComponent*                                 GbxNavBox;                                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URegionBalanceStateComponent*                        RegionBalanceState;                                      // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxNavMeshPainterComponent*                         GbxNavMeshPainter;                                       // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UElementalInteractionComponent*                      ElementalInteraction;                                    // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Particle;                                                // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDA_GenericFXHazard_C*                               DataAsset;                                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Active_on_Start;                                         // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		Enum_GenericFXHazardState                                  FireState;                                               // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CFRD[0x6];                                   // 0x05B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UElementalInteractionData*                           ElementalInteractionData;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Event_BeginPlayerOverlap;                                // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       FireBeginOverlapDispatchEvents;                          // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WTLR[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ALight*>                                      AssociatedLights;                                        // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		float                                                      ActiveLightIntensity;                                    // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InactiveLightIntensity;                                  // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              Audio_WarmupInstance;                                    // 0x05F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FWwiseLocationOverride>                      Audio_WorldLocations;                                    // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UGbxCondition*                                       Cond_FireState_NewEnumerator1;                           // 0x0618(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ConvertRelativeLocationsToWorld();
		void Audio_PlayShutdown(class UDA_GenericFXHazard_C* self3);
		void Audio_PlayWarmup(class UDA_GenericFXHazard_C* DataAsset);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void __UserState_FireState_1(bool bFromLoad);
		void __UserState_FireState_2(bool bFromLoad);
		void OnActivate();
		void OnDeactivate();
		void SetPlaceableFireState(bool On);
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_IO_GenericFXHazard(int32_t EntryPoint);
		void Event_BeginPlayerOverlap__DelegateSignature(class AGbxPlayerController* GbxPlayerController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
