#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class ShortRangeMarkerFramework.ShortRangeMarker
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class AShortRangeMarker : public AActor
	{
	public:
		unsigned char                                              UnknownData_75HE[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x03D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient
		float                                                      LifetimerTimer;                                          // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FadeTimer;                                               // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TriggerFadeIn;                                           // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected
		class FScriptMulticastDelegate                             TriggerFadeOut;                                          // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected
		TArray<TWeakObjectPtr<class AActor>>                       CachedActors;                                            // 0x0410(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper

	public:
		void Multicast_OnCleanUp();
		static UClass* StaticClass();
	};

	/**
	 * Class ShortRangeMarkerFramework.ShortRangeMarkerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShortRangeMarkerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShortRangeMarkerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors);
		static UClass* StaticClass();
	};

	/**
	 * Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UShortRangeMarkerDataAsset : public UDataAsset
	{
	public:
		class UActorSpawnData*                                     RewardMarker;                                            // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RewardMarkerHeight;                                      // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HN1W[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
