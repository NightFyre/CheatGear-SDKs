#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass PETBottle03.PETBottle03_C
	 * Size -> 0x0008 (FullSize[0x0A78] - InheritedSize[0x0A70])
	 */
	class APETBottle03_C : public ADrinkItem
	{
	public:
		class URainCollectorComponent*                             RainCollector;                                           // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
