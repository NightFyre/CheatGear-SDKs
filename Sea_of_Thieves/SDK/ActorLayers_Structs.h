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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ActorLayers.EActorLayerOwnership
	 */
	enum class EActorLayerOwnership : uint8_t
	{
		Internal = 0,
		External = 1,
		MAX      = 2
	};

	/**
	 * Enum ActorLayers.EActorLayerState
	 */
	enum class EActorLayerState : uint8_t
	{
		Inactive = 0,
		Active   = 1,
		Loading  = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActorLayers.InstancedLayer
	 * Size -> 0x0048
	 */
	struct FInstancedLayer
	{
	public:
		class ULayerActorsDataAsset*                               LayerActors;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  ActorTransforms;                                         // 0x0008(0x0010) Edit, ZeroConstructor
		TArray<class AActor*>                                      SpawnedActors;                                           // 0x0018(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_OKRC[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
