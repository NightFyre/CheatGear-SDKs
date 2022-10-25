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
	 * Class RBHotFoot.HFActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHFActorInterface : public UInterface
	{
	public:
		void PreEditProperty(const class FString& PropertyName, const class FString& PropertyValue);
		void PostEditProperty(const class FString& PropertyName, const class FString& PropertyValue);
		void OnSelected();
		void OnSaved();
		void OnLoaded();
		void OnEndEdit();
		void OnDeselected();
		void OnBeginEdit();
		struct FVector GetPlacementTranslate();
		void GetCustomPropertyWidget(const class FString& PropertyName);
		void GetCustomDetailWidgets();
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFDragDropOperation
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UHFDragDropOperation : public UDragDropOperation
	{
	public:
		unsigned char                                              UnknownData_C37I[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FVector2D GetViewportPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHFFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class AActor*> SpawnActorsFromFile(class UObject* WorldContextObject, class UHFSave* SaveFile, const class FName& ActorTag);
		void SortActorArray(TArray<class AActor*>* ActorArray, bool bAscendingOrder, bool bByClass, TArray<class AActor*>* ActorArrayRef);
		void SetShapeDrawOnlyIfSelected(class UShapeComponent* Target, bool bNewDrawOnlyIfSelected);
		void SetShapeColour(class UShapeComponent* Target, const struct FColor& NewColour);
		class FName MakeUniqueActorName(const class FString& BaseActorName, TArray<class FString> ExistingActorNames);
		class UHFSave* LoadFile(const class FString& Filename);
		void DrawSolidBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotation, const struct FColor& Color);
		void DrawLines(class UObject* WorldContextObject, TArray<struct FVector> Starts, TArray<struct FVector> Ends, const struct FLinearColor& Color, float Thickness);
		void DrawLine(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float Thickness);
		void DrawArrow(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float ArrowSize, float Thickness);
		bool DirectSave(class UHFSave* SaveObject, const class FString& Filename);
		void DebugGameViewportClient(class UObject* WorldContextObject);
		void ClearActors(class UObject* WorldContextObject, const class FName& ActorTag);
		void AsyncSave(class UObject* WorldContextObject, class UHFSave* SaveObject, const class FString& Filename, const class FName& ActorTag, const class FScriptDelegate& SavedDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFManager
	 * Size -> 0x0200 (FullSize[0x0420] - InheritedSize[0x0220])
	 */
	class AHFManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_FX54[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               PreviousPawn;                                            // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APlayerController*                                   PlayerController;                                        // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_04XI[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSnapToWorldGrid;                                        // 0x0258(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88VV[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridSize;                                                // 0x025C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractiveToolsContext*                            ToolsContext;                                            // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LSX2[0x10];                                  // 0x0268(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnToolNotificationMessage;                               // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnToolWarningMessage;                                    // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJN4[0xF0];                                  // 0x0298(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      SelectedActors;                                          // 0x0388(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KVUN[0x8];                                   // 0x03A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnActorSpawned;                                          // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnActorDeleted;                                          // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRenameSelected;                                        // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPlayerInputChanged;                                    // 0x03E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5MC9[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActorClassToSpawn;                                       // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3EZ2[0x18];                                  // 0x0408(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateGizmos();
		bool SpawnPlaceableActorAt(class UClass* ActorClass, const struct FVector2D& ScreenPosition, const class FName& ActorTag);
		void SnapSelectedToFloor();
		void SetSnapToWorldGrid(bool bNewSnapToWorldGrid);
		void SetShowBlockalls(bool bShow);
		void SetSelectedActorsSharedPropertyValue(const class FString& PropertyName, const class FString& PropertyValue);
		void SetSelectedActor(class AActor* NewSelectedActor);
		void SetSelectActorEnabled(bool bEnabled);
		void SetLocalCoordinateSystem(bool bEnable);
		void SetGridSize(float NewGridSize);
		void SetGizmoMethod(EHGGizmoMethod Method);
		void SetFlyingSpeed(float NewSpeed);
		void SetAxisScreenPos(const struct FVector2D& Pos);
		void SetActorClassToSpawn(class UClass* ActorClass);
		bool RenameSelected(const class FString& NewName, class FString* OutError);
		void RemoveSelectedActor(class AActor* Actor);
		void RefreshLoadedActors(const class FName& ActorTag);
		bool OnMouseButtonInput(const struct FPointerEvent& PointerEvent, EInputEvent Event);
		bool OnInputKey(const struct FKeyEvent& KeyEvent, EInputEvent Event);
		void OnInputAxis(const struct FPointerEvent& PointerEvent);
		void InternalUpdateGizmos();
		void InputSnapSelectedToFloor();
		void InputRenameSelected();
		void InputPasteSelectedActors(bool bAtLocation);
		void InputFocusOnSelected();
		void InputDeleteSelectedActors();
		void InputCutSelectedActors();
		void InputCopySelectedActors();
		bool GetSnapToWorldGrid();
		TArray<struct FHFSharedProperty> GetSharedProperties();
		void GetSharedCustomDetailWidgets();
		TArray<class AActor*> GetSelectedActors();
		float GetGridSize();
		void FocusOnSelected();
		void Exit();
		void EnablePlayerInput(bool bNewValue, bool bForce);
		void ClearSelectedActors();
		void AddSelectedActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFSave
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHFSave : public USaveGame
	{
	public:
		TArray<struct FHFActorSaveData>                            SavedActors;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFSelectActorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHFSelectActorToolBuilder : public USingleClickToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFSelectActorTool
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UHFSelectActorTool : public USingleClickTool
	{
	public:
		unsigned char                                              UnknownData_REEN[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFSpawnActorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHFSpawnActorToolBuilder : public USingleClickToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBHotFoot.HFSpawnActorTool
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UHFSpawnActorTool : public USingleClickTool
	{
	public:
		unsigned char                                              UnknownData_42OB[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
