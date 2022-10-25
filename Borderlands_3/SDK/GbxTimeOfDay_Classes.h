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
	 * Class GbxTimeOfDay.MaterialExpressionTimeOfDay
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionTimeOfDay : public UMaterialExpression
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayActor
	 * Size -> 0x0078 (FullSize[0x04D0] - InheritedSize[0x0458])
	 */
	class ATimeOfDayActor : public AActor
	{
	public:
		class UTimeOfDayComponent*                                 TimeOfDayComponent;                                      // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDirectionalLightComponent*                          DirectionalLightComponent;                               // 0x0460(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkyLightComponent*                                  SkyLightComponent;                                       // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAtmosphericFogComponent*                            AtmosphericFogComponent;                                 // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExponentialHeightFogComponent*                      ExponentialHeightFogComponent;                           // 0x0478(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0480(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPostProcessComponent*                               PostProcessComponent;                                    // 0x0488(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ALight*>                                      ControlledLightActors;                                   // 0x0490(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FControlledLight>                            ControlledLights;                                        // 0x04A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x04B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXDW[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StartLayer;                                              // 0x04B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UObject>>                      EventListeners;                                          // 0x04C0(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		class UDirectionalLightComponent* GetDirectionalLightComponent();
		void EnumerateLayerNames(TArray<class FName>* OutLayerNames);
		void AddEventListener(class UObject* InListener);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeOfDayBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration);
		void STATIC_TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration);
		void STATIC_TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration);
		void STATIC_StartTimeOfDay(class UObject* WorldContextObject);
		void STATIC_SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay);
		void STATIC_PauseTimeOfDay(class UObject* WorldContextObject);
		ETimeOfDayState STATIC_GetTimeOfDayState(class UObject* WorldContextObject);
		float STATIC_GetTimeOfDay(class UObject* WorldContextObject);
		void STATIC_AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayComponent
	 * Size -> 0x00E0 (FullSize[0x03B0] - InheritedSize[0x02D0])
	 */
	class UTimeOfDayComponent : public USceneComponent
	{
	public:
		struct FTimeOfDayCycleInstanceData                         TimeOfDayCycleInstanceData;                              // 0x02D0(0x00A0) Edit, NativeAccessSpecifierPublic
		class UTimeOfDayCycleInstance*                             TimeOfDayCycleInstance;                                  // 0x0370(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOfDay;                                               // 0x0378(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   CycleCount;                                              // 0x037C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                CurrentLayerName;                                        // 0x0380(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TransitionTimeLeft;                                      // 0x0388(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LastEvaluatedTime;                                       // 0x038C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CinematicTimeOfDay;                                      // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseCinematicTimeOfDay;                                  // 0x0394(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3TKT[0xB];                                   // 0x0395(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldTick;                                             // 0x03A0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD2I[0xF];                                   // 0x03A1(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay);
		void SetCinematicTimeOfDay(float InCinematicTimeOfDay);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayCycle
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UTimeOfDayCycle : public UObject
	{
	public:
		class UMaterialParameterCollection*                        ParameterCollection;                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          TimeOfDayAudioParameter;                                 // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CycleLength;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW0Y[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayCycleInstance
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UTimeOfDayCycleInstance : public UObject
	{
	public:
		class UTimeOfDayCycle*                                     ParentCycle;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCycleLength;                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP5G[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideCycleLength;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLayerParameterCurves>                       ParameterLayerCurves;                                    // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLayerPropertyCurves>                        PropertyLayerCurves;                                     // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayKeyBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTimeOfDayKeyBase : public UObject
	{
	public:
		class UTimeOfDayLayer*                                     ParentLayer;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KeyTime;                                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETimeOfDayKeyType                                          KeyType;                                                 // 0x0035(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y0JQ[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayEventKey
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UTimeOfDayEventKey : public UTimeOfDayKeyBase
	{
	public:
		class FName                                                EventName;                                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETimeOfDayState                                            State;                                                   // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMN4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayLayer
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UTimeOfDayLayer : public UObject
	{
	public:
		class UTimeOfDayCycle*                                     ParentCycle;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LayerOverrideName;                                       // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTimeOfDayKeyBase*>                           Keys;                                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCollectionScalarParameter>                  OverrideScalarParameters;                                // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionVectorParameter>                  OverrideVectorParameters;                                // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionScalarParameter>                  OverrideScalarProperties;                                // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionVectorParameter>                  OverrideVectorProperties;                                // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FTODCollectionVector4Parameter>              OverrideVector4Properties;                               // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTimeOfDay.TimeOfDayPropertyKey
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UTimeOfDayPropertyKey : public UTimeOfDayKeyBase
	{
	public:
		TArray<struct FCollectionScalarParameter>                  OverrideScalarParameters;                                // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionVectorParameter>                  OverrideVectorParameters;                                // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionScalarParameter>                  OverrideScalarProperties;                                // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FCollectionVectorParameter>                  OverrideVectorProperties;                                // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FTODCollectionVector4Parameter>              OverrideVector4Properties;                               // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
