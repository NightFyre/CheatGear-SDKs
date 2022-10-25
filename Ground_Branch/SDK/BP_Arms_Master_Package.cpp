/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.OnLoaded_2B84EE764CABC74F03D287943BBEBAD2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_Arms_Master_C::OnLoaded_2B84EE764CABC74F03D287943BBEBAD2(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.OnLoaded_2B84EE764CABC74F03D287943BBEBAD2");
		
		ABP_Arms_Master_C_OnLoaded_2B84EE764CABC74F03D287943BBEBAD2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.UpdateSkin
	 * 		Flags  -> ()
	 */
	void ABP_Arms_Master_C::UpdateSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.UpdateSkin");
		
		ABP_Arms_Master_C_UpdateSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.WatchCheck
	 * 		Flags  -> ()
	 */
	void ABP_Arms_Master_C::WatchCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.WatchCheck");
		
		ABP_Arms_Master_C_WatchCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.Apply
	 * 		Flags  -> ()
	 */
	void ABP_Arms_Master_C::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.Apply");
		
		ABP_Arms_Master_C_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.OnArmsMaterialLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Arms_Master_C::OnArmsMaterialLoaded_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.OnArmsMaterialLoaded_Event");
		
		ABP_Arms_Master_C_OnArmsMaterialLoaded_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.InventoryModifiersUpdated
	 * 		Flags  -> ()
	 */
	void ABP_Arms_Master_C::InventoryModifiersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.InventoryModifiersUpdated");
		
		ABP_Arms_Master_C_InventoryModifiersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Arms_Master.BP_Arms_Master_C.ExecuteUbergraph_BP_Arms_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Arms_Master_C::ExecuteUbergraph_BP_Arms_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Arms_Master.BP_Arms_Master_C.ExecuteUbergraph_BP_Arms_Master");
		
		ABP_Arms_Master_C_ExecuteUbergraph_BP_Arms_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Arms_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Arms_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Arms_Master.BP_Arms_Master_C");
		return ptr;
	}

}


