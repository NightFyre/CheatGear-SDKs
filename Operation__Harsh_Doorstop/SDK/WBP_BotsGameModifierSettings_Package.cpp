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
	 * 		Name   -> Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.GetTravelURLOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Options                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_BotsGameModifierSettings_C::GetTravelURLOptions(class FString* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.GetTravelURLOptions");
		
		UWBP_BotsGameModifierSettings_C_GetTravelURLOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.IsEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_BotsGameModifierSettings_C::IsEnabled(bool* bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.IsEnabled");
		
		UWBP_BotsGameModifierSettings_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEnabled != nullptr)
			*bEnabled = params.bEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.BuildBotCountURLOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Pair                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_BotsGameModifierSettings_C::BuildBotCountURLOption(EHDTeam Team, int32_t Count, class FString* Pair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.BuildBotCountURLOption");
		
		UWBP_BotsGameModifierSettings_C_BuildBotCountURLOption_Params params {};
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
	 * 		Name   -> Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.SetupModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionMenu_CreateGame_C*                ParentMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BotsGameModifierSettings_C::SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.SetupModifier");
		
		UWBP_BotsGameModifierSettings_C_SetupModifier_Params params {};
		params.ParentMenu = ParentMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.ExecuteUbergraph_WBP_BotsGameModifierSettings
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BotsGameModifierSettings_C::ExecuteUbergraph_WBP_BotsGameModifierSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.ExecuteUbergraph_WBP_BotsGameModifierSettings");
		
		UWBP_BotsGameModifierSettings_C_ExecuteUbergraph_WBP_BotsGameModifierSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BotsGameModifierSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BotsGameModifierSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C");
		return ptr;
	}

}


