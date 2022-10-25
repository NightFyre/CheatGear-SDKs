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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UWBP_DeployMenu_SpawnMapView_C : public UDeployMenu_SpawnMapView
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_DeployMenu_SpawnMinimap_C*                      Minimap;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bMenuInitialized;                                        // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SCX[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreloadFinished;                                       // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              SelectedPOIActor;                                        // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSpawnPointSelected;                                    // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSpawnPointDeselected;                                  // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdatePlayerPOIs();
		void GetMinimapData(bool* bSuccess, struct FMinimapGenerationSettings* MinimapSettings);
		void PreloadContent();
		void Construct();
		void BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature();
		void OnPreloadFinished_SpawnMapView();
		void BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
		void BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor);
		void ExecuteUbergraph_WBP_DeployMenu_SpawnMapView(int32_t EntryPoint);
		void OnSpawnPointDeselected__DelegateSignature();
		void OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
		void OnPreloadFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
