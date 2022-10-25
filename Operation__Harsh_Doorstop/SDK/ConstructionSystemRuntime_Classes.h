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
	 * Class ConstructionSystemRuntime.ConstructionSystemTool
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UConstructionSystemTool : public UObject
	{
	public:
		unsigned char                                              UnknownData_LCVQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemBuildTool
	 * Size -> 0x0138 (FullSize[0x0168] - InheritedSize[0x0030])
	 */
	class UConstructionSystemBuildTool : public UConstructionSystemTool
	{
	public:
		float                                                      TraceDistance;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CursorRotationStepAngle;                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConstructionSystemCursor*                           Cursor;                                                  // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrefabricatorAssetInterface*                        ActivePrefabAsset;                                       // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z3XS[0x120];                                 // 0x0048(0x0120) MISSED OFFSET (PADDING)

	public:
		void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);
		void HandleInput_RotateCursorStep(float NumSteps);
		void HandleInput_CursorMovePrev();
		void HandleInput_CursorMoveNext();
		void HandleInput_ConstructAtCursor();
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemComponent
	 * Size -> 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
	 */
	class UConstructionSystemComponent : public UActorComponent
	{
	public:
		class UMaterialInterface*                                  CursorMaterial;                                          // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  CursorInvalidMaterial;                                   // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceStartDistance;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceSweepRadius;                                        // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ConstructionCameraActor;                                 // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstructionCameraTransitionTime;                        // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstructionCameraTransitionExp;                         // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BuildMenuUI;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConstructionSystemUIAsset*                          BuildMenuData;                                           // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         BuildMenuUIInstance;                                     // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConstructionSystemToolType                                ActiveToolType;                                          // 0x00F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUME[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EConstructionSystemToolType, class UConstructionSystemTool*> Tools;                                                   // 0x00F8(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OIF[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleConstructionSystem();
		void ShowBuildMenu();
		void SetActiveTool(EConstructionSystemToolType InToolType);
		void HideBuildMenu();
		class UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
		EConstructionSystemToolType GetActiveToolType();
		class UConstructionSystemTool* GetActiveTool();
		void EnableConstructionSystem(EConstructionSystemToolType InToolType);
		void DisableConstructionSystem();
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemItemUserData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UConstructionSystemItemUserData : public UAssetUserData
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKUN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemCursor
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UConstructionSystemCursor : public UObject
	{
	public:
		class APrefabActor*                                        CursorGhostActor;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CursorSeed;                                              // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZIAN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CursorMaterial;                                          // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  CursorInvalidMaterial;                                   // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPrefabricatorConstructionSnapComponent*>     SnapComponents;                                          // 0x0048(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ActiveSnapComponentIndex;                                // 0x0058(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2BYQ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UConstructionSystemRemoveTool : public UConstructionSystemTool
	{
	public:
		float                                                      TraceDistance;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APrefabActor>                         FocusedActor;                                            // 0x0034(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B2IN[0x54];                                  // 0x003C(0x0054) MISSED OFFSET (PADDING)

	public:
		void HandleInput_RemoveAtCursor();
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemSaveGame
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UConstructionSystemSaveGame : public USaveGame
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UserIndex;                                               // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSVA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConstructionSystemSavePlayerInfo                   PlayerInfo;                                              // 0x0040(0x0050) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstructionSystemSaveConstructedItem>      ConstructedItems;                                        // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SaveConstructionSystemLevel(class UObject* WorldContextObject, const class FString& SaveSlotName, int32_t UserIndex, bool bSavePlayerState);
		void STATIC_LoadConstructionSystemLevel(class UObject* WorldContextObject, const class FName& LevelName, bool bAbsolute, const class FString& SaveSlotName, int32_t UserIndex);
		void STATIC_HandleConstructionSystemLevelLoad(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
	 * Size -> 0x0020 (FullSize[0x0450] - InheritedSize[0x0430])
	 */
	class UPrefabricatorConstructionSnapComponent : public UBoxComponent
	{
	public:
		EPrefabricatorConstructionSnapType                         SnapType;                                                // 0x0430(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPCSnapConstraintFloor                              FloorConstraint;                                         // 0x0431(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPCSnapConstraintWall                               WallConstraint;                                          // 0x0437(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAlignToGroundSlope;                                     // 0x043B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxGroundSlopeConstraint;                            // 0x043C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZU41[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxGroundPlacementSlope;                                 // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFR9[0xC];                                   // 0x0444(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class APrefabricatorConstructionSnap : public AActor
	{
	public:
		class UPrefabricatorConstructionSnapComponent*             ConstructionSnapComponent;                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemBuildUI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConstructionSystemBuildUI : public UInterface
	{
	public:
		void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);
		void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);
		static UClass* StaticClass();
	};

	/**
	 * Class ConstructionSystemRuntime.ConstructionSystemUIAsset
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UConstructionSystemUIAsset : public UDataAsset
	{
	public:
		class FText                                                MenuTitle;                                               // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FConstructionSystemUICategory>               Categories;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
