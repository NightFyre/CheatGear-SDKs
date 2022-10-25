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
	 * BlueprintGeneratedClass BP_AN_PEQ_Master.BP_AN_PEQ_Master_C
	 * Size -> 0x0180 (FullSize[0x05B8] - InheritedSize[0x0438])
	 */
	class ABP_AN_PEQ_Master_C : public AGBRailAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 IlluminatorSpotLight;                                    // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Illuminator_Glare;                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_GBItemBeamComponent_C*                           Laser;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_GBItemBeamComponent_C*                           IRLaser;                                                 // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PEQSM;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bLaserActive;                                            // 0x0468(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bIlluminatorActive;                                      // 0x0469(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_HA49[0x6];                                   // 0x046A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LaserText;                                               // 0x0470(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                IlluminatorText;                                         // 0x0488(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bLocalPlayerHasNightVisionEnabled;                       // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLaserMomentary;                                         // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIlluminatorMomentary;                                   // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMode_IRLaser;                                           // 0x04A3(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bIlluminator_High;                                       // 0x04A4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_JC6X[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LaserModIcon[0x28];                                      // 0x04A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LaserIcon[0x28];                                         // 0x04D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              IRFlashIcon[0x28];                                       // 0x04F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                LaseModeText;                                            // 0x0520(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UWBP_GenericChange_Prompt_C*                         ChangePrompt;                                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                LaserMode_IR;                                            // 0x0540(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LaserMode_Visible;                                       // 0x0558(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      IlluminatorBrightness_High;                              // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IlluminatorBrightness_Low;                               // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IlluminatorOuterCone_High;                               // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IlluminatorOuterCone_Low;                                // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IlluminatorInnerCone_High;                               // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IlluminatorInnerCone_Low;                                // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSoftObjectPath                                     LaserParticleSystem;                                     // 0x0588(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		struct FSoftObjectPath                                     IRLaserParticleSystem;                                   // 0x05A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash

	public:
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		void OnRep_bIlluminator_High();
		void OnRep_bMode_IRLaser();
		void OnRep_bIlluminatorActive();
		void OnRep_bLaserActive();
		bool AllowUsageWhileAttached();
		void InpActEvt_ToggleLaser_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_ToggleLaser_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1(const struct FKey& Key);
		void AddAttachedUseMenuEntries(class UUserWidget* UsageMenu);
		void OnSelected_Laser_Event(int32_t Index);
		void OnStartUsing(int32_t UseType);
		void AddLaserEntry(class UWBP_RadialMenu_C* UsageMenu);
		void InternalUpdateLaser();
		void CharacterPlayDying_Event_1(class AGBCharacter* Character);
		void ReceiveBeginPlay();
		void OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController);
		void InteralUpdateIlluminatorStatus();
		void AddIlluminatorEntry(class UWBP_RadialMenu_C* UsageMenu);
		void OnSelected_Illuminator_Event(int32_t Index);
		void BindToLocalPlayerTagsUpdated();
		void OnStopUsing(int32_t UseType);
		void OnSelected_LaserMode_Event(int32_t Index);
		void DisplayLaserModeChangeMessage();
		void OnBeingUnequipped();
		void OnBeingEquipped();
		void MulticastSetLaserActive(bool bLaserActive);
		void MulticastSetIlluminatorActive(bool bIlluminatorActive);
		void MulticasModeIRLaser(bool bMode_IRLaser);
		void MulticastSetIlluminatorHigh(bool bIlluminator_High);
		void OnLoadAssetsComplete();
		void OnAddedToInventoryEvent();
		void OnRemovedFromInventoryEvent();
		void ExecuteUbergraph_BP_AN_PEQ_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
