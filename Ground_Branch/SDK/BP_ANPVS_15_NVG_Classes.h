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
	 * BlueprintGeneratedClass BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C
	 * Size -> 0x007D (FullSize[0x046D] - InheritedSize[0x03F0])
	 */
	class ABP_ANPVS_15_NVG_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GBItemNightVisionComponent_C*                    NightVisionComponent;                                    // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ANPVS_15_NVG;                                            // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPoseableMeshComponent*                              PoseableMesh;                                            // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                LeftPointLight;                                          // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                RightPointLight;                                         // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               NightVisionPostProcess;                                  // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Alpha_62A652F149D2DD3D4001ED971A50D4E0;       // 0x0428(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_62A652F149D2DD3D4001ED971A50D4E0;  // 0x042C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CT7E[0x3];                                   // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_NVGOverlay_C*                                   NightVisionOverlayWidget;                                // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CounterweightSocketName;                                 // 0x0444(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BracketBoneName;                                         // 0x044C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BrackRotationAmount;                                     // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NightVisionGogglesDownTag;                               // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNightVisionGogglesDown;                                 // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7H55[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NightVisionEnabledTag;                                   // 0x0464(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLocalEndViewTargetBound;                                // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV);
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		bool AllowUsageWhileAttached();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnLoaded_4F18AE27471B5F9408A726A253D44324(class UClass* Loaded);
		void OnLoaded_C2B63AC249909B6D095A6182A08E8C03(class UObject* Loaded);
		void InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1(const struct FKey& Key);
		void PlayAnimation(bool bForward);
		void OnAddedToItem(class AGBItem* NewParentItem);
		void SetNVGMountMesh();
		void OnRemovedFromItem(class AGBItem* OldParentItem, class USceneComponent* OldParentComp, const class FName& OldParentSocket);
		void OnAddedToInventoryEvent();
		void OnRemovedFromInventoryEvent();
		void BindOnGameplayTagsUpdated();
		void OnGameplayTagsUpdated_Event_1(class AGBCharacter* Character);
		void UnbindOnGameplayTagsUpdated();
		void UpdateBracketRotation();
		void EnsureOverlayExists();
		void RemoveOverlay();
		void ExecuteUbergraph_BP_ANPVS_15_NVG(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
