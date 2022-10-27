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
	 * BlueprintGeneratedClass ShuttleToFrigateControl.ShuttleToFrigateControl_C
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class AShuttleToFrigateControl_C : public ARaidFrigateShuttleControl
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
