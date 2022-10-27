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
	 * BlueprintGeneratedClass BP_TacLight_Master.BP_TacLight_Master_C
	 * Size -> 0x0048 (FullSize[0x0480] - InheritedSize[0x0438])
	 */
	class ABP_TacLight_Master_C : public AGBRailAttachment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            LightMaterial;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity;                                          // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Q5A[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpotLightComponent*                                 SpotLightComponent;                                      // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLightActive;                                            // 0x0458(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_EAI9[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TacticalLight;                                           // 0x0460(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bLightMomentary;                                         // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8JOZ[0x3];                                   // 0x0479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaterringIntensity;                                     // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_bLightActive();
		bool AllowUsageWhileAttached();
		void InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnStartUsing(int32_t UseType);
		void OnSelected_Event_1(int32_t Index);
		void AddAttachedUseMenuEntries(class UUserWidget* UsageMenu);
		void ReceiveBeginPlay();
		void OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController);
		void InternalUpdateLight();
		void OnStopUsing(int32_t UseType);
		void CharacterPlayDying_Event_1(class AGBCharacter* Character);
		void OnBeingEquipped();
		void OnBeingUnequipped();
		void MulticastSetLightActive(bool bLightActive);
		void OnAddedToInventoryEvent();
		void OnRemovedFromInventoryEvent();
		void ExecuteUbergraph_BP_TacLight_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
