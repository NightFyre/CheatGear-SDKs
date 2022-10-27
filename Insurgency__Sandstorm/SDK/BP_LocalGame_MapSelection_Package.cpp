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
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_LocalGame_MapSelection_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnCustomNavigation");
		
		UBP_LocalGame_MapSelection_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.PopulateMaps
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_LocalGame_MapSelection_C::PopulateMaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.PopulateMaps");
		
		UBP_LocalGame_MapSelection_C_PopulateMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ChooseMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_LocalGame_MapButton_C*                   NewMapButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_MapSelection_C::ChooseMap(class UBP_LocalGame_MapButton_C* NewMapButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ChooseMap");
		
		UBP_LocalGame_MapSelection_C_ChooseMap_Params params {};
		params.NewMapButton = NewMapButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.CheckMapAllowed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LocalGame_MapSelection_C::CheckMapAllowed(const class FString& Map, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.CheckMapAllowed");
		
		UBP_LocalGame_MapSelection_C_CheckMapAllowed_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.GetWidgetToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_MapSelection_C::GetWidgetToFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.GetWidgetToFocus");
		
		UBP_LocalGame_MapSelection_C_GetWidgetToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_LocalGame_MapSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.Construct");
		
		UBP_LocalGame_MapSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ExecuteUbergraph_BP_LocalGame_MapSelection
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_MapSelection_C::ExecuteUbergraph_BP_LocalGame_MapSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.ExecuteUbergraph_BP_LocalGame_MapSelection");
		
		UBP_LocalGame_MapSelection_C_ExecuteUbergraph_BP_LocalGame_MapSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnMapChosen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_LocalGame_MapSelection_C::OnMapChosen__DelegateSignature(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C.OnMapChosen__DelegateSignature");
		
		UBP_LocalGame_MapSelection_C_OnMapChosen__DelegateSignature_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LocalGame_MapSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LocalGame_MapSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C");
		return ptr;
	}

}


