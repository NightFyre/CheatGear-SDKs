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
	 * 		Name   -> Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.GetTravelURLOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Options                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_GameModifierSettings_C::GetTravelURLOptions(class FString* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.GetTravelURLOptions");
		
		UBPI_GameModifierSettings_C_GetTravelURLOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.IsEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_GameModifierSettings_C::IsEnabled(bool* bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.IsEnabled");
		
		UBPI_GameModifierSettings_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEnabled != nullptr)
			*bEnabled = params.bEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.SetupModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionMenu_CreateGame_C*                ParentMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GameModifierSettings_C::SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.SetupModifier");
		
		UBPI_GameModifierSettings_C_SetupModifier_Params params {};
		params.ParentMenu = ParentMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_GameModifierSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_GameModifierSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GameModifierSettings.BPI_GameModifierSettings_C");
		return ptr;
	}

}


