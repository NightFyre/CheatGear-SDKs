/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_VehiclePOI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.UserConstructionScript");
		
		ABP_ZoneMap_VehiclePOI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Activate POI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_VehiclePOI_C::Activate_POI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Activate POI");
		
		ABP_ZoneMap_VehiclePOI_C_Activate_POI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ZoneMap_VehiclePOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ReceiveBeginPlay");
		
		ABP_ZoneMap_VehiclePOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Begin Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_VehiclePOI_C::Begin_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.Begin Zone Map Cursor Over");
		
		ABP_ZoneMap_VehiclePOI_C_Begin_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.End Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_VehiclePOI_C::End_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.End Zone Map Cursor Over");
		
		ABP_ZoneMap_VehiclePOI_C_End_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ExecuteUbergraph_BP_ZoneMap_VehiclePOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMap_VehiclePOI_C::ExecuteUbergraph_BP_ZoneMap_VehiclePOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C.ExecuteUbergraph_BP_ZoneMap_VehiclePOI");
		
		ABP_ZoneMap_VehiclePOI_C_ExecuteUbergraph_BP_ZoneMap_VehiclePOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneMap_VehiclePOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneMap_VehiclePOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C");
		return ptr;
	}

}


