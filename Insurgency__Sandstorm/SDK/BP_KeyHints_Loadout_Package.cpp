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
	 * 		Name   -> Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KeyHints_Loadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.PreConstruct");
		
		UBP_KeyHints_Loadout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KeyHints_Loadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.Construct");
		
		UBP_KeyHints_Loadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.SetKeysVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Rename                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Revert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Empty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KeyHints_Loadout_C::SetKeysVisibility(bool Rename, bool Revert, bool Empty, bool Remove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.SetKeysVisibility");
		
		UBP_KeyHints_Loadout_C_SetKeysVisibility_Params params {};
		params.Rename = Rename;
		params.Revert = Revert;
		params.Empty = Empty;
		params.Remove = Remove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.ExecuteUbergraph_BP_KeyHints_Loadout
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KeyHints_Loadout_C::ExecuteUbergraph_BP_KeyHints_Loadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.ExecuteUbergraph_BP_KeyHints_Loadout");
		
		UBP_KeyHints_Loadout_C_ExecuteUbergraph_BP_KeyHints_Loadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.OnBackButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyHints_Loadout_C::OnBackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.OnBackButtonPressed__DelegateSignature");
		
		UBP_KeyHints_Loadout_C_OnBackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KeyHints_Loadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KeyHints_Loadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KeyHints_Loadout.BP_KeyHints_Loadout_C");
		return ptr;
	}

}


