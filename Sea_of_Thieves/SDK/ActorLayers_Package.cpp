/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorLayerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorLayerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorLayers.ActorLayerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstancedLayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstancedLayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorLayers.InstancedLayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayerActorsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayerActorsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorLayers.LayerActorsDataAsset");
		return ptr;
	}

}


