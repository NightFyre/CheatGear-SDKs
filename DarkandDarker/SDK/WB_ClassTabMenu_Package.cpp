/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassTabMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.Construct");
		
		UWB_ClassTabMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuPerkandSkillButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ClassTabMenu_C::TapMenuPerkandSkillButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuPerkandSkillButtonClicked");
		
		UWB_ClassTabMenu_C_TapMenuPerkandSkillButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.UpdateTapMenuSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetClassGroupType                              CurrentTapType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassTabMenu_C::UpdateTapMenuSwitch(EWidgetClassGroupType CurrentTapType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.UpdateTapMenuSwitch");
		
		UWB_ClassTabMenu_C_UpdateTapMenuSwitch_Params params {};
		params.CurrentTapType = CurrentTapType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuLevelButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ClassTabMenu_C::TapMenuLevelButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuLevelButtonClicked");
		
		UWB_ClassTabMenu_C_TapMenuLevelButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuSpellButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ClassTabMenu_C::TapMenuSpellButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.TapMenuSpellButtonClicked");
		
		UWB_ClassTabMenu_C_TapMenuSpellButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.OnLobbyCharacterInfoUpdated_BP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             CharacterClassId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassTabMenu_C::OnLobbyCharacterInfoUpdated_BP(const struct FPrimaryAssetId& CharacterClassId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.OnLobbyCharacterInfoUpdated_BP");
		
		UWB_ClassTabMenu_C_OnLobbyCharacterInfoUpdated_BP_Params params {};
		params.CharacterClassId = CharacterClassId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassTabMenu.WB_ClassTabMenu_C.ExecuteUbergraph_WB_ClassTabMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassTabMenu_C::ExecuteUbergraph_WB_ClassTabMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassTabMenu.WB_ClassTabMenu_C.ExecuteUbergraph_WB_ClassTabMenu");
		
		UWB_ClassTabMenu_C_ExecuteUbergraph_WB_ClassTabMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassTabMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassTabMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassTabMenu.WB_ClassTabMenu_C");
		return ptr;
	}

}


