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
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.UserConstructionScript");
		
		ABP_PlanetPOI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.Select__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::Select__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Select__FinishedFunc");
		
		ABP_PlanetPOI_C_Select__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.Select__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::Select__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Select__UpdateFunc");
		
		ABP_PlanetPOI_C_Select__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.Activate POI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::Activate_POI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Activate POI");
		
		ABP_PlanetPOI_C_Activate_POI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.ReceiveBeginPlay");
		
		ABP_PlanetPOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.End Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::End_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.End Zone Map Cursor Over");
		
		ABP_PlanetPOI_C_End_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.Begin Zone Map Cursor Over
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::Begin_Zone_Map_Cursor_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Begin Zone Map Cursor Over");
		
		ABP_PlanetPOI_C_Begin_Zone_Map_Cursor_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.Highlight POI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanetPOI_C::Highlight_POI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.Highlight POI");
		
		ABP_PlanetPOI_C_Highlight_POI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PlanetPOI.BP_PlanetPOI_C.ExecuteUbergraph_BP_PlanetPOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlanetPOI_C::ExecuteUbergraph_BP_PlanetPOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanetPOI.BP_PlanetPOI_C.ExecuteUbergraph_BP_PlanetPOI");
		
		ABP_PlanetPOI_C_ExecuteUbergraph_BP_PlanetPOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlanetPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlanetPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C");
		return ptr;
	}

}


