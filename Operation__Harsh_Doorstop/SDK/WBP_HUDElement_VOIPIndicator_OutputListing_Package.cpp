/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.CheckForClassSymbolUpdates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::CheckForClassSymbolUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.CheckForClassSymbolUpdates");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.UpdateClassSymbol
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::UpdateClassSymbol(class UHDKit* Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.UpdateClassSymbol");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetClassSymbolForLoadout
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDKit*                                      Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 ClassSymbolToUse                                           (Parm, OutParm)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::GetClassSymbolForLoadout(class UHDKit* Loadout, struct FSlateBrush* ClassSymbolToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetClassSymbolForLoadout");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassSymbolToUse != nullptr)
			*ClassSymbolToUse = params.ClassSymbolToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetMostValidLoadoutFromPS
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UHDKit*                                      Loadout                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::GetMostValidLoadoutFromPS(class APlayerState* PlayerState, class UHDKit** Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetMostValidLoadoutFromPS");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loadout != nullptr)
			*Loadout = params.Loadout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnVoiceMsgInfoSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::OnVoiceMsgInfoSet(bool bIsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnVoiceMsgInfoSet");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet_Params params {};
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Tick");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PlayerLoadoutChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      NewLoadout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::PlayerLoadoutChanged(class UHDKit* NewLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PlayerLoadoutChanged");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged_Params params {};
		params.NewLoadout = NewLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PreConstruct");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnInitialized");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Activate");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Deactivate");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.InputAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::InputAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.InputAnimFinished");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_InputAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_OutputListing_C::ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing");
		
		UWBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_VOIPIndicator_OutputListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_VOIPIndicator_OutputListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C");
		return ptr;
	}

}


