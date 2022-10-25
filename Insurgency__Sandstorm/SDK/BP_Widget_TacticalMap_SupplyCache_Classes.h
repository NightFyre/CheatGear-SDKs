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
	 * WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UBP_Widget_TacticalMap_SupplyCache_C : public UMapSupplyCrateActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void ExecuteUbergraph_BP_Widget_TacticalMap_SupplyCache(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
