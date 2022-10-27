﻿#pragma once

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
	 * Class Paper2D.MaterialExpressionSpriteTextureSampler
	 * Size -> 0x0020 (FullSize[0x01F8] - InheritedSize[0x01D8])
	 */
	class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
	{
	public:
		bool                                                       bSampleAdditionalTextures;                               // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z981[0x3];                                   // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AdditionalSlotIndex;                                     // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SlotDisplayName;                                         // 0x01E0(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperCharacter
	 * Size -> 0x0010 (FullSize[0x08C0] - InheritedSize[0x08B0])
	 */
	class APaperCharacter : public ACharacter
	{
	public:
		class UPaperFlipbookComponent*                             Sprite;                                                  // 0x08B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YQRY[0x8];                                   // 0x08B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbook
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPaperFlipbook : public UObject
	{
	public:
		float                                                      FramesPerSecond;                                         // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2FC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaperFlipbookKeyFrame>                      KeyFrames;                                               // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EFlipbookCollisionMode                                     CollisionSource;                                         // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CEOK[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsValidKeyFrameIndex(int32_t Index);
		float GetTotalDuration();
		class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
		class UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);
		int32_t GetNumKeyFrames();
		int32_t GetNumFrames();
		int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbookActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class APaperFlipbookActor : public AActor
	{
	public:
		class UPaperFlipbookComponent*                             RenderComponent;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbookComponent
	 * Size -> 0x0048 (FullSize[0x0760] - InheritedSize[0x0718])
	 */
	class UPaperFlipbookComponent : public UMeshComponent
	{
	public:
		class UPaperFlipbook*                                      SourceFlipbook;                                          // 0x0718(0x0008) Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  Material;                                                // 0x0720(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x0728(0x0004) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLooping : 1;                                            // 0x072C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReversePlayback : 1;                                    // 0x072C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPlaying : 1;                                            // 0x072C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4HDX[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AccumulatedTime;                                         // 0x0730(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CachedFrameIndex;                                        // 0x0734(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        SpriteColor;                                             // 0x0738(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0748(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFinishedPlaying;                                       // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Stop();
		void SetSpriteColor(const struct FLinearColor& NewColor);
		void SetPlayRate(float NewRate);
		void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);
		void SetPlaybackPosition(float NewPosition, bool bFireEvents);
		void SetNewTime(float NewTime);
		void SetLooping(bool bNewLooping);
		bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
		void ReverseFromEnd();
		void Reverse();
		void PlayFromStart();
		void Play();
		void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
		bool IsReversing();
		bool IsPlaying();
		bool IsLooping();
		float GetPlayRate();
		int32_t GetPlaybackPositionInFrames();
		float GetPlaybackPosition();
		int32_t GetFlipbookLengthInFrames();
		float GetFlipbookLength();
		float GetFlipbookFramerate();
		class UPaperFlipbook* GetFlipbook();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperGroupedSpriteActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class APaperGroupedSpriteActor : public AActor
	{
	public:
		class UPaperGroupedSpriteComponent*                        RenderComponent;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperGroupedSpriteComponent
	 * Size -> 0x0038 (FullSize[0x0750] - InheritedSize[0x0718])
	 */
	class UPaperGroupedSpriteComponent : public UMeshComponent
	{
	public:
		TArray<class UMaterialInterface*>                          InstanceMaterials;                                       // 0x0718(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpriteInstanceData>                         PerInstanceSpriteData;                                   // 0x0728(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KQ68[0x18];                                  // 0x0738(0x0018) MISSED OFFSET (PADDING)

	public:
		bool UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
		bool UpdateInstanceColor(int32_t InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
		void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
		bool RemoveInstance(int32_t InstanceIndex);
		bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
		int32_t GetInstanceCount();
		void ClearInstances();
		int32_t AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperRuntimeSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPaperRuntimeSettings : public UObject
	{
	public:
		bool                                                       bEnableSpriteAtlasGroups;                                // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTerrainSplineEditing;                             // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResizeSpriteDataToMatchTextures;                        // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JWG[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSprite
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UPaperSprite : public UObject
	{
	public:
		unsigned char                                              UnknownData_26A7[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SourceUV;                                                // 0x0038(0x0008) Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SourceDimension;                                         // 0x0040(0x0008) Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          SourceTexture;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTexture*>                                    AdditionalSourceTextures;                                // 0x0050(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           BakedSourceUV;                                           // 0x0060(0x0008) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           BakedSourceDimension;                                    // 0x0068(0x0008) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          BakedSourceTexture;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  AlternateMaterial;                                       // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPaperSpriteSocket>                          Sockets;                                                 // 0x0088(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		ESpriteCollisionMode                                       SpriteCollisionDomain;                                   // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6D02[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PixelsPerUnrealUnit;                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBodySetup*                                          BodySetup;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AlternateMaterialSplitIndex;                             // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUFJ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector4>                                    BakedRenderData;                                         // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class APaperSpriteActor : public AActor
	{
	public:
		class UPaperSpriteComponent*                               RenderComponent;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteAtlas
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPaperSpriteAtlas : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSlateBrush STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int32_t Width, int32_t Height);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteComponent
	 * Size -> 0x0028 (FullSize[0x0740] - InheritedSize[0x0718])
	 */
	class UPaperSpriteComponent : public UMeshComponent
	{
	public:
		class UPaperSprite*                                        SourceSprite;                                            // 0x0718(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0720(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        SpriteColor;                                             // 0x0728(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZD2S[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSpriteColor(const struct FLinearColor& NewColor);
		bool SetSprite(class UPaperSprite* NewSprite);
		class UPaperSprite* GetSprite();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainActor
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class APaperTerrainActor : public AActor
	{
	public:
		class USceneComponent*                                     DummyRoot;                                               // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTerrainSplineComponent*                        SplineComponent;                                         // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTerrainComponent*                              RenderComponent;                                         // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainComponent
	 * Size -> 0x0060 (FullSize[0x0750] - InheritedSize[0x06F0])
	 */
	class UPaperTerrainComponent : public UPrimitiveComponent
	{
	public:
		class UPaperTerrainMaterial*                               TerrainMaterial;                                         // 0x06F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosedSpline;                                           // 0x06F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilledSpline;                                           // 0x06F9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V64C[0x6];                                   // 0x06FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPaperTerrainSplineComponent*                        AssociatedSpline;                                        // 0x0700(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0708(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SegmentOverlapAmount;                                    // 0x070C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TerrainColor;                                            // 0x0710(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReparamStepsPerSegment;                                  // 0x0720(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpriteCollisionMode                                       SpriteCollisionDomain;                                   // 0x0724(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIRW[0x3];                                   // 0x0725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionThickness;                                      // 0x0728(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WPYW[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0730(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQ7C[0x18];                                  // 0x0738(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTerrainColor(const struct FLinearColor& NewColor);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainMaterial
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPaperTerrainMaterial : public UDataAsset
	{
	public:
		TArray<struct FPaperTerrainMaterialRule>                   Rules;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UPaperSprite*                                        InteriorFill;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainSplineComponent
	 * Size -> 0x0010 (FullSize[0x07F0] - InheritedSize[0x07E0])
	 */
	class UPaperTerrainSplineComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_A6M7[0x10];                                  // 0x07E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileLayer
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UPaperTileLayer : public UObject
	{
	public:
		class FText                                                LayerName;                                               // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    LayerWidth;                                              // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LayerHeight;                                             // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHiddenInGame : 1;                                       // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bLayerCollides : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bOverrideCollisionThickness : 1;                         // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bOverrideCollisionOffset : 1;                            // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WK79[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionThicknessOverride;                              // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CollisionOffsetOverride;                                 // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        LayerColor;                                              // 0x0054(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AllocatedWidth;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AllocatedHeight;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZOC[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaperTileInfo>                              AllocatedCells;                                          // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UPaperTileSet*                                       TileSet;                                                 // 0x0080(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            AllocatedGrid;                                           // 0x0088(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMap
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPaperTileMap : public UObject
	{
	public:
		int32_t                                                    MapWidth;                                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapHeight;                                               // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileWidth;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileHeight;                                              // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelsPerUnrealUnit;                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerTileX;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerTileY;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerLayer;                                      // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedTileSet[0x28];                                   // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
		class UMaterialInterface*                                  Material;                                                // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPaperTileLayer*>                             TileLayers;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESpriteCollisionMode                                       SpriteCollisionDomain;                                   // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETileMapProjectionMode                                     ProjectionMode;                                          // 0x008D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUF1[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HexSideLength;                                           // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NYX[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerNameIndex;                                          // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27SF[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMapActor
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class APaperTileMapActor : public AActor
	{
	public:
		class UPaperTileMapComponent*                              RenderComponent;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMapComponent
	 * Size -> 0x0058 (FullSize[0x0770] - InheritedSize[0x0718])
	 */
	class UPaperTileMapComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_4Z7G[0x4];                                   // 0x0718(0x0004) Fix Super Size
		int32_t                                                    MapHeight;                                               // 0x071C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TileWidth;                                               // 0x0720(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TileHeight;                                              // 0x0724(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTileSet*                                       DefaultLayerTileSet;                                     // 0x0728(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0730(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPaperTileLayer*>                             TileLayers;                                              // 0x0738(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		struct FLinearColor                                        TileMapColor;                                            // 0x0748(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    UseSingleLayerIndex;                                     // 0x0758(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseSingleLayer;                                         // 0x075C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z7OB[0x3];                                   // 0x075D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPaperTileMap*                                       TileMap;                                                 // 0x0760(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJQ0[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTileMapColor(const struct FLinearColor& NewColor);
		bool SetTileMap(class UPaperTileMap* NewTileMap);
		void SetTile(int32_t X, int32_t Y, int32_t Layer, const struct FPaperTileInfo& NewValue);
		void SetLayerColor(const struct FLinearColor& NewColor, int32_t Layer);
		void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
		void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
		void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);
		void RebuildCollision();
		bool OwnsTileMap();
		void MakeTileMapEditable();
		void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<struct FVector>* Points, int32_t LayerIndex, bool bWorldSpace);
		struct FLinearColor GetTileMapColor();
		struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
		struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
		struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);
		void GetMapSize(int32_t* MapWidth, int32_t* MapHeight, int32_t* NumLayers);
		struct FLinearColor GetLayerColor(int32_t Layer);
		void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
		class UPaperTileLayer* AddNewLayer();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileSet
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPaperTileSet : public UObject
	{
	public:
		struct FIntPoint                                           TileSize;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          TileSheet;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UTexture*>                                    AdditionalSourceTextures;                                // 0x0038(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate
		struct FIntMargin                                          BorderMargin;                                            // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		struct FIntPoint                                           PerTileSpacing;                                          // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FIntPoint                                           DrawingOffset;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    WidthInTiles;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    HeightInTiles;                                           // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AllocatedWidth;                                          // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AllocatedHeight;                                         // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPaperTileMetadata>                          PerTileData;                                             // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPaperTileSetTerrain>                        Terrains;                                                // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    TileWidth;                                               // 0x0098(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TileHeight;                                              // 0x009C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Margin;                                                  // 0x00A0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Spacing;                                                 // 0x00A4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.TileMapBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FPaperTileInfo STATIC_MakeTile(int32_t TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
		class FName STATIC_GetTileUserData(const struct FPaperTileInfo& Tile);
		struct FTransform STATIC_GetTileTransform(const struct FPaperTileInfo& Tile);
		void STATIC_BreakTile(const struct FPaperTileInfo& Tile, int32_t* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
