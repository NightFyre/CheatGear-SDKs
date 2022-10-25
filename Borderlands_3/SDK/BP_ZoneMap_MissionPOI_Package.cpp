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
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_MissionPOI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.UserConstructionScript");
		
		ABP_ZoneMap_MissionPOI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ZoneMap_MissionPOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ReceiveBeginPlay");
		
		ABP_ZoneMap_MissionPOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.BeginZoneMapCursorOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_MissionPOI_C::BeginZoneMapCursorOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.BeginZoneMapCursorOver");
		
		ABP_ZoneMap_MissionPOI_C_BeginZoneMapCursorOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.EndZoneMapCursorOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_MissionPOI_C::EndZoneMapCursorOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.EndZoneMapCursorOver");
		
		ABP_ZoneMap_MissionPOI_C_EndZoneMapCursorOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.K2_OnWaypointUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ZoneMap_MissionPOI_C::K2_OnWaypointUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.K2_OnWaypointUpdated");
		
		ABP_ZoneMap_MissionPOI_C_K2_OnWaypointUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ExecuteUbergraph_BP_ZoneMap_MissionPOI
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMap_MissionPOI_C::ExecuteUbergraph_BP_ZoneMap_MissionPOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C.ExecuteUbergraph_BP_ZoneMap_MissionPOI");
		
		ABP_ZoneMap_MissionPOI_C_ExecuteUbergraph_BP_ZoneMap_MissionPOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneMap_MissionPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneMap_MissionPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C");
		return ptr;
	}

}


