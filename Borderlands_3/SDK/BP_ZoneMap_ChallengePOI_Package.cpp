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
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.UserConstructionScript");
		
		ABP_ZoneMap_ChallengePOI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Activate POI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::Activate_POI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Activate POI");
		
		ABP_ZoneMap_ChallengePOI_C_Activate_POI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ReceiveBeginPlay");
		
		ABP_ZoneMap_ChallengePOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Begin Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::Begin_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Begin Zone Map Cursor Over");
		
		ABP_ZoneMap_ChallengePOI_C_Begin_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.End Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::End_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.End Zone Map Cursor Over");
		
		ABP_ZoneMap_ChallengePOI_C_End_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.K2_OnChallengeUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ZoneMap_ChallengePOI_C::K2_OnChallengeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.K2_OnChallengeUpdated");
		
		ABP_ZoneMap_ChallengePOI_C_K2_OnChallengeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ExecuteUbergraph_BP_ZoneMap_ChallengePOI
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMap_ChallengePOI_C::ExecuteUbergraph_BP_ZoneMap_ChallengePOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ExecuteUbergraph_BP_ZoneMap_ChallengePOI");
		
		ABP_ZoneMap_ChallengePOI_C_ExecuteUbergraph_BP_ZoneMap_ChallengePOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneMap_ChallengePOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneMap_ChallengePOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C");
		return ptr;
	}

}


