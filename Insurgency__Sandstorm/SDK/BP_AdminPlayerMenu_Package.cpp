/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.ClearPlayerList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AdminPlayerMenu_C::ClearPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.ClearPlayerList");
		
		UBP_AdminPlayerMenu_C_ClearPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.RefreshPlayerList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AdminPlayerMenu_C::RefreshPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.RefreshPlayerList");
		
		UBP_AdminPlayerMenu_C_RefreshPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_AdminPlayerMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.Construct");
		
		UBP_AdminPlayerMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.ExecuteUbergraph_BP_AdminPlayerMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AdminPlayerMenu_C::ExecuteUbergraph_BP_AdminPlayerMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerMenu.BP_AdminPlayerMenu_C.ExecuteUbergraph_BP_AdminPlayerMenu");
		
		UBP_AdminPlayerMenu_C_ExecuteUbergraph_BP_AdminPlayerMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AdminPlayerMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AdminPlayerMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AdminPlayerMenu.BP_AdminPlayerMenu_C");
		return ptr;
	}

}


