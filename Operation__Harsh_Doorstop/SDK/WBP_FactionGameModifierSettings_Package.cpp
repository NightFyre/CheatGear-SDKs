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
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.GetTravelURLOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Options                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::GetTravelURLOptions(class FString* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.GetTravelURLOptions");
		
		UWBP_FactionGameModifierSettings_C_GetTravelURLOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.IsEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_FactionGameModifierSettings_C::IsEnabled(bool* bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.IsEnabled");
		
		UWBP_FactionGameModifierSettings_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEnabled != nullptr)
			*bEnabled = params.bEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildTicketCountURLOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Pair                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::BuildTicketCountURLOption(EHDTeam Team, int32_t Count, class FString* Pair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildTicketCountURLOption");
		
		UWBP_FactionGameModifierSettings_C_BuildTicketCountURLOption_Params params {};
		params.Team = Team;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pair != nullptr)
			*Pair = params.Pair;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildFactionURLOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PackageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Pair                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::BuildFactionURLOption(EHDTeam Team, const class FName& PackageName, class FString* Pair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildFactionURLOption");
		
		UWBP_FactionGameModifierSettings_C_BuildFactionURLOption_Params params {};
		params.Team = Team;
		params.PackageName = PackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pair != nullptr)
			*Pair = params.Pair;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              Loaded                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94(TArray<class UClass*> Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94");
		
		UWBP_FactionGameModifierSettings_C_Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.SetupModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionMenu_CreateGame_C*                ParentMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.SetupModifier");
		
		UWBP_FactionGameModifierSettings_C_SetupModifier_Params params {};
		params.ParentMenu = ParentMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_FactionGameModifierSettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Destruct");
		
		UWBP_FactionGameModifierSettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.ExecuteUbergraph_WBP_FactionGameModifierSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FactionGameModifierSettings_C::ExecuteUbergraph_WBP_FactionGameModifierSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.ExecuteUbergraph_WBP_FactionGameModifierSettings");
		
		UWBP_FactionGameModifierSettings_C_ExecuteUbergraph_WBP_FactionGameModifierSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FactionGameModifierSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FactionGameModifierSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C");
		return ptr;
	}

}


