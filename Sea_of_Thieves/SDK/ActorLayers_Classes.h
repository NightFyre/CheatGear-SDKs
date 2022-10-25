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
	 * Class ActorLayers.ActorLayerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorLayerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorLayers.InstancedLayerComponent
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class UInstancedLayerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_C28R[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInstancedLayer>                             InstancedLayers;                                         // 0x00D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_TF7Y[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorLayers.LayerActorsDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULayerActorsDataAsset : public UDataAsset
	{
	public:
		TArray<TAssetPtr<class UClass>>                            Actors;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper
		TArray<TAssetPtr<class UClass>>                            Items;                                                   // 0x0038(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
