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
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.GetClassIconForLoadout
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDKit*                                      Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 ClassIconToUse                                             (Parm, OutParm)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::GetClassIconForLoadout(class UHDKit* Loadout, struct FSlateBrush* ClassIconToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.GetClassIconForLoadout");
		
		UWBP_DeployMenu_SquadMemberListing_C_GetClassIconForLoadout_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassIconToUse != nullptr)
			*ClassIconToUse = params.ClassIconToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdatePlayerClassIcon
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::UpdatePlayerClassIcon(class UHDKit* Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdatePlayerClassIcon");
		
		UWBP_DeployMenu_SquadMemberListing_C_UpdatePlayerClassIcon_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetupOptions
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::SetupOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetupOptions");
		
		UWBP_DeployMenu_SquadMemberListing_C_SetupOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.TestOptionPrereqs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::TestOptionPrereqs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.TestOptionPrereqs");
		
		UWBP_DeployMenu_SquadMemberListing_C_TestOptionPrereqs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdateColorOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEvenNumberListing                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::UpdateColorOffset(bool bEvenNumberListing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdateColorOffset");
		
		UWBP_DeployMenu_SquadMemberListing_C_UpdateColorOffset_Params params {};
		params.bEvenNumberListing = bEvenNumberListing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetPlayerNameText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewPlayerName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::SetPlayerNameText(const class FText& NewPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetPlayerNameText");
		
		UWBP_DeployMenu_SquadMemberListing_C_SetPlayerNameText_Params params {};
		params.NewPlayerName = NewPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_SquadMemberListing_C_BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::OnMemberSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberSet");
		
		UWBP_DeployMenu_SquadMemberListing_C_OnMemberSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberPlayerNameUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NewPlayerName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::OnMemberPlayerNameUpdated(const class FString& NewPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberPlayerNameUpdated");
		
		UWBP_DeployMenu_SquadMemberListing_C_OnMemberPlayerNameUpdated_Params params {};
		params.NewPlayerName = NewPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.PreConstruct");
		
		UWBP_DeployMenu_SquadMemberListing_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.Tick");
		
		UWBP_DeployMenu_SquadMemberListing_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadMemberListing_C::ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing");
		
		UWBP_DeployMenu_SquadMemberListing_C_ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_SquadMemberListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_SquadMemberListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C");
		return ptr;
	}

}


