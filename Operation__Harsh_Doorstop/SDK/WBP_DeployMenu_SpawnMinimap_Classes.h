#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C
	 * Size -> 0x00A8 (FullSize[0x0340] - InheritedSize[0x0298])
	 */
	class UWBP_DeployMenu_SpawnMinimap_C : public UDeployMenu_SpawnMinimap
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            MapMI;                                                   // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MapTexture[0x28];                                        // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      InitialZoom;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R6WG[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MapMaterial;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PanSpeedFactor;                                          // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomDivisor;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomStep;                                                // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MapTint;                                                 // 0x02EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDonePreloading;                                         // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMenuInitialized;                                        // 0x02FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BFTZ[0x2];                                   // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CurrentMapTexture;                                       // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumContentToLoad;                                        // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumLoadedContent;                                        // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPreloadFinished;                                       // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSpawnPointSelected;                                    // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSpawnPointDeselected;                                  // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdatePlayerPOIs();
		void SetCurrentMapTexture(class UTexture2D* NewMapTexture);
		void HasPreloadInProgress(bool* bPreloading);
		void ApplyPreloadedContent();
		void PreloadContent();
		void ZoomOut(float ZoomDecrement);
		void ZoomIn(float ZoomIncrement);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateMapMatParams();
		void GetLocalCursorDelta(struct FGeometry* Geometry, struct FPointerEvent* MouseEvent, struct FVector2D* LocalDelta);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void InitMapBg(class UTexture2D* MapTexture);
		void OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E(class UObject* Loaded);
		void OnLoaded_BB8D079144A98AFE7BD3849D43A40947(class UClass* Loaded);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnContentPreloadStarted();
		void OnContentPreloadFinished();
		void OnAsyncLoadCompleted();
		void ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
		void ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap(int32_t EntryPoint);
		void OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor);
		void OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
		void OnPreloadFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
