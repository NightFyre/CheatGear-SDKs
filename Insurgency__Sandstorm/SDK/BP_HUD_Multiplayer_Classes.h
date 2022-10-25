#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_HUD_Multiplayer.BP_HUD_Multiplayer_C
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class ABP_HUD_Multiplayer_C : public AHUDMultiplayer
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
