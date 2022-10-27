#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass DeskLamp_Destructible_Child.DeskLamp_Destructible_Child_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class ADeskLamp_Destructible_Child_C : public ABase_Destructible_BP_C
	{
	public:
		class USpotLightComponent*                                 SpotLight;                                               // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
