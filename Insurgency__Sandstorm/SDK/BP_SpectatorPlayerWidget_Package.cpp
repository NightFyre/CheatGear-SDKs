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
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateBackgroundColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateBackgroundColor");
		
		UBP_SpectatorPlayerWidget_C_UpdateBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateKillsAssistsDeaths
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewKills                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewAssists                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDeaths                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateKillsAssistsDeaths(int32_t NewKills, int32_t NewAssists, int32_t NewDeaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateKillsAssistsDeaths");
		
		UBP_SpectatorPlayerWidget_C_UpdateKillsAssistsDeaths_Params params {};
		params.NewKills = NewKills;
		params.NewAssists = NewAssists;
		params.NewDeaths = NewDeaths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateObjectives
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewObjectives                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateObjectives(int32_t NewObjectives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateObjectives");
		
		UBP_SpectatorPlayerWidget_C_UpdateObjectives_Params params {};
		params.NewObjectives = NewObjectives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateScore(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateScore");
		
		UBP_SpectatorPlayerWidget_C_UpdateScore_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayerStateData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdatePlayerStateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayerStateData");
		
		UBP_SpectatorPlayerWidget_C_UpdatePlayerStateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.RemoveUnusedInventoryIcons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::RemoveUnusedInventoryIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.RemoveUnusedInventoryIcons");
		
		UBP_SpectatorPlayerWidget_C_RemoveUnusedInventoryIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.AddIconForInventoryItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AItemBase*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::AddIconForInventoryItem(class AItemBase* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.AddIconForInventoryItem");
		
		UBP_SpectatorPlayerWidget_C_AddIconForInventoryItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateEquipment
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateEquipment");
		
		UBP_SpectatorPlayerWidget_C_UpdateEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsTargetAlive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorPlayerWidget_C::IsTargetAlive(bool* Alive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsTargetAlive");
		
		UBP_SpectatorPlayerWidget_C_IsTargetAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alive != nullptr)
			*Alive = params.Alive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateClassIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateClassIcon");
		
		UBP_SpectatorPlayerWidget_C_UpdateClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsPlayerCurrentTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CurrentViewTarget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorPlayerWidget_C::IsPlayerCurrentTarget(bool* CurrentViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.IsPlayerCurrentTarget");
		
		UBP_SpectatorPlayerWidget_C_IsPlayerCurrentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentViewTarget != nullptr)
			*CurrentViewTarget = params.CurrentViewTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.GetBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_SpectatorPlayerWidget_C::GetBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.GetBackgroundColor");
		
		UBP_SpectatorPlayerWidget_C_GetBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetPlayerHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::SetPlayerHealth(float NewHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetPlayerHealth");
		
		UBP_SpectatorPlayerWidget_C_SetPlayerHealth_Params params {};
		params.NewHealth = NewHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateSoldierData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateSoldierData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateSoldierData");
		
		UBP_SpectatorPlayerWidget_C_UpdateSoldierData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdatePawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePawn");
		
		UBP_SpectatorPlayerWidget_C_UpdatePawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetupBindingIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::SetupBindingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.SetupBindingIcon");
		
		UBP_SpectatorPlayerWidget_C_SetupBindingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateInternalData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdateInternalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdateInternalData");
		
		UBP_SpectatorPlayerWidget_C_UpdateInternalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::UpdatePlayer(class AINSPlayerState* NewPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.UpdatePlayer");
		
		UBP_SpectatorPlayerWidget_C_UpdatePlayer_Params params {};
		params.NewPlayerState = NewPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_SpectatorPlayerWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Construct");
		
		UBP_SpectatorPlayerWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.Tick");
		
		UBP_SpectatorPlayerWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.ExecuteUbergraph_BP_SpectatorPlayerWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorPlayerWidget_C::ExecuteUbergraph_BP_SpectatorPlayerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C.ExecuteUbergraph_BP_SpectatorPlayerWidget");
		
		UBP_SpectatorPlayerWidget_C_ExecuteUbergraph_BP_SpectatorPlayerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpectatorPlayerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpectatorPlayerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpectatorPlayerWidget.BP_SpectatorPlayerWidget_C");
		return ptr;
	}

}


