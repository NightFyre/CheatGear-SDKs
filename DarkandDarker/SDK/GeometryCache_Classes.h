#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class GeometryCache.GeometryCache
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UGeometryCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_9HUD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UGeometryCacheTrack*>                         Tracks;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S99[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartFrame;                                              // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    EndFrame;                                                // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint64_t                                                   Hash;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheActor
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class AGeometryCacheActor : public AActor
	{
	public:
		class UGeometryCacheComponent*                             GeometryCacheComponent;                                  // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGeometryCacheComponent* GetGeometryCacheComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGeometryCacheCodecBase : public UObject
	{
	public:
		TArray<int32_t>                                            TopologyRanges;                                          // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecRaw
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
	{
	public:
		int32_t                                                    DummyProperty;                                           // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KD22[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecV1
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
	{
	public:
		unsigned char                                              UnknownData_8N2V[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheComponent
	 * Size -> 0x0088 (FullSize[0x05F0] - InheritedSize[0x0568])
	 */
	class UGeometryCacheComponent : public UMeshComponent
	{
	public:
		class UGeometryCache*                                      GeometryCache;                                           // 0x0568(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLooping;                                                // 0x0571(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExtrapolateFrames;                                      // 0x0572(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7EI[0x1];                                   // 0x0573(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTimeOffset;                                         // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlaybackSpeed;                                           // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MotionVectorScale;                                       // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTracks;                                               // 0x0580(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x0584(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2X2N[0x4C];                                  // 0x0588(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x05D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManualTick;                                             // 0x05D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideWireframeColor;                                 // 0x05D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8TZ8[0x2];                                   // 0x05DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        WireframeOverrideColor;                                  // 0x05DC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XCY8[0x4];                                   // 0x05EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
		void Stop();
		void SetWireframeOverrideColor(const struct FLinearColor& Color);
		void SetStartTimeOffset(float NewStartTimeOffset);
		void SetPlaybackSpeed(float NewPlaybackSpeed);
		void SetOverrideWireframeColor(bool bOverride);
		void SetMotionVectorScale(float NewMotionVectorScale);
		void SetLooping(bool bNewLooping);
		bool SetGeometryCache(class UGeometryCache* NewGeomCache);
		void SetExtrapolateFrames(bool bNewExtrapolating);
		void PlayReversedFromEnd();
		void PlayReversed();
		void PlayFromStart();
		void Play();
		void Pause();
		bool IsPlayingReversed();
		bool IsPlaying();
		bool IsLooping();
		bool IsExtrapolatingFrames();
		struct FLinearColor GetWireframeOverrideColor();
		float GetStartTimeOffset();
		float GetPlaybackSpeed();
		float GetPlaybackDirection();
		bool GetOverrideWireframeColor();
		int32_t GetNumberOfFrames();
		float GetMotionVectorScale();
		float GetDuration();
		float GetAnimationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGeometryCacheTrack : public UObject
	{
	public:
		float                                                      Duration;                                                // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HYNI[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
	{
	public:
		uint32_t                                                   NumMeshSamples;                                          // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ORF3[0x24];                                  // 0x005C(0x0024) MISSED OFFSET (PADDING)

	public:
		void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrackStreamable
	 * Size -> 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
	{
	public:
		class UGeometryCacheCodecBase*                             Codec;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0TT[0x68];                                  // 0x0060(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartSampleTime;                                         // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9XR[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformAnimation
	 * Size -> 0x00C8 (FullSize[0x0120] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_LAP1[0xC8];                                  // 0x0058(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	 * Size -> 0x00C8 (FullSize[0x0120] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_ZMV5[0xC8];                                  // 0x0058(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.NiagaraGeometryCacheRendererProperties
	 * Size -> 0x0288 (FullSize[0x0358] - InheritedSize[0x00D0])
	 */
	class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
	{
	public:
		TArray<struct FNiagaraGeometryCacheReference>              GeometryCaches;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooping;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU8X[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ComponentCountLimit;                                     // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RotationBinding;                                         // 0x0140(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ScaleBinding;                                            // 0x0198(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ElapsedTimeBinding;                                      // 0x01F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x0248(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ArrayIndexBinding;                                       // 0x02A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x02F8(0x0058) Edit, NativeAccessSpecifierPublic
		int32_t                                                    RendererVisibility;                                      // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAssignComponentsOnParticleID;                           // 0x0354(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULWB[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
