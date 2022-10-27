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
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.HideCompetitiveOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::HideCompetitiveOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.HideCompetitiveOnConsole");
		
		UBP_Profile_Stats_Weapons_C_HideCompetitiveOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SetCustomNavigationRules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SetCustomNavigationRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SetCustomNavigationRules");
		
		UBP_Profile_Stats_Weapons_C_SetCustomNavigationRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_Profile_Stats_Weapons_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnCustomNavigation");
		
		UBP_Profile_Stats_Weapons_C_OnCustomNavigation_Params params {};
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
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameSource
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapNameText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MapNameSource                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::GetMapNameSource(const class FString& MapNameText, class FString* MapNameSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameSource");
		
		UBP_Profile_Stats_Weapons_C_GetMapNameSource_Params params {};
		params.MapNameText = MapNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapNameSource != nullptr)
			*MapNameSource = params.MapNameSource;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Map_Text_Name                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::GetMapNameText(const class FString& MapName, class FString* Map_Text_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameText");
		
		UBP_Profile_Stats_Weapons_C_GetMapNameText_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Map_Text_Name != nullptr)
			*Map_Text_Name = params.Map_Text_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ReloadWeaponStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::ReloadWeaponStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ReloadWeaponStats");
		
		UBP_Profile_Stats_Weapons_C_ReloadWeaponStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.UpdateFilterBoxes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UpdateGameType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateMaps                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateModes                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Profile_Stats_Weapons_C::UpdateFilterBoxes(bool UpdateGameType, bool UpdateMaps, bool UpdateModes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.UpdateFilterBoxes");
		
		UBP_Profile_Stats_Weapons_C_UpdateFilterBoxes_Params params {};
		params.UpdateGameType = UpdateGameType;
		params.UpdateMaps = UpdateMaps;
		params.UpdateModes = UpdateModes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Profile_Stats_Weapons_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnFocusReceived");
		
		UBP_Profile_Stats_Weapons_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByWeaponName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SortByWeaponName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByWeaponName");
		
		UBP_Profile_Stats_Weapons_C_SortByWeaponName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameSortIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Stats_Weapons_C::GetWeaponNameSortIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameSortIcon");
		
		UBP_Profile_Stats_Weapons_C_GetWeaponNameSortIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameTextColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetWeaponNameTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameTextColor");
		
		UBP_Profile_Stats_Weapons_C_GetWeaponNameTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetWeaponNameBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameBackgroundColor");
		
		UBP_Profile_Stats_Weapons_C_GetWeaponNameBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByHeadshots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SortByHeadshots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByHeadshots");
		
		UBP_Profile_Stats_Weapons_C_SortByHeadshots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsSortIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Stats_Weapons_C::GetHeadshotsSortIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsSortIcon");
		
		UBP_Profile_Stats_Weapons_C_GetHeadshotsSortIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsTextColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetHeadshotsTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsTextColor");
		
		UBP_Profile_Stats_Weapons_C_GetHeadshotsTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetHeadshotsBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsBackgroundColor");
		
		UBP_Profile_Stats_Weapons_C_GetHeadshotsBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByAccuracy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SortByAccuracy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByAccuracy");
		
		UBP_Profile_Stats_Weapons_C_SortByAccuracy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracySortIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Stats_Weapons_C::GetAccuracySortIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracySortIcon");
		
		UBP_Profile_Stats_Weapons_C_GetAccuracySortIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyTextColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetAccuracyTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyTextColor");
		
		UBP_Profile_Stats_Weapons_C_GetAccuracyTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetAccuracyBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyBackgroundColor");
		
		UBP_Profile_Stats_Weapons_C_GetAccuracyBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByTimePlayed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SortByTimePlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByTimePlayed");
		
		UBP_Profile_Stats_Weapons_C_SortByTimePlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedSortIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Stats_Weapons_C::GetTimePlayedSortIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedSortIcon");
		
		UBP_Profile_Stats_Weapons_C_GetTimePlayedSortIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedTextColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetTimePlayedTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedTextColor");
		
		UBP_Profile_Stats_Weapons_C_GetTimePlayedTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetTimePlayedBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedBackgroundColor");
		
		UBP_Profile_Stats_Weapons_C_GetTimePlayedBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsSortIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Stats_Weapons_C::GetKillsSortIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsSortIcon");
		
		UBP_Profile_Stats_Weapons_C_GetKillsSortIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsTextColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetKillsTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsTextColor");
		
		UBP_Profile_Stats_Weapons_C_GetKillsTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_Weapons_C::GetKillsBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsBackgroundColor");
		
		UBP_Profile_Stats_Weapons_C_GetKillsBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnProfileUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::OnProfileUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnProfileUpdated");
		
		UBP_Profile_Stats_Weapons_C_OnProfileUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByKills
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::SortByKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByKills");
		
		UBP_Profile_Stats_Weapons_C_SortByKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.RebuildTableData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FStatisticsPlayerWeaponStats>        WeaponStatsArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::RebuildTableData(TArray<struct FStatisticsPlayerWeaponStats>* WeaponStatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.RebuildTableData");
		
		UBP_Profile_Stats_Weapons_C_RebuildTableData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponStatsArray != nullptr)
			*WeaponStatsArray = params.WeaponStatsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.Construct");
		
		UBP_Profile_Stats_Weapons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ExecuteUbergraph_BP_Profile_Stats_Weapons
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_Weapons_C::ExecuteUbergraph_BP_Profile_Stats_Weapons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ExecuteUbergraph_BP_Profile_Stats_Weapons");
		
		UBP_Profile_Stats_Weapons_C_ExecuteUbergraph_BP_Profile_Stats_Weapons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_Stats_Weapons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_Stats_Weapons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C");
		return ptr;
	}

}


