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
	 * BlueprintGeneratedClass BP_Moskito_RF.BP_Moskito_RF_C
	 * Size -> 0x00D8 (FullSize[0x04C8] - InheritedSize[0x03F0])
	 */
	class ABP_Moskito_RF_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GBItemNightVisionComponent_C*                    NightVisionComponent;                                    // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               NightVisionPostProcess;                                  // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MoskitoStaticMesh0;                                      // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DayModeFOV;                                              // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y3AF[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DayModeTexture;                                          // 0x0420(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture2D*                                          DayMaskTextureRef;                                       // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSoftObjectPath                                     NightModeTexture;                                        // 0x0440(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture2D*                                          NightMaskTextureRef;                                     // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ViewOverlay_C*                                   Overlay;                                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_MoskitoOverlay_C*                               MoskitoRangefinderWidget;                                // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NighModeFOV;                                             // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Origin;                                                  // 0x0474(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceDir;                                                // 0x0480(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoskitoEffectiveRange;                                   // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHideInFirstPerson;                                      // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNightVisionMode;                                        // 0x0491(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, Interp, NoDestructor
		unsigned char                                              UnknownData_BKO5[0x6];                                   // 0x0492(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_MoskitoOverlay_C*                               MoskitoOverlay;                                          // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Range;                                                   // 0x04A0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LWEL[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void BindOnEndViewTarget();
		void OnRep_bNightVisionMode();
		void RangeFindRecursive(const struct FVector& TraceStart, float RemainingTraceDistance);
		bool UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV);
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		float GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition);
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		void InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1(const struct FKey& Key);
		void RemoveOverlay();
		void EnsureOverlayExists();
		void UseOffHandPressed();
		void OnLoadAssetsComplete();
		void UseOffHandReleased();
		void UseMainHandPressed();
		void OnBeingUnequipped();
		void OnBeingEquipped();
		void OnDestroyed_Event_1(class AActor* DestroyedActor);
		void OnStartUsing(int32_t UseType);
		void ServerSetRange(int32_t Range);
		void UpdateRange(int32_t NewRange);
		void RangeError();
		void UpdateOverlayTexture();
		void ExecuteUbergraph_BP_Moskito_RF(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
