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
	 * BlueprintGeneratedClass Init_RandomLootCount.Init_RandomLootCount_C
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UInit_RandomLootCount_C : public UAttributeInitializer
	{
	public:
		struct FDataTableRowHandle                                 LootTableEntry;                                          // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
