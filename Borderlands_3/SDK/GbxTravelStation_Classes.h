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
	 * Class GbxTravelStation.TravelGraph
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UTravelGraph : public UObject
	{
	public:
		class UTravelStationData*                                  InitialStation;                                          // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReferencedTravelStations[0x10];                          // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxTravelStation.TravelGraph.ReferencedTravelStations
		unsigned char                                              ReferencedLevels[0x10];                                  // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxTravelStation.TravelGraph.ReferencedLevels
		unsigned char                                              ReferencedLevelGroups[0x10];                             // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxTravelStation.TravelGraph.ReferencedLevelGroups
		class FText                                                GraphDisplayName;                                        // 0x0060(0x0018) Edit, NativeAccessSpecifierPublic
		class UDownloadableContentData*                            DLCExpansionData;                                        // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExternalGraphLevelLinks>                    ExternalLinksToOtherLevel;                               // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.GlobalTravelGraph
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UGlobalTravelGraph : public UTravelGraph
	{
	public:
		unsigned char                                              UnknownData_6M60[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		void STATIC_DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationTracker
	 * Size -> 0x00F0 (FullSize[0x0548] - InheritedSize[0x0458])
	 */
	class ATravelStationTracker : public AActor
	{
	public:
		TArray<class UTravelStationResurrectComponent*>            ResurrectTravelStations;                                 // 0x0458(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class ULevelTravelStationComponent*>                LevelTravelStations;                                     // 0x0468(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UFastTravelStationComponent*>                 FastTravelStations;                                      // 0x0478(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UFastTravelStationData*>                      AllFastTravelStations;                                   // 0x0488(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FActiveFastTravelData>                       ActiveFastTravelStations;                                // 0x0498(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UFastTravelStationData*>                      HostFastTravelStations;                                  // 0x04A8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               LastActiveTravelToStation_Client;                        // 0x04B8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               LastTravelledThroughStation;                             // 0x04C0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               LastActiveTravelToStation_Server;                        // 0x04C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               LevelArrivalTravelStation;                               // 0x04D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              LastDestinationTravelStationName;                        // 0x04D8(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTravelCountdownInfo                                TravelToStationCountdown;                                // 0x04E8(0x0010) Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		class UGlobalTravelGraph*                                  GlobalTravelGraph;                                       // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XENW[0x48];                                  // 0x0500(0x0048) MISSED OFFSET (PADDING)

	public:
		void TravelToStationTimer();
		void PlayerJoinedTimer();
		void OnRep_TravelToStationCountdown();
		void OnRep_LastActiveTravelToStation();
		void OnRep_HostFastTravelStations();
		class UTravelStationComponentBase* GetTravelStationComponent(class UTravelStationData* TravelStationData);
		class AActor* GetLastTravelledThroughStation();
		class AActor* GetLastActiveTravelToStation(class APlayerController* pc);
		class UFastTravelStationData* GetFastTravelStationInfo(const class FString& FastTravelStationName);
		TArray<class UFastTravelStationData*> GetAllFastTravelStations();
		TArray<struct FActiveFastTravelData> GetActiveFastTravelStationList();
		class UFastTravelStationData* FindFastTravelStationForMap(const class FName& MapName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationComponentBase
	 * Size -> 0x0020 (FullSize[0x0710] - InheritedSize[0x06F0])
	 */
	class UTravelStationComponentBase : public UPrimitiveComponent
	{
	public:
		class FString                                              TravelDataSelection;                                     // 0x06F0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2F2P[0x8];                                   // 0x0700(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TravelDataClassName;                                     // 0x0708(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool STATIC_TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel);
		bool GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, bool bTestOnly, bool bForVehicle);
		void STATIC_EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.FastTravelStationComponent
	 * Size -> 0x0030 (FullSize[0x0740] - InheritedSize[0x0710])
	 */
	class UFastTravelStationComponent : public UTravelStationComponentBase
	{
	public:
		class UFastTravelStationData*                              FastTravelData;                                          // 0x0710(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFastTravelStationDiscovered;                           // 0x0718(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFastTravelStationUndiscovered;                         // 0x0728(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RDT[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTravelStationActivated(class AActor* PreviousStation);
		void STATIC_FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn);
		bool DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation);
		bool ActivateFastTravel();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelLocationData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTravelLocationData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationData
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UTravelStationData : public UTravelLocationData
	{
	public:
		class FName                                                StationMapName;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxCondition*>                               Dependencies;                                            // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              PreviousStation[0x28];                                   // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxTravelStation.TravelStationData.PreviousStation
		unsigned char                                              OwningLevel[0x28];                                       // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxTravelStation.TravelStationData.OwningLevel
		class FText                                                DisplayName;                                             // 0x0098(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UGbxUIName*                                          DisplayUIName;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x00B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UGbxUIName*                                          DescriptionUI;                                           // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class FName GetStationMapName();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.FastTravelStationData
	 * Size -> 0x0048 (FullSize[0x0120] - InheritedSize[0x00D8])
	 */
	class UFastTravelStationData : public UTravelStationData
	{
	public:
		EFastTravelDirection                                       TravelDirection;                                         // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZC4[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PlanetTransform;                                         // 0x00E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDiscoveredByDefault;                                    // 0x0110(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5923[0xF];                                   // 0x0111(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.FastTravelStationDebugButton
	 * Size -> 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
	 */
	class UFastTravelStationDebugButton : public UGbxUserWidget
	{
	public:
		unsigned char                                              UnknownData_VTNM[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBUTTON*                                             StationButton;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          DescriptionText;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ButtonSelectedColor;                                     // 0x02D8(0x0010) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ButtonUnSelectedColor;                                   // 0x02E8(0x0010) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnStationClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.FastTravelStationDebugMenu
	 * Size -> 0x0068 (FullSize[0x0360] - InheritedSize[0x02F8])
	 */
	class UFastTravelStationDebugMenu : public UGbxDebugMenuSubmenu
	{
	public:
		class UBUTTON*                                             TravelButton;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBox*                                           ActiveStationsButton;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCheckBox*                                           ShowLevelStationsButton;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          TravelStationList;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          ErrorText;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OptionButtonClass;                                       // 0x0320(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAvailableTravelStation>                     AllFastTravelStations;                                   // 0x0328(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FAvailableTravelStation>                     AvailableFastTravelStations;                             // 0x0338(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FAvailableTravelStation>                     AllLevelTravelStations;                                  // 0x0348(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       ShowAllFastTravelStations;                               // 0x0358(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D2S8[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked);
		void OnTravelButtonClicked();
		void OnShowLevelStationsStateChanged(bool bIsChecked);
		void OnActiveStationsStateChanged(bool bIsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.LevelTravelStationComponent
	 * Size -> 0x0040 (FullSize[0x0750] - InheritedSize[0x0710])
	 */
	class ULevelTravelStationComponent : public UTravelStationComponentBase
	{
	public:
		class ULevelTravelStationData*                             LevelTravelData;                                         // 0x0710(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTravelDataConditional>                      LevelTravelDataList;                                     // 0x0718(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      TextRenderEvalRate;                                      // 0x0728(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0M5[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDestinationForTextRenderChanged;                       // 0x0730(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HS0[0x10];                                  // 0x0740(0x0010) MISSED OFFSET (PADDING)

	public:
		class ULevelTravelStationData* GetLevelTravelStationData();
		bool ActivateLevelTravel(class AController* ActivatingController);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.LevelTravelStationData
	 * Size -> 0x0048 (FullSize[0x0120] - InheritedSize[0x00D8])
	 */
	class ULevelTravelStationData : public UTravelStationData
	{
	public:
		class FName                                                TravelToMapName;                                         // 0x00D8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationStationString;                                // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DestinationStation[0x28];                                // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxTravelStation.LevelTravelStationData.DestinationStation
		bool                                                       bVehiclesAllowed;                                        // 0x0118(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVirtualLevel;                                           // 0x0119(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoOutOfMapWaypoints;                                    // 0x011A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UFS[0x5];                                   // 0x011B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.ResurrectTravelStationData
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UResurrectTravelStationData : public UTravelStationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TeleportDestinationActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class ATeleportDestinationActor : public AActor
	{
	public:
		class UTravelStationResurrectComponent*                    ResurrectComponent;                                      // 0x0458(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void STATIC_TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationBase
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class ATravelStationBase : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationModuleSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UTravelStationModuleSettings : public UObject
	{
	public:
		float                                                      PlayerHalfHeight;                                        // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerRadius;                                            // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TravelToStationCountdownTime;                            // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             VehicleExtents;                                          // 0x0034(0x000C) Edit, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationResurrectComponent
	 * Size -> 0x0090 (FullSize[0x07A0] - InheritedSize[0x0710])
	 */
	class UTravelStationResurrectComponent : public UTravelStationComponentBase
	{
	public:
		bool                                                       StationIsActive;                                         // 0x0710(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DefaultStationToActive;                                  // 0x0711(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateOnEnterArea;                                    // 0x0712(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResurrectionActive;                                     // 0x0713(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeverResurectThere;                                     // 0x0714(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79PW[0x3];                                   // 0x0715(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TravelDiscoveredChallenge;                               // 0x0718(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationCylinderTestDelay;                             // 0x0720(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseActivationCylinder;                                   // 0x0724(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YL5[0x3];                                   // 0x0725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivationCylinderRadius;                                // 0x0728(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationCylinderHalfHeight;                            // 0x072C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationCylinderZOffset;                               // 0x0730(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSBX[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStationResurrectActivated;                             // 0x0738(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStationResurrectDeactivated;                           // 0x0748(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResurrectedAtStation;                                  // 0x0758(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UResurrectTravelStationData*                         ResurrectTravelData;                                     // 0x0768(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUEQ[0x30];                                  // 0x0770(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnRep_StationIsActive();
		bool ActivateTravelStation(bool bForceActivation);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationSpawnPointInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTravelStationSpawnPointInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationSpawnPointComponent
	 * Size -> 0x0020 (FullSize[0x0740] - InheritedSize[0x0720])
	 */
	class UTravelStationSpawnPointComponent : public UCapsuleComponent
	{
	public:
		unsigned char                                              UnknownData_U74B[0x8];                                   // 0x0720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStationActorSpawned;                                   // 0x0728(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1VL[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTravelStation.TravelStationVehicleSpawnPointComponent
	 * Size -> 0x0020 (FullSize[0x0740] - InheritedSize[0x0720])
	 */
	class UTravelStationVehicleSpawnPointComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_RL3B[0x8];                                   // 0x0720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStationActorSpawned;                                   // 0x0728(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6HE[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
