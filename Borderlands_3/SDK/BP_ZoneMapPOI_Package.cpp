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
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMapPOI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript");
		
		ABP_ZoneMapPOI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMapPOI_C::Activate_POI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI");
		
		ABP_ZoneMapPOI_C_Activate_POI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ZoneMapPOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay");
		
		ABP_ZoneMapPOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMapPOI_C::Begin_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over");
		
		ABP_ZoneMapPOI_C_Begin_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMapPOI_C::End_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over");
		
		ABP_ZoneMapPOI_C_End_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMapPOI_C::ExecuteUbergraph_BP_ZoneMapPOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI");
		
		ABP_ZoneMapPOI_C_ExecuteUbergraph_BP_ZoneMapPOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneMapPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneMapPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMapPOI.BP_ZoneMapPOI_C");
		return ptr;
	}

}


