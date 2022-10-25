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
	 * BlueprintGeneratedClass BP_Cash.BP_Cash_C
	 * Size -> 0x0010 (FullSize[0x0918] - InheritedSize[0x0908])
	 */
	class ABP_Cash_C : public AItem
	{
	public:
		unsigned char                                              UnknownData_PTQV[0x8];                                   // 0x0908(0x0008) Fix Super Size
		class UCurrencyItemComponent*                              currencyItem;                                            // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
