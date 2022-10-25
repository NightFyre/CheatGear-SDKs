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
	 * Class DonkehFrameworkUI.DFBaseMenu
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UDFBaseMenu : public UUserWidget
	{
	public:
		unsigned char                                              bMenuConstructedInDesigner : 1;                          // 0x0230(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bMenuPopped : 1;                                         // 0x0230(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bFlushPlayerInputUponConstruction : 1;                   // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YK4G[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		void RemoveFromMenuStack();
		void ReceiveOnMenuUncovered();
		void ReceiveOnMenuPush();
		void ReceiveOnMenuPop();
		void ReceiveOnMenuCovered();
		bool IsTopOfMenuStack();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFContextualWidgetBase
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UDFContextualWidgetBase : public UUserWidget
	{
	public:
		TArray<class UDFContextualWidgetPrerequisiteBase*>         Prerequisites;                                           // 0x0230(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool TestPrerequisites(bool bInvokeEvents);
		void PrerequisitesMet();
		void PrerequisiteNotMet(class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDFContextualWidgetPrerequisiteBase : public UObject
	{
	public:
		unsigned char                                              bForceSuccess : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02AW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		bool TestPrerequisite();
		bool SatisfiesPrerequisite();
		class UDFContextualWidgetBase* GetWidgetOuter();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFMenuManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDFMenuManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_79KI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMenuStackEntry>                             MenuStack;                                               // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      MenuManagerClassName;                                    // 0x0040(0x0018) Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UDFBaseMenu* Top();
		void RemoveMenu(class UDFBaseMenu* MenuToRemove);
		void PopMenu();
		void ClearMenuStack();
		void ActivateMenu(class UDFBaseMenu* MenuToAdd, EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFMenuManagerBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFMenuManagerBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDFMenuManager* STATIC_GetMenuManager(class UObject* WorldContextObject);
		class UDFBaseMenu* STATIC_CreateAndActivate(class UObject* WorldContextObject, class UClass* MenuWidgetType, class APlayerController* OwningPlayer, EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFMinimap
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UDFMinimap : public UUserWidget
	{
	public:
		TArray<class UDFPOIWidget*>                                MapPOIs;                                                 // 0x0230(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QM6S[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CurrentMapPos;                                           // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentZoom;                                             // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxZoom;                                                 // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MapLength;                                               // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             MapOffset;                                               // 0x026C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          POIDataTable;                                            // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        OuterCanvas;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCanvasPanel*                                        MapCanvas;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              MapImg;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateZoomValue(float NewZoomValue);
		void UpdateMapPos(const struct FVector2D& NewMapPos);
		void SetMapDirty();
		bool RemovePOIByActorClass(class UClass* POIActorClass);
		bool RemovePOIByActor(class AActor* POIActorToRemove);
		bool RemovePOIAt(int32_t Index);
		bool RemovePOI(class UDFPOIWidget* POIToRemove);
		void ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
		bool ProjectWorldLocationToMap(const struct FVector& WorldLocation, struct FVector2D* MapLocation);
		void OnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
		bool HasPOI(class UDFPOIWidget* POI);
		bool HasAnyPOIs();
		int32_t GetPOIIndex(class UDFPOIWidget* POI);
		int32_t GetPOICount();
		class UDFPOIWidget* GetPOIAt(int32_t Index);
		struct FVector2D GetMapSizeLocal();
		struct FVector2D GetMapSizeAbsolute();
		bool FindPOIByActor(class AActor* POIActor, class UDFPOIWidget** OutFoundPOI);
		bool DeprojectMapLocationToWorld(const struct FVector2D& MapLocation, struct FVector* WorldLocation);
		bool ConvertMapLocationToLocalWidgetLocation(const struct FVector2D& MapLocation, struct FVector2D* WidgetLocation);
		int32_t ClearPOIs();
		class UDFPOIWidget* AddNewPOI(class AActor* POIActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFPOIComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UDFPOIComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_R3R5[0x14];                                  // 0x00B0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoRegisterPOI : 1;                                    // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IRI[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (PADDING)

	public:
		void UnregisterPOI();
		void RegisterPOI(class UDFMinimap* MinimapWidget);
		void OnMinimapLateInit(class UDFMinimap* NewMinimap);
		bool IsPOIRegistered();
		class UDFPOIWidget* GetPOIWidget();
		class UDFMinimap* GetMinimap();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.DFPOIWidget
	 * Size -> 0x0170 (FullSize[0x03A0] - InheritedSize[0x0230])
	 */
	class UDFPOIWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_9CIQ[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              POIActor;                                                // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMinimapPOITableRow                                 POIActorData;                                            // 0x0248(0x0130) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KM03[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionStateChanged;                                 // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bSelected : 1;                                           // 0x0390(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BM2H[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNamedSlot*                                          IconSlot;                                                // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateRotation();
		void UpdatePosition();
		void SetPOISelectionState(bool bNewSelected);
		void SelectPOI();
		void ReceivePOISelected();
		void ReceivePOIInitialized();
		void ReceivePOIDeselected();
		void ReceiveOnPOIActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		bool ReceiveCanSelect();
		void OnPOIActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnOwningMapDirty();
		bool IsSelectable();
		bool IsPOIActorValid();
		bool IsInitialized();
		bool IsDynamic();
		void InitPOI(class UDFMinimap* OwningMapWidget, class AActor* ActorToTrack, struct FMinimapPOITableRow* ActorPOIData);
		bool HasFixedRotation();
		struct FSlateBrush GetDefaultIconBrush();
		void DeselectPOI();
		bool CanSelect();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkUI.POIWidgetSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPOIWidgetSlotInterface : public UInterface
	{
	public:
		void SetIconBrush(const struct FSlateBrush& NewIconBrush);
		class UNamedSlot* GetIconSlot();
		struct FSlateBrush GetIconBrush();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
