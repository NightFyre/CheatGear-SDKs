/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotWearingGauge.WB_EquipmentSlotWearingGauge_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_EquipmentSlotWearingGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotWearingGauge.WB_EquipmentSlotWearingGauge_C.Construct");
		
		UWB_EquipmentSlotWearingGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotWearingGauge.WB_EquipmentSlotWearingGauge_C.ExecuteUbergraph_WB_EquipmentSlotWearingGauge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EquipmentSlotWearingGauge_C::ExecuteUbergraph_WB_EquipmentSlotWearingGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotWearingGauge.WB_EquipmentSlotWearingGauge_C.ExecuteUbergraph_WB_EquipmentSlotWearingGauge");
		
		UWB_EquipmentSlotWearingGauge_C_ExecuteUbergraph_WB_EquipmentSlotWearingGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_EquipmentSlotWearingGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_EquipmentSlotWearingGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_EquipmentSlotWearingGauge.WB_EquipmentSlotWearingGauge_C");
		return ptr;
	}

}


