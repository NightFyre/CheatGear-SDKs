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
	 * WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_EmptyVehicle.BP_Widget_TacticalMap_EmptyVehicle_C
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class UBP_Widget_TacticalMap_EmptyVehicle_C : public UMapVehicleWidget
	{
	public:
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AVehicleBase*                                        Vehicle;                                                 // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
