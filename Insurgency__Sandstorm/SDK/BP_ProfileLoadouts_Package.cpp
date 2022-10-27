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
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnNavToFuctionDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     CurrentPosition                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnNavToFuctionDown(class UWidget** CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnNavToFuctionDown");
		
		UBP_ProfileLoadouts_C_OnNavToFuctionDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPosition != nullptr)
			*CurrentPosition = params.CurrentPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetMenuSection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMenuSquadLayoutSection                     MenuSection                                                (Parm, OutParm)
	 */
	void UBP_ProfileLoadouts_C::GetMenuSection(struct FMenuSquadLayoutSection* MenuSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetMenuSection");
		
		UBP_ProfileLoadouts_C_GetMenuSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuSection != nullptr)
			*MenuSection = params.MenuSection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnXPUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            InXP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnXPUpdated(int64_t InXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnXPUpdated");
		
		UBP_ProfileLoadouts_C_OnXPUpdated_Params params {};
		params.InXP = InXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_ProfileLoadouts_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnCustomNavigation");
		
		UBP_ProfileLoadouts_C_OnCustomNavigation_Params params {};
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
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsCompetitiveSection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FMenuSquadLayoutSection                     Layout_section                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	bool UBP_ProfileLoadouts_C::IsCompetitiveSection(const struct FMenuSquadLayoutSection& Layout_section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsCompetitiveSection");
		
		UBP_ProfileLoadouts_C_IsCompetitiveSection_Params params {};
		params.Layout_section = Layout_section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTimeButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnTimeButtonClicked(const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTimeButtonClicked");
		
		UBP_ProfileLoadouts_C_OnTimeButtonClicked_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetWeaponPreviewRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::SetWeaponPreviewRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetWeaponPreviewRotation");
		
		UBP_ProfileLoadouts_C_SetWeaponPreviewRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RegisterWeaponPreview
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::RegisterWeaponPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RegisterWeaponPreview");
		
		UBP_ProfileLoadouts_C_RegisterWeaponPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetPlayerExperience
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerExperience                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::GetPlayerExperience(int32_t* PlayerExperience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetPlayerExperience");
		
		UBP_ProfileLoadouts_C_GetPlayerExperience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerExperience != nullptr)
			*PlayerExperience = params.PlayerExperience;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsClassRestricted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerClassLimit                           Class_Slot                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::IsClassRestricted(const struct FPlayerClassLimit& Class_Slot, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsClassRestricted");
		
		UBP_ProfileLoadouts_C_IsClassRestricted_Params params {};
		params.Class_Slot = Class_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ProfileLoadouts_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFocusReceived");
		
		UBP_ProfileLoadouts_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.CanNavigateBack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               CanNavigate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::CanNavigateBack(bool* CanNavigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.CanNavigateBack");
		
		UBP_ProfileLoadouts_C_CanNavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanNavigate != nullptr)
			*CanNavigate = params.CanNavigate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.PressBackButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::PressBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.PressBackButton");
		
		UBP_ProfileLoadouts_C_PressBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ResetPreviewMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::ResetPreviewMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ResetPreviewMeshes");
		
		UBP_ProfileLoadouts_C_ResetPreviewMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectLoadoutCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::SelectLoadoutCamera(bool bCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectLoadoutCamera");
		
		UBP_ProfileLoadouts_C_SelectLoadoutCamera_Params params {};
		params.bCharacter = bCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTabSelected");
		
		UBP_ProfileLoadouts_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.HoveredPlayerClass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                PlayerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoverState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerClassLimit                           PlayerClassLimit                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileLoadouts_C::HoveredPlayerClass(class UPlayerClass* PlayerClass, int32_t Slot, bool bHoverState, const struct FPlayerClassLimit& PlayerClassLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.HoveredPlayerClass");
		
		UBP_ProfileLoadouts_C_HoveredPlayerClass_Params params {};
		params.PlayerClass = PlayerClass;
		params.Slot = Slot;
		params.bHoverState = bHoverState;
		params.PlayerClassLimit = PlayerClassLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SaveLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::SaveLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SaveLoadout");
		
		UBP_ProfileLoadouts_C_SaveLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectPlayerClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                PlayerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::SelectPlayerClass(class UPlayerClass* PlayerClass, int32_t ClassSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectPlayerClass");
		
		UBP_ProfileLoadouts_C_SelectPlayerClass_Params params {};
		params.PlayerClass = PlayerClass;
		params.ClassSlot = ClassSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedGametypeButton
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::UpdateSelectedGametypeButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedGametypeButton");
		
		UBP_ProfileLoadouts_C_UpdateSelectedGametypeButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedFactionButton
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::UpdateSelectedFactionButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedFactionButton");
		
		UBP_ProfileLoadouts_C_UpdateSelectedFactionButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetupPlayerClasses
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMenuSquadLayoutSection                     MenuSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileLoadouts_C::SetupPlayerClasses(struct FMenuSquadLayoutSection* MenuSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetupPlayerClasses");
		
		UBP_ProfileLoadouts_C_SetupPlayerClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuSection != nullptr)
			*MenuSection = params.MenuSection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectGametype
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GameTypeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::SelectGametype(int32_t GameTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectGametype");
		
		UBP_ProfileLoadouts_C_SelectGametype_Params params {};
		params.GameTypeId = GameTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectFaction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::SelectFaction(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectFaction");
		
		UBP_ProfileLoadouts_C_SelectFaction_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnGametypeButtonPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnGametypeButtonPressed(const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnGametypeButtonPressed");
		
		UBP_ProfileLoadouts_C_OnGametypeButtonPressed_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFactionButtonPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnFactionButtonPressed(const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFactionButtonPressed");
		
		UBP_ProfileLoadouts_C_OnFactionButtonPressed_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RefreshData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::RefreshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RefreshData");
		
		UBP_ProfileLoadouts_C_RefreshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.Construct");
		
		UBP_ProfileLoadouts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnRefreshMenuSquadLayouts
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::OnRefreshMenuSquadLayouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnRefreshMenuSquadLayouts");
		
		UBP_ProfileLoadouts_C_OnRefreshMenuSquadLayouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSoldierCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature(EItemSlot ItemSlot, int32_t SubSlot, bool bSoldierCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature_Params params {};
		params.ItemSlot = ItemSlot;
		params.SubSlot = SubSlot;
		params.bSoldierCamera = bSoldierCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::OnLoadoutCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutCanceled");
		
		UBP_ProfileLoadouts_C_OnLoadoutCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLightScenarioSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::OnLightScenarioSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLightScenarioSelected");
		
		UBP_ProfileLoadouts_C_OnLightScenarioSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");
		
		UBP_ProfileLoadouts_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ExecuteUbergraph_BP_ProfileLoadouts
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::ExecuteUbergraph_BP_ProfileLoadouts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ExecuteUbergraph_BP_ProfileLoadouts");
		
		UBP_ProfileLoadouts_C_ExecuteUbergraph_BP_ProfileLoadouts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnPressedBackButton__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileLoadouts_C::OnPressedBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnPressedBackButton__DelegateSignature");
		
		UBP_ProfileLoadouts_C_OnPressedBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutPanelSwitched__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewPanelIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileLoadouts_C::OnLoadoutPanelSwitched__DelegateSignature(int32_t NewPanelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutPanelSwitched__DelegateSignature");
		
		UBP_ProfileLoadouts_C_OnLoadoutPanelSwitched__DelegateSignature_Params params {};
		params.NewPanelIndex = NewPanelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileLoadouts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileLoadouts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileLoadouts.BP_ProfileLoadouts_C");
		return ptr;
	}

}


